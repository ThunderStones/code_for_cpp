inline int min(int a, int b) {
    if (a > b)
        return b;
    else
        return a;
}
int knapSack(int * v, int * w, int packageSize, int count, int ** m) {
    int jMax = min(w[count], packageSize);
    for (int i = 1; i < jMax; i++)
        m[count][i] == 0;
    for (int i = jMax; i <= packageSize; i++)
    {
        
    }
    

}