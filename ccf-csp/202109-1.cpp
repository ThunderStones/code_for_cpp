#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    unsigned int max[size], min[size], b[size];
    for (int i = 0; i < size; i++)
        cin >> b[i];

    max[0] = b[0];
    min[0] = b[0];

    for (int i = 1; i < size; i++)
    {
        int gap = b[i] - b[i - 1];
        if (gap == 0)
        {
            max[i] = max[i - 1];
            min[i] = 0;
        }
        else
        {
            max[i] = min[i] = b[i];
        }
        
    }
    int maxCount(0), minCount(0);
    for (int i = 0; i < size; i++)
    {
        maxCount += max[i];
        minCount += min[i];
    }
    
    cout << maxCount << endl << minCount;
    
    return 0;
}
