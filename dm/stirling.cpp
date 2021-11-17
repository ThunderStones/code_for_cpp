// #pragma GCC optimize(1)
#include <iostream>
#include <ctime>

using namespace std;
// S(n, k) = S(n - 1, k - 1) + k * S(n - 1, k)

const int N = 10000;
const int K = 5000;

uint64_t stirlingResursion(int n, int k) {
    if (n == k || k == 1)
        return 1;
    
    return stirlingResursion(n - 1, k - 1) + k * stirlingResursion(n - 1, k);
    
}
uint64_t stir[N][K];
uint64_t stirlingLoop(int n, int k) {
    int count = n - k;

    
    for (int i = 1; i <= k; i++)
    {
        for (int j = i; j <= i + count; j++)
        {
            if (i == j || i == 1)
                stir[j - 1][i - 1] = 1;
            else
                stir[j - 1][i - 1] = stir[j - 2][i - 2] + (long long)i * stir[j - 2][i - 1];
        }
        
    }
    return stir[n - 1][k - 1];
}

int main() {
    clock_t startTime;
    clock_t endTime;
    clock_t time1, time2;
    
    // startTime = GetTickCount();
    // cout << stirlingResursion(70, 8) << endl;
    // endTime = GetTickCount();
    // time1 = endTime - startTime;
    // cout << startTime << ' ' << endTime << endl;
    printf("    ");
    for (int i = 1; i < 35; i++)
    {
        printf("%5d", i);
    }
    printf("\n");
    for (int i = 1; i < 100; i++) {
        printf("%4d", i);
        for (int j = 1; j <= i; j++)
        {
            startTime = clock();
            for (int i = 0; i < 10; i++)
            {
                stirlingLoop(i, j);
            }
            
            
            endTime = clock();
            time2 = endTime - startTime;
            if (time2 != 0)
            printf("%5d %5d %5d", i, j, time2);
        }
        cout << endl;

    }
}