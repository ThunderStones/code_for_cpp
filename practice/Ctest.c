#include <stdio.h>
#include <stdlib.h>
double s(int n)
{
    int i;
    double sum = 0;
    for (i = n; i <= 2 * n - 1; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n, i, m;
    m = 1;
    double y;
    y = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        y += m * i * i / s(i);
        m = - m;
    }
    printf("%lf", y);
    // system("pause");
}