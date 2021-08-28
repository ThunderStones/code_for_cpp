#include <iostream>

using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    int arr[l];
    for (int i = 0; i < l; i++)
    {
        arr[i] = 0;
    }
    
    for (int i = 0; i < n * m; i++) {
        int each;
        cin >> each;
        arr[each]++;
    }
    cout << arr[0];
    for (int i = 1; i < l; i++)
    {
        cout << ' ' << arr[i];
    }
    
    return 0;
}