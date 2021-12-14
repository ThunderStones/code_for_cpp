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
    std::cout << "需要找零的数目：47" << std::endl;
    getChange(47, res);
    for (size_t i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            std::cout << "2角5分：" << res[i] << std::endl;

            break;
        case 1:
            std::cout << "1角：" << res[i] << std::endl;
            break;
        case 2:
            std::cout << "5分：" << res[i] << std::endl;
            break;
        case 3:
            std::cout << "1分：" << res[i] << std::endl;
            break;
        }
    }

    return 0;
}
