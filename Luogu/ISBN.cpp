#include <iostream>

using namespace std;

int main()
{
    char input[13];
    cin >> input;

    int sum(0), count(1);
    for (int i = 0; i < 11; i++)
    {
        if (input[i] == 45)
        {
            continue;
        }
        else
        {
            sum += (input[i] - 48) * count;
            count++;
        }
        
    }
    char check = sum % 11 == 10 ? 'X' : (char)(sum % 11 + 48);
    if (check == input[12])
    {
        cout << "Right";
    }
    else
    {
        for (int i = 0; i < 12; i++)
        {
            cout << input[i];
        }
        cout << check;
    }
    
    
    
}