#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union sw
{
    char zifu;
    int ascll;
}a;
int main()
{
    printf("if need ascll print '1' else print'2'\n");
    int i;
    scanf("%d",&i);
    if(i==1)
    {
        fflush(stdin);
        scanf("%c",&a.zifu);
        printf("%d\n",a.ascll);
    }
    else
    {
        scanf("%d",&a.ascll);
        printf("%c\n",a.zifu);
    }
//    system("pause"); 
}
