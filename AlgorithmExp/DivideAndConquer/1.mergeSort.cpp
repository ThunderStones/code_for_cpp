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