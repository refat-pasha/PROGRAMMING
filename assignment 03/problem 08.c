#include<stdio.h>
int main()
{
    int i,j,a[2][3],b[2][3],add[2][3],sub[2][3];
    printf("enter the value of first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of second matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the first matrix is:\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix is:\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("the addition of two matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
          add[i][j]=a[i][j]+b[i][j];
          printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
 printf("the subtraction of two matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
          sub[i][j]=a[i][j]-b[i][j];
          printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
