#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int NUMBER_OF_TRIAL = 1000000;
    int numberOfHit = 0;
    srand(time(0));
    
    for (int i = 0; i <= NUMBER_OF_TRIAL; i++)
    {
        double x = rand() * 2.0 / RAND_MAX -1;
        double y = rand() * 2.0 / RAND_MAX -1;
        if (x*x +y*y <= 1)
            numberOfHit++;
    }
    
    double pi = 4.0 * numberOfHit / NUMBER_OF_TRIAL;
    cout << pi;
}