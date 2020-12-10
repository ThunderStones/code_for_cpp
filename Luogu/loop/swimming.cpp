#include <iostream>

using namespace std;

int main()
{
    double distance, swimDistance(2), swumDistance(0);
    int count(0);
    cin >> distance;
    while (swumDistance < distance)
    {
        swumDistance += swimDistance;
        swimDistance *= 0.98;
        count++;
    }
    cout << count;
}