#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int score;
    struct student *pnext;
}; //创建结构体

int count;

struct student *create() //创建链表（struct student*对应return）
{
    struct student *phead = NULL;
    struct student *pend, *pnew; //pnew接收新数据，pend将数据接到链表
    count = 0;
    pend = pnew = (struct student *)malloc(sizeof(struct student)); //给未赋值结构体指针分配空间
    scanf("%s", &pnew->name);
    scanf("%d", &pnew->score);
    while (pnew->score != 0)
    {
        count++;
        if (count == 1)
        {
            pnew->pnext = phead;
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
        scanf("%s", &pnew->name);
        scanf("%d", &pnew->score);
    }
    free(pnew); //释放最后无用的pnew空间
    return phead;
}

int print(struct student *phead) //输出链表
{
    struct student *ptemp;
    ptemp = phead;
    count = 0;
    while (ptemp != NULL)
    {
        printf("%s\n", ptemp->name);
        printf("%d\n", ptemp->score);
        ptemp = ptemp->pnext;
        count++;
    }
    printf("the long of line is %d\n", count);
    return count; //得到链表长度
}

struct student *insert(struct student *phead, int n) //在n之后插入新内容
{
    struct student *pnew, *pend;
    pnew = (struct student *)malloc(sizeof(struct student));
    scanf("%s", &pnew->name);
    scanf("%d", &pnew->score);
    int i;
    pend = phead;
    if (n = 0)
    {
        pnew->pnext = phead;
        phead = pnew;
    }
    else
    {
        for (i = 1; i < n; i++)
            pend = pend->pnext;
        pnew->pnext = pend->pnext;
        pend->pnext = pnew;
    }
    return phead;
}

struct student *delete(struct student *phead, int n) //在n之后删除新内容
{
    struct student *pend;
    pend = phead;
    if (n = 0)
        phead->pnext = phead;
    else
    {
        int i;
        for (i = 1; i <= n; i++)
            pend = pend->pnext;
        pend = pend->pnext;
    }
    return phead;
}

int main()
{
    struct student *phead;
    int n, j, t;
    phead = create();
    t = print(phead);
    printf("there have %d struct intotal\n", t);
    printf("if need insert print'1' elseif need delete print'2' else print'3'\n");
    scanf("%d", &j);
    if (j == 1)
    {
        scanf("%d", &n);
        phead = insert(phead, n);
        t = print(phead);
        printf("there have %d struct intotal\n", t);
    }
    else if (j == 2)
    {
        scanf("%d", &n);
        phead = delete (phead, n);
        t = print(phead);
        printf("there have %d struct intotal\n", t);
    }
    system("pause");
}