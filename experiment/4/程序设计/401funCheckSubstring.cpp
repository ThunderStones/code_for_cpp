#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char* s1, const char* s2)
{
    int index(-1);
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    for (int i = 0; i < size2 - size1 + 1; i++)
    {
        if (*s1 == *s2)
        {
            int j;
            for (j = 1; j < size1; j++)
            {
                if (*(s1 + j) != *(s2 + j))
                {
                    break;
                }
            }
            if (j == size1)
            {
                index = i;
                return index;
            }
            
        }
        s2++;
    }
    return index;
    
}

int main()
{
    char s1[100];
    char s2[100]; 
    cout << "First String:";
    cin.getline(s1, 100);
    cout << "Second String:";
    cin.getline(s2, 100);
    cout << indexOf(s1, s2);
}