#include <windows.h>

using namespace std;
const unsigned long SLEEP_TIME_MILL = 1000;
 
void calcByQueryPerformanceCounter() {
    LARGE_INTEGER frequency, startCount, stopCount;
    WINBOOL ret;
    //返回性能计数器每秒滴答的个数
    ret = QueryPerformanceFrequency(&frequency);
    if(ret) {
        ret = QueryPerformanceCounter(&startCount);
    }
    Sleep(SLEEP_TIME_MILL);
    if(ret) {
        QueryPerformanceCounter(&stopCount);
    }
    if(ret) {
        LONGLONG elapsed = (stopCount.QuadPart - startCount.QuadPart) * 1000000 / frequency.QuadPart;
        qDebug()<<"QueryPerformanceFrequency & QueryPerformanceCounter ="<<elapsed<<"us";
    }
}
 
 