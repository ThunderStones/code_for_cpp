#include <iostream>
#include "vector.cpp"
using namespace std;

int main()
{
    vector<string> v1;
    vector<string> v2;
    cout << "input five strings:";
    for (int i = 0; i < 5; i++)
    {
        string temp;
        cin >> temp;
        v1.push_back(temp);
    }
    cout << "input five strings:";
    for (int i = 0; i < 5; i++)
    {
        string temp;
        cin >> temp;
        v2.push_back(temp);
    }
    vector<string> v = intersection(v1, v2);
    for (int i = 0, len = v.size(); i < len; i++)
    {
        cout << v[i] << ' ';
    }
    
}