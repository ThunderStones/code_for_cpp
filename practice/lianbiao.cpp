#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        int xh;
        int score;
        char name[10];
        struct student *next;
    } * a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i] = (struct student *)malloc(sizeof(struct student));
    }

    int i, n = 0;
    for (i = 0; i < 3; i++)
    {
        // scanf("%d", &a[i]->xh);
        // scanf("%d", &a[i]->score);
        // fflush(stdin);
        // gets(a[i]->name);
    }
    a[0] = (struct student*)malloc(sizeof(struct student));
    for (int i = 1; i < 3; i++)
    {
        a[i] = (struct student*)malloc(sizeof(struct student));
        a[i - 1]->next = a[i];
        
    }
    a[2]->next = NULL;


    struct student *phead;
    struct student *ptemp;
    ptemp = phead;
    while (ptemp != NULL)
    {
        printf("%d\n%d\n", ptemp->xh, ptemp->score);
        printf("%s", ptemp->name);
        ptemp = ptemp->next;
    }
    system("pause");
}