#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct student
    {
        int xh;
        int score;
        char name[10];
        //struct student *next;
    }a[1];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i].xh);
        scanf("%d",&a[i].score);
        gets(a[i].name);
    }
    for(i=0;i<3;i++)
    {
        printf("%d\n%d\n%s\n",a[i].xh,a[i].score,a[i].name);
    }
    system("pause");
}