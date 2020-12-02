#include <iostream>

using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int n1(0), n2(0), n3(0);
    while (n1 < size1 && n2 < size2)
    {
        if (list1[n1] < list2[n2])
        {
            list3[n3] = list1[n1];
            n1++;
            n3++;
        }
        else
        {
            list3[n3] = list2[n2];
            n2++;
            n3++;
        }
        
        
    }
    if (n2 < size2)
    {
        for (int i = n2; i < size2; i++)
        {
            list3[n3] = list2[i];
            n3++;
            // n2++;
        }
    }
    else if (n1 < size1)
    {
        for (int i = n1; i < size1; i++)
        {
            list3[n3] = list1[i];
            n3++;
            // n1++;
        }
    }
    for (int i = 0; i < n3; i++)
    {
        cout << list3[i] << ' ';
    }
    
    
}

int main()
{
    int size1, size2;
    cout << "Enter list1:";
    cin >> size1;
    int list1[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }
    cout << "Enter list2:";
    cin >> size2;
    int list2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> list2[i];
    }
    int list3[size1 + size2];
    merge(list1, size1, list2, size2, list3);

    

}