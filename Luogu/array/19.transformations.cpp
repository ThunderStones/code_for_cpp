#include <iostream>

using namespace std;

bool checkTransformations1(char **ori, char **now, int n)
{
    //顺时针90
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ori[i][j] != now[j][n - i - 1])
            {
                return false;
            }
        }
    }
    return true;
}
bool checkTransformations2(char **ori, char **now, int n)
{
    //旋转180
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ori[i][j] != now[n - i - 1][n - j - 1])
            {
                return false;
            }
        }
    }
    return true;
}
bool checkTransformations3(char **ori, char **now, int n)
{
    //270
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ori[i][j] != now[n - j - 1][i])
            {
                return false;
            }
        }
    }
    return true;
}
bool checkTransformations4(char **ori, char **now, int n)
{
    //镜像
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ori[i][j] != now[i][n - j - 1])
            {
                return false;
            }
        }
    }
    return true;
}

void doTransformations4(char **ori, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int temp = ori[i][j];
            ori[i][j] = ori[i][n - j - 1];
            ori[i][n - j - 1] = temp;
        }
    }
}

bool checkTransformations5(char **ori, char **now, int n)
{
    doTransformations4(ori, n);
    if (checkTransformations1(ori, now, n) || checkTransformations2(ori, now, n) || checkTransformations3(ori, now, n))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool checkTransformations6(char **ori, char **now, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ori[i][j] != now[i][j])
            {
                return false;
            }
            
        }
        
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    char **ori = new char *[n];
    char **now = new char *[n];
    for (int i = 0; i < n; i++)
    {
        ori[i] = new char[n];
        now[i] = new char[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ori[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> now[i][j];
        }
    }
    if (checkTransformations1(ori, now, n))
    {
        cout << 1;
    }
    else if (checkTransformations2(ori, now, n))
    {
        cout << 2;
    }
    else if (checkTransformations3(ori, now, n))
    {
        cout << 3;
    }
    else if (checkTransformations4(ori, now, n))
    {
        cout << 4;
    }
    else if (checkTransformations5(ori, now, n))
    {
        cout << 5;
    }
    else if (checkTransformations6(ori, now, n))
    {
        cout << 6;
    }
    else
    {
        cout << 7;
    }
    
}