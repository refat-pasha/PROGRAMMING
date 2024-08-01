
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    for(j=5;j>=n;--j)
    {

            for(i=1;i<=n;i++)
        {
            printf("%d\n",j);
        }

    }
    return 0;
}
