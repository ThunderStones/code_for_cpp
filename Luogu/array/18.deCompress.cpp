#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // string input;
    // getline(cin, input);
    // int n = input.length();
    
    // for (int i = 0; i < n - 1; i++)
    // {
    //     string str;
    //     getline(cin, str);
    //     input.append(str);
    // }
    // int flag = 48;
    // int count(0);
    // cout << n << ' ';
    // for (int i = 0; i < input.length(); i++)
    // {
    //     if (input[i] == flag)
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         flag = 97 - flag;
    //         cout << count << ' ';
    //         count = 1;
    //     }
        
    // }
    // cout << count << ' ';
    int n;
    char text[40000], str[200];
    cin >> text;
    n = strlen(text);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> str;
        strcat(text, str);
    }
    int flag = 48, count(0);
    cout << n << ' ';
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == flag)
        {
            count++;
        }
        else
        {
            cout << count << ' ';
            flag = 97 - flag;
            count = 1;
        }
        
    }
    cout << count;
}