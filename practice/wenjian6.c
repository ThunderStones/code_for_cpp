#include <stdio.h>
#include <stdlib.h>
#include <process.h>
struct student
{
    char *name;
    int score;
    struct student *pnext;
};
int count;
struct student *create()
{
    struct student *phead = NULL;
    struct student *pnew, *pend;
    count = 0;
    pnew = pend = (struct student *)malloc(sizeof(struct student));
    pnew->name = (char *)malloc(sizeof(char) * 10);
    while (scanf("%s", pnew->name) != EOF)
    {
        scanf("%d", &pnew->score);
        count++;
        if (count == 1)
        {
            pnew->pnext = NULL;
            pend = pnew;
            phead = pnew;
        }
        else
        {
            pnew->pnext = NULL;
            pend->pnext = pnew;
            pend = pnew;
        }
        pnew = (struct student *)malloc(sizeof(struct student));
        pnew->name = (char *)malloc(sizeof(char) * 10);
    }
    free(pnew);
    return phead;
}
void save(char *filename, struct student *phead)
{
    struct student *ptemp = phead;
    FILE *fp;
    if ((fp = fopen(filename, "wb")) == NULL)
    {
        printf("flase route\n");
        fflush(stdin);
        exit(0);
    }
    while (ptemp != NULL)
    {
        if (fwrite(ptemp, sizeof(struct student), 1, fp) != 1)
            printf("file write error\n");
        ptemp = ptemp->pnext;
    }
    fclose(fp);
}
void show(char *filename, struct student *phead)
{
    struct student *ptemp = phead;
    
    FILE *fp;
    if ((fp = fopen(filename, "rb")) == NULL)
    {
        printf("flase route\n");
        fflush(stdin);
        exit(0);
    }
    while (ptemp != NULL)
    {
        fread(ptemp, sizeof(struct student), 1, fp);
        printf("%s %d\n", ptemp->name, ptemp->score);
        ptemp = ptemp->pnext;
    }
    fclose(fp);
}
int main()
{
    char *filename = (char *)malloc(sizeof(char) * 10);
    struct student *phead;
    printf("print the route\n");
    scanf("%s", filename);
    fflush(stdin);
    phead = create();
    save(filename, phead);
    show(filename, phead);
    system("pause");
}
