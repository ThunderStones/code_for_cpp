#include <iostream>

void mergeSort(int arr[], int left, int right, int temp[])
{
    if (left >=right)
        return;
    
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid, temp);
    mergeSort(arr, mid + 1, right, temp);
    int i = left;
    int j = mid + 1;
    int t = left;
    while (i <= mid && j <= right)
        temp[t++] = arr[i] < arr[j] ? arr[i++]: arr[j++];
    while (i <= mid)
        temp[t++] = arr[i++];
    while (j <= right)
        temp[t++] = arr[j++];
    for (t = left; t <= right; t++)
        arr[t] = temp[t];

}

int main(int argc, char const *argv[])
{
    int data[10] = {85,66,9,55,2,65,43,26,22,3}, temp[10];
    mergeSort(data, 0, 9, temp);
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << data[i] << ' ';
    }
    
    return 0;
}
