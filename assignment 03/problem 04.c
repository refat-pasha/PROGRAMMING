#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum=0;

   printf("enter the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("the matrix is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            sum=sum+a[i][j];
        }
    }
    printf("sum of right diagonal is:%d\n",sum);

return 0;
}
