#include<stdio.h>
int main()
{
    int i,j;
    char c=('refat','nahin');
    printf("enter any name:");
    scanf("%c",&c);

    if(c=='refat')
    for(i=1;i<=50;i++)
    {
        printf("nahin\n");
    }

    else if(c=='nahin')
    for(i=1;i<=50;i++)
    {
        printf("refat\n");
    }

    return 0;
}

