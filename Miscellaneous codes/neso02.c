#include<stdio.h>
void fun(int n)
{
    int i,j,k,count=0;
    for(i=n/2;i<=n;i++)
        for(j=1;j<=n;2*j)
            for(k=1;k<=n;k++)
    count++;
}
int main()
{
    fun(5);
}
