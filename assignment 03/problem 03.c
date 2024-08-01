#include <stdio.h>
int main()
{
    int i,j,a[3][3],sum=0,n,m=3;

	 printf("enter matrix:\n");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           scanf("%d",&a[i][j]);
            }
        }
	 printf("the matrix is :\n");
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3;j++)
       {
           printf("% 4d",a[i][j]);
       }
	    printf("\n");
	 }

	 for(i=0;i<3;i++)
	 {
           m=m-1;
	   for(j=0;j<3;j++)
            {
              if (j==m)
                {
                  sum= sum+a[i][j];
                }
            }
	 }
       printf("sum ofleft Diagonal is:%d\n",sum);

return 0;
}
