#include <iostream>

using namespace std;

void display(char ** parr, int i, int num)
{
    switch (num)
    {
    case 48:
        for (int j = 1; j < 4; j++)
        {
            parr[j][i * 4 + 1] = '.';
        }
        break;
    
    case 49:
        for (int j = 0; j < 5; j++)
        {
            parr[j][i * 4] = '.';
            parr[j][i * 4 + 1] = '.';
        }
        break;
    case 50:
        parr[1][i * 4] = '.';
        parr[1][i * 4 + 1] = '.';
        parr[3][i * 4 + 1] = '.';
        parr[3][i * 4 + 2] = '.';
        break;
    case 51:
        parr[1][i * 4] = '.';
        parr[1][i * 4 + 1] = '.';
        parr[3][i * 4] = '.';
        parr[3][i * 4 + 1] = '.';
        break;
    case 52:
        parr[0][i * 4 + 1] = '.';
        parr[1][i * 4 + 1] = '.';
        parr[3][i * 4] = '.';
        parr[3][i * 4 + 1] = '.';
        parr[4][i * 4] = '.';
        parr[4][i * 4 + 1] = '.';
        break;

    case 53:
        parr[1][i * 4 + 1] = '.';
        parr[1][i * 4 + 2] = '.';
        parr[3][i * 4] = '.';
        parr[3][i * 4 + 1] = '.';
        break;

    case 54:
        parr[1][i * 4 + 1] = '.';
        parr[1][i * 4 + 2] = '.';
        parr[3][i * 4 + 1] = '.';
        break;

    case 55:
        for (int j = 1; j < 5; j++)
        {
            parr[j][i * 4] = '.';
            parr[j][i * 4 + 1] = '.';
        }
        break;

    case 56:
        parr[1][i * 4 + 1] = '.';
        parr[3][i * 4 + 1] = '.';
        break;

    case 57:
        parr[1][i * 4 + 1] = '.';
        parr[3][i * 4] = '.';
        parr[3][i * 4 + 1] = '.';
        break;
    }
}

int main()
{
    int n;
    char num;
    cin >> n;
    char * parr[5];
    for (int i = 0; i < 5; i++)
    {
        parr[i] = new char [n * 4 - 1];
    }
    
    for (int i = 0; i < 4 * n - 1; i++)
    {
        if ((i + 1) % 4 == 0)
        {
            for (int h = 0; h < 5; h++)
            {
                parr[h][i] = '.';
            }
            
        }
        else
        {
            for (int j = 0; j < 5; j++)
            {
                parr[j][i] = 'X';
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        display(parr, i, int(num));
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n * 4 - 1; j++)
        {
            cout << parr[i][j];
        }
        cout << endl;
    }
    
}