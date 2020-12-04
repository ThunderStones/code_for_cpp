#include <iostream>

using namespace std;

int main()
{
    int appleHeight[10], height, count(0);
    for (int i = 0; i < 10; i++)
    {
        cin >> appleHeight[i];
    }
    cin >> height;
    for (int i = 0; i < 10; i++)
    {
        if (height + 30 >= appleHeight[i])
        {
            count += 1;
        }
        
    }
    cout << count;
}