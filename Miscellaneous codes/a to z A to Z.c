#include<stdio.h>
int main()
{
   /* char ch;

    for(ch=65;ch<=90;ch++)
    {
        printf("%c ",ch);
    }
    for(ch=97;ch<=122;ch++)
    {
        printf("%c ",ch);
    }*/


    int temp,num1,num2;
    printf("enter any number:");
    scanf("%d%d",&num1,&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("%d\n",num1);
    printf("%d",num2);

    return 0;
}
