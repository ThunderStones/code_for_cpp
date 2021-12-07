#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int i = low;
    int j = high;
    int key = arr[low];
    while (i < j)
    {
        while (i < j && arr[j] >= key)
            j--;
        if (i < j)
            arr[i] = arr[j];
        while (i < j && arr[i] < key)
            i++;
        if (i < j)
            arr[j] = arr[i];
    }
    arr[i] = key;
    quickSort(arr, low, i - 1);
    quickSort(arr, i + 1, high);
}
int getIndex(int s[], int size, bool isMax = true)
{
    int index = 0, flag = isMax ? 1 : -1;
    for (size_t i = 1; i < size; i++)
    {
        if (s[index] * flag > s[i] * flag)
        {
            index = i;
        }
    }
    return index;
}

int scheduling(int jobCount, int machineCount, int time[])
{
    int s[machineCount] = {0};
    quickSort(time, 0, jobCount - 1);
    for (int i = jobCount - 1; i >= 0; i--)
    {
        int min = getIndex(s, machineCount);
        s[min] += time[i];
    }
    return s[getIndex(s, machineCount, false)];
}

int main(int argc, char const *argv[])
{
    int time[7] = {2, 14, 4, 16, 6, 5, 3};
    cout << "作业数 7\n机器数 3\n时间数组 2 14 4 16 6 5 3\n所需时间 " << scheduling(7, 3, time) << endl;
    return 0;
}
