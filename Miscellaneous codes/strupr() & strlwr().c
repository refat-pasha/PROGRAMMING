#include<stdio.h>
int main()
{
    char a[20];
    gets(a);
    strupr(a);
    printf("upper case = %s\n\n",a);
    strlwr(a);
    printf("lower case = %s\n\n",a);


    return 0;
}
