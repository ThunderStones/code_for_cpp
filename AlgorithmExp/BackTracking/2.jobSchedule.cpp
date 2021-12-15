#include <iostream>
using namespace std;

class JobSchedule
{
public:
    int **time;
    int *result;
    int bestTime;
    int *f2;
    int f1;
    int jobCount;
    int totalTime;

    JobSchedule(int, int **);
    void backTrack(int i);
    void swap(int i, int j);
    void printResult();
};

JobSchedule::JobSchedule(int n, int **time)
{
    this->time = time;
    this->result = new int[n];
    this->f2 = new int[n];
    this->jobCount = n;
    this->f1 = 0;
    this->bestTime = INT_MAX;
    this->totalTime = 0;
    for (int i = 0; i < n; i++)
    {
        result[i] = i;
        f2[i] = 0;
    }
}

void JobSchedule::swap(int i, int j)
{
    int temp = result[i];
    result[i] = result[j];
    result[j] = temp;
}

void JobSchedule::backTrack(int i)
{
    if (i == jobCount)
    {
        bestTime = totalTime;
        printResult();
        return;
    }
    for (size_t j = i; j < jobCount; j++)
    {
        f1 += time[result[j]][0];
        if (i == 0)
            f2[i] = f1 + time[result[j]][1];
        else
            f2[i] = ((f2[i - 1] > f1) ? f2[i - 1] : f1) + time[result[j]][1];

        totalTime += f2[i];
        if (totalTime < bestTime)
        {
            swap(i, j);
            backTrack(i + 1);
            swap(i, j);
        }
        totalTime -= f2[i];
        f1 -= time[result[j]][0];
    }
}

void JobSchedule::printResult()
{
    cout << "当前搜索到的最优时间" << bestTime << endl
         << "顺序";
    for (int i = 0; i < jobCount; i++)
    {
        cout << result[i] << ' ';
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int jobCount;
    cout << "作业数：";
    cin >> jobCount;
    int **time = new int *[3];
    cout << "      机器1  机器2\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "作业" << i + 1 << ':';
        time[i] = new int[2];
        cin >> time[i][0] >> time[i][1];
    }
    // time[0][0] = 2;
    // time[0][1] = 1;
    // time[1][0] = 3;
    // time[1][1] = 1;
    // time[2][0] = 2;
    // time[2][1] = 3;
    JobSchedule jobSchedule(jobCount, (int **)time);
    jobSchedule.backTrack(0);

    return 0;
}
