#include <iostream>

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int i = low;
    int j = high;
    int key = arr[low];
    while (i < j)
    {
        while (i < j && arr[j] >= key)
            j--;
        if (i < j) arr[i] = arr[j];
        while (i < j && arr[i] < key)
            i++;
        if (i < j) arr[j] = arr[i];
    }
    arr[i] = key;
    quickSort(arr, low, i - 1);
    quickSort(arr, i + 1, high);
}


int main(int argc, char const *argv[])
{
    int data[10] = {85,66,9,55,2,65,43,26,22,3};
    quickSort(data, 0, 9);
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << data[i] << ' ';
    }
    
    return 0;
}
