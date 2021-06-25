#include <iostream>
using namespace std;

int main()
{
    int size(0);
    cout << "input array size and content:";
    cin >> size;
    int* p = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                int temp = *(p + j); 
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << *(p + i) << ' ';
    }
    delete []p;
    
}