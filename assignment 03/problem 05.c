#include <stdio.h>
int main()
{
  int i,j,a[3][2],storedinb[2][3];
  printf("enter matrix:\n");
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


  for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
    {
        storedinb[j][i]=a[i][j];
    }
  }

  printf("\ntranspose of the matrix:\n");
  for (i=0;i<3;i++)
  for (j=0;j<3;j++) {
    printf("%d\t",storedinb[i][j]);
    if (j == 3 - 1)
    printf("\n");
  }
  return 0;
}
