#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n(9);
    int x[100];
    scanf("%d", &n);
    // fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        // fflush(stdin);
    }
    sort(x, x + n);
    printf("%d", x[0]);
    return 0;
}
