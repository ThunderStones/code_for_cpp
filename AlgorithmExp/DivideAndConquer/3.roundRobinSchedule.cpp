void roundRobinSchedule(int ** table, int row, int column , int k) {
    if (k == 1)
    {
        table[row][column]= column;
        table[row][column + 1] = column + 1;
        table[row + 1][column]= column + 1;
        table[row][column + 1] = column;
        return;
    }
    else
    {
        
    }
}