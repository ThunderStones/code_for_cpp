#include <iostream>

using namespace std;

int main()
{
    int a, out(1);
    cin >> a;
    for (int i = a; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            if (out < 10)
            {
                cout << '0' << out;
            }
            else
            {
                cout << out;   
            }
            out++;
        }
        cout << endl;
    }
}