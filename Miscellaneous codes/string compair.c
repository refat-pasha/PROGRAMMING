#include<stdio.h>
int main()
{
    char str1[]="refat pasha";
    char str2[]="refat";

    int d=strcmp(str1,str2);

    if(d==0)
    {
        printf("strings are equal\n");
    }

    else
        printf("strings are not equal\n");

    return 0;
}
