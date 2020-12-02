#include <iostream>
#include "mytemperature.h"
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(15) << left << "Celsius" << setw(15) << "Fahrenheit" << setw(15) << "Fahrenheit" << setw(15) << "Celsius" << endl;
    double C(40.0), F(120.0);
    for (int i = 1; i <=10; i++)
    {
        cout << setw(15) << left<< fixed << setprecision(1) << C << setw(15) << celsiusToFah(C) << setw(15) << F << setw(15) << fahrenheit(F);
        C -= 1;
        F -= 10;
        cout << endl;
    }
}

double celsiusToFah(double C)
{
    return C * 9 / 5 + 32;
}

double fahrenheit(double F)
{
    return (F - 32) * 5 / 9;
}
