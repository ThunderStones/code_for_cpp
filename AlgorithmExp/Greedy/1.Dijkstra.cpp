int dijkstra(int ** matrix, int size){
    int red[size] = {0}, blue[size] = {0};
    int distance[size], parent[size];

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
    
}