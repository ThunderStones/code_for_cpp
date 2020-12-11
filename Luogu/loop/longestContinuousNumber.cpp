#include <iostream>

using namespace std;

int main()
{
	int size, length(1), maxLength(0);
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < size; i++)
    {
        if (a[i] - 1 == a[i - 1])
        {
            length++;
        }
        else
        {
            maxLength = maxLength < length ? length : maxLength;
            length = 1;
        }
        
    }
    cout << maxLength;
}
