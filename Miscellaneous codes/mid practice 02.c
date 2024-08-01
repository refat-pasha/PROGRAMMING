#include<stdio.h>
int main()
{
    int A[5]={2,5,7,6,9},i;

    for(i=0;i<5;i++)
    {
        A[i]=A[i]*i;
    }
    for(i=0;i<5;i++)
    {
        if(i%3==0)
           {
        printf("A[%d]=%d\n",i,A[i]);
        continue;
        printf("hello world\n");
           }
    }

    return 0;
}
