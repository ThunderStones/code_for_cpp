#include <iostream>

using namespace std;
//(7x+21k)52=n
int main()
{
    int n;
    cin >> n;
    for (int x = 100; true; x--)
    {
        int kJudge(1);
        if ((n / 52 - 7 * x ) > 0)
        {
            kJudge = (n / 52 - 7 * x ) % 21;
        }
        
        if (kJudge == 0)
        {
            cout << x << endl << (n / 52 - 7 * x ) / 21; 
            break;
        }
        
        
    }
    
}