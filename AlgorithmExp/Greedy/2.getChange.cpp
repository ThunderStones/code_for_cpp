#include <iostream>
void getChange(int n, int res[4])
{
    for (size_t i = 0; i < 4; i++)
    {
        res[i] = 0;
    }

    while (n != 0)
    {
        if (n >= 25)
        {
            res[0]++;
            n -= 25;
        }
        else if (n >= 10)
        {
            res[1]++;
            n -= 10;
        }
        else if (n >= 5)
        {
            res[2]++;
            n -= 5;
        }
        else
        {
            res[3]++;
            n -= 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    int res[5];
    getChange(952, res);
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << res[i] << ' ';
    }
    
    return 0;
}
