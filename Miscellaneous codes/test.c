#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("how many number :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int maxcount=0,mincount=0;


    for(i=1; i<n; i++)
    {
        if (max<a[i])
            maxcount++;
        else
            mincount++;

    }
    printf("maxmum : %d minium : %d \n",maxcount,mincount);

    return 0;
}
