#include<stdio.h>
int main()
{
    char str1[50]="my name is ";
    char str2[]="refat pasha";

    int i=0,j=0,len=0;
    while(str1[i]!=0)
    {
        i++;
        len++;
    }
    while(str2[j]!=0)
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("str1 = %s",str1);


    return 0;
}
