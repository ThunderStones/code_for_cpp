#include <iostream>
using namespace std;

int *dijkstra(int **matrix, int size)
{
    int red[size] = {0}, blue[size] = {0};
    int *distance = new int[size], parent[size];

    // init
    red[0] = 1;
    for (int i = 0; i < size; i++)
        blue[i] = 1;

    for (int i = 0; i < size; i++)
    {
        distance[i] = matrix[0][i];
        if (distance[i] == -1)
            parent[i] = -1;
        else
            parent[i] = 0;
    }

    //
    for (int i = 1; i < size; i++)
    {
        // find min distance in blue set
        int min;
        for (int j = 0; j < size; j++)
        {
            if (blue[j] == 1)
            {
                min = j;
                break;
            }
        }

        for (int j = min; j < size; j++)
            if (blue[j] == 1 && distance[j] != -1 && distance[j] < distance[min])
                min = j;

        // add the set into red set;
        red[min] = 1;
        blue[min] = 0;

        // relax
        for (int j = 1; j < size; j++)
        {
            if (matrix[min][j] != -1 && min != j)
                if (distance[j] == -1 || distance[j] > distance[min] + matrix[min][j])
                {
                    distance[j] = distance[min] + matrix[min][j];
                    parent[j] = min;
                }
        }
    }
    return distance;
}

int main(int argc, char const *argv[])
{
    int graph[5][5] = {{0, 10, -1, 30, 100},
                       {-1, 0, 50, -1, -1},
                       {-1, -1, 0, -1, 10},
                       {-1, -1, 20, 0, 60},
                       {-1, -1, -1, -1, 0}};

    int *p[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = graph[i];
    }
    int *res = new int[5];
    res = dijkstra(p, 5);
    cout << "从0到各点的最短路径为：" << endl;
    for (size_t i = 1; i < 5; i++)
    {
        cout << res[i] << ' ';
    }

    return 0;
}
