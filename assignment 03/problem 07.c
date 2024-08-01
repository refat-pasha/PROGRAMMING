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

    printf("Display the upper half:\n");
   for(i=0;i<3;i++)
     {
      printf("\n");
      for(j=0;j<3;j++)
           if(i<=j)
             printf("%d\t",a[i][j]);
           else
             printf("%d\t",0);
  }
       printf("\n\n");

return 0;
}
