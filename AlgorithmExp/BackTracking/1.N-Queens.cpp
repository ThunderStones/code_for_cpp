#include <iostream>
using namespace std;

int count = 0;

void print(bool **a, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (a[i][j])
            {
                cout << 1 << ' ';
            }
            else
            {
                cout << 0 << ' ';
            }
        }
        cout << endl;
    }
    cout << endl;
}

int nQueens(int row, bool m[], bool l[], bool r[], int n, bool **a)
{
    if (row == 0)
    {
        a = new bool *[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = new bool[n];
        }
        for (int i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                a[i][j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (!m[i] && !l[row + i] && !r[row - i + n])
        {
            a[row][i] = true;
            m[i] = r[row - i + n] = l[row + i] = true;
            if (row == n - 1)
            {
                print(a, n);
                count++;
            }
            else
            {
                nQueens(row + 1, m, l, r, n, a);
            }

            //
            a[row][i] = false;
            m[i] = r[row - i + n] = l[row + i] = false;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    bool m[8] = {0}, r[16] = {0}, l[16] = {0};
    cout << nQueens(0, m, l, r, 8, nullptr);
    return 0;
 }
