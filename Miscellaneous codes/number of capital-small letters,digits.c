#include<stdio.h>
int main()
{
    char a[50];
    int i,capital,small,digit;
    i=capital=small=digit=0;

   printf("enter string: ");
    gets(a);

    while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<=90)
            capital++;

        else if(a[i]>=97 && a[i]<=122)
            small++;

        else if(a[i]>=48 && a[i]<=57)
            digit++;

        i++;

    }

    printf("number of capital letter = %d\n",capital);
    printf("number of small letter = %d\n",small);
    printf("number of digit = %d\n",digit);

    getch();
}
