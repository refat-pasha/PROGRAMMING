#include<stdio.h>
int main()
{
    int a[3][2],i,j,SumofRow;

        printf("enter matrix:\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("the matrix is:\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }

         for(i=0;i<3;i++)
        {
            SumofRow=0;
            for(j=0;j<2;j++)
            {
                SumofRow=SumofRow+a[i][j];
            }
            printf("\nSumofRow=%d",SumofRow);
        }

    return 0;
}
