#include <iostream>
using namespace std;

void fullPermutation(int n, int *result = nullptr, int current = 0)
{
    if (result == 0)
    {
        result = new int[n];
        for (int i = 0; i < n; i++)
            result[i] = i;
    }

    if (current == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << result[i] + 1 << ' ';
        }
        cout << endl;
        return;
    }

    for (int i = current; i < n; i++)
    {
        swap(result[current], result[i]);
        fullPermutation(n, result, current + 1);
        swap(result[current], result[i]);
    }
}
int main(int argc, char const *argv[])
{
    cout << "N=";
    int n;
    cin >> n;
    fullPermutation(n);
    return 0;
}
