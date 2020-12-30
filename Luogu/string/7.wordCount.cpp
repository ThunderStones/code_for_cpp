#include <iostream>
#include <string>

using namespace std;

string * split(string str, int size)
{
    int n(0);
    
    string *p = new string[size];
    for (int i = 0; i < size; i++)
    {
        int m = str.find(' ');
        p[i] = str.substr(n, m);
        str = str.substr(m + 1, str.length());
    }
    return p;
}

int main()
{
    string word, sen;
    int count(0), sum(-1), min(-1);
    cin >> word;
    getline(cin, sen);
    int size(0);
    for (int i = 0; i < sen.length(); i++)
    {
        if (sen[i] == ' ')
        {
            size++;
        }
        
    }
    size++;
    string * pstr = split(sen, size);
    for (int i = 0; i < size; i++)
    {
        sum++;
        if (word == pstr[i])
        {
            count++;
            if (sum == -1)
            {
                min = sum;
            }
            
        }
        sum += pstr[i].length();
    }
    if (min == -1)
    {
        cout << -1;
    }
    else
    {
        cout << min << count;
    }
    
}