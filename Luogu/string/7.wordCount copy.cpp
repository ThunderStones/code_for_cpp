#include <iostream>
#include <string>
// #include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string word, sen;
    int count(0), sum(0), min(-1);
    cin >> word;
    cin.ignore();
    getline(cin, sen);
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    transform(sen.begin(), sen.end(), sen.begin(), ::tolower);
    int pos, n(0), wsize = word.size();
    do
    {
        pos = sen.find(word, n);
        if (pos != string::npos)
        {
            n = pos + wsize;
            count++;
            min = min == -1 ? pos : min;
        }
    } while (pos != string::npos);
    if (min == -1)
    {
        cout << -1;
    }
    else
    {
        cout << count << ' ' << min;
    }
    
    
    
    
}