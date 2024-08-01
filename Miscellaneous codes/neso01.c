#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int var = sizeof(i++);
    printf("%d %d",i,var);
    return 0;
}
