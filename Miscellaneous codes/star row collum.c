#include<stdio.h>
int main()
{
    int a,b,i,j;

    printf("enter the row number:");
    scanf("%d",&a);

    printf("enter the collum number:");
    scanf("%d",&b);

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
