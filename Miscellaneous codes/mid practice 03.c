#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter 2 values:");
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            i=i+i;
            printf("%d\n",i);
        }

    }


    return 0;
}
