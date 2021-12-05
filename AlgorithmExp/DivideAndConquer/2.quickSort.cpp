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