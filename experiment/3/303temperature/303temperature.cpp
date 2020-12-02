
#include "mytemperature.h"

using namespace std;



double celsiusToFah(double C)
{
    return C * 9 / 5 + 32;
}

double fahrenheit(double F)
{
    return (F - 32) * 5 / 9;
}
