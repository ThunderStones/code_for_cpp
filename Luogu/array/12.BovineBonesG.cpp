#include <iostream>

using namespace std;

int main()
{
    int s1, s2, s3, fre(0);
    cin >> s1 >> s2 >> s3;
    int count[s1 + s2 + s3 + 1];
    for (int i = 0; i <= s1 + s2 + s3; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
            {
                count[i + k + j]++;
            }
            
        }
        
    }
    for (int i = 1; i <= s1 + s2 + s3; i++)
    {
        fre = count[fre] >= count[i] ? fre : i;
    }
    cout << fre;
}