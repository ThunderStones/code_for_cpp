#include <iostream>
using namespace std;

inline int pow2(int k)
{
    int temp = 1;
    for (int i = 0; i < k; i++)
    {
        temp *= 2;
    }
    return temp;
}
void roundRobinSchedule(int **table, int row, int column, int k)
{
    if (k == 1)
    {
        table[row][column] = column;
        table[row][column + 1] = column + 1;
        table[row + 1][column] = column + 1;
        table[row + 1][column + 1] = column;
        return;
    }
    else
    {
        int n = pow2(k);
        // divide
        roundRobinSchedule(table, row, column, k - 1);
        roundRobinSchedule(table, row, column + n / 2, k - 1);
        // conquer
        for (int i = row; i < row + n / 2; i++)
        {
            for (int j = column; j < column + n / 2; j++)
            {
                table[i + n / 2][j + n / 2] = table[i][j];
                table[i + n / 2][j] = table[i][j + n / 2];
            }
        }
    }
}

inline int **createTable(int size)
{
    int **table = new int *[size];
    for (int i = 0; i < size; i++)
    {
        table[i] = new int[size];
    }
    return table;
}

void print(int **table, int size)
{
    printf("     ");
    for (int i = 1; i < size; i++)
    {
        printf("%3d", i);
    }
    cout << endl;
    for (int i = 0; i < size * 4; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        printf("%4d|", i + 1);
        for (int j = 1; j < size; j++)
        {
            printf("%3d", table[i][j] + 1);
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int k;
    cin >> k;
    int **table = createTable(pow2(k));

    roundRobinSchedule(table, 0, 0, k);
    print(table, pow2(k));
    return 0;
}
