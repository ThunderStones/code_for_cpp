#include <iostream>
#include <windows.h>
using namespace std;
int sum1 = 1;
int xunhuan(int x)
{
    int i, sum = 0;
    for (i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}
int digui(int x)
{
    if (x > 1)
        sum1 = x + digui(x - 1);
    return sum1;
}
int main()
{
    int x = 0, a, b;
    cin >> x;
    LARGE_INTEGER ntime;
    LARGE_INTEGER begintime;
    LARGE_INTEGER endtime;
    double time;
    QueryPerformanceFrequency(&ntime);
    QueryPerformanceCounter(&begintime);
    a = digui(x);
    QueryPerformanceCounter(&endtime);
    time = (double)(endtime.QuadPart - begintime.QuadPart) / (double)ntime.QuadPart;
    cout << "递归时间：" << time << endl; 

    QueryPerformanceCounter(&begintime);
    b = xunhuan(x);
    QueryPerformanceCounter(&endtime);
    time = (double)(endtime.QuadPart - begintime.QuadPart) / (double)ntime.QuadPart;
    cout << "循环时间：" << time << endl; 


    cout << a << endl;
    cout << b;
    system("pause");
}