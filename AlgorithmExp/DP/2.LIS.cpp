#include <iostream>
#include <algorithm>
int *LIS(int data[], int size, bool flag)
{
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = 0;
    }
    if (!flag)
    {
        std::reverse(data, data + size);
    }

    for (int i = 0; i < size; i++)
    {
        int max = 0;
        for (int j = 0; j < i; j++)
        {
            if (data[i] > data[j] && max < a[j])
            {
                max = a[j];
            }
        }
        a[i] = max + 1;
    }
    if (!flag)
    {
        std::reverse(a, a + size);
    }

    return a;
}

int main(int argc, char const *argv[])
{
    int date[] = {186, 186, 150, 200, 160, 130, 197, 220};
    int *a = LIS(date, 8, true);
    int *b = LIS(date, 8, false);
    int max = 1;
    for (int i = 0; i < 8; i++)
    {
        if (a[i] + b[i] > max)
        {
            max = a[i] + b[i];
        }
    }
    std::cout << max;
    return 0;
}
