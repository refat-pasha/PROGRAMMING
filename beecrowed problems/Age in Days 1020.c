#include<stdio.h>
int main()
{
    int a,b,c,d;

    scanf("%d",&a);
    b=a/365;
    printf("%d ano(s)\n",b);
    c=(a%365)/30;
    printf("%d mes(es)\n",c);
    d=a%365%30;
    printf("%d dia(s)\n",d);


    return 0;
}
