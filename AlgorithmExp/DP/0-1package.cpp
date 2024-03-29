#include <iostream>
using namespace std;

inline int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int knapSack(int *v, int *w, int packageSize, int count, int **m)
{
    int jMax = min(w[count], packageSize);
    for (int i = 1; i < jMax; i++)
    {
        m[count][i] = 0;
    }
    for (int i = jMax; i <= packageSize; i++)
    {
        m[count][i] = v[count];
    }
    for (size_t i = count - 1; i >= 1; i--)
    {
        jMax = min(w[i], packageSize);
        for (size_t j = 1; j < jMax; j++)
        {
            m[i][j] = m[i + 1][j];
        }
        for (size_t j = jMax; j <= packageSize; j++)
        {
            m[i][j] = (m[i + 1][j] > m[i + 1][j - w[i]] + v[i]) ? m[i + 1][j] : m[i + 1][j - w[i]] + v[i];
        }
    }
    return m[1][packageSize];
}

int main(int argc, char const *argv[])
{
    int **m = new int *[6];
    for (size_t i = 0; i < 6; i++)
    {
        m[i] = new int[11];
    }
    for (size_t i = 1; i < 6; i++)
        for (size_t j = 1; j < 11; j++)
            m[i][j] == 0;
    int w[6] = {0, 2, 2, 6, 5, 4};
    int v[6] = {0, 6, 3, 5, 4, 6};
    cout << "w = {2,2,6,5,4}" << endl << "v = {6,3,5,4,6}" << endl << "max = ";
    cout << knapSack(v, w, 10, 5, m) << endl;
    for (size_t i = 1; i < 6; i++)
    {
        for (size_t j = 1; j < 11; j++)
        {
            cout << m[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
