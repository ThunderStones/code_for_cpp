#include <iostream>

using namespace std;

void bubbleSort(double num[], int size)
{
    bool changed(false);
    int count = 1;
    do
    {
        changed = false;
        for (int i = 0; i <= size - count - 1; i++)
        {
            if (num[i] > num[i + 1])
            {
                double temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
                changed = true;
            }
            
        }
        count++;
    } while (changed);
    
}

int main()
{
    double num[10];
    for (int j = 0; j < 10; j++)
    {
        cin >> num[j];
    }
    bubbleSort(num, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << ' ';
    }
    
}