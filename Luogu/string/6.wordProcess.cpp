#include <iostream>
#include <string>

using namespace std;
int main()
{
    int count;
    cin >> count;
    string str;
    cin >> str;
    for (int i = 0; i < count; i++)
    {
        int a;
        cin >> a;
        switch (a)
        {
            case 1:
            {
                string temp;
                cin >> temp;
                str += temp;
                cout << str << endl;
                break;
            }
            case 2:
            {
                int n, m;
                cin >> n >> m;
                str = str.substr(n, m);
                cout << str << endl;
                break;
            }
            case 3:
            {
                int n;
                string temp;
                cin >> n >> temp;
                str.insert(n, temp);
                cout << str << endl;
                break;
            }
            case 4:
            {
                string temp;
                cin >> temp;
                if (str.find(temp) == string::npos)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << str.find(temp) << endl;
                }
                break;
            }
        }
    }
    return 0;
}