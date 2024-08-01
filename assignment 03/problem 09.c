#include <stdio.h>
int main()
{
  int    i, j, k, sum = 0;
  int a[2][3], b[3][4], mul[2][4];


  printf("Enter elements of first matrix\n");

  for (i = 0; i < 2; i++)
  {
      for (j = 0; j < 3; j++)
      {
          scanf("%d", &a[i][j]);
      }

  }
  printf("the first matrix is:\n");
  for (i = 0; i < 2; i++)
  {
      for (j = 0; j < 3; j++)
      {
          printf("%d\t", a[i][j]);
      }
    printf("\n");
  }



    printf("Enter elements of second matrix\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &b[i][j]);
        }

    }
    printf("the second matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", b[i][j]);
        }
    printf("\n");
    }


    for (i = 0; i< 2; i++)
    {
      for (j = 0; j < 4; j++)
       {
        for (k = 0; k < 3; k++)
        {
          sum = sum + a[i][k]*b[k][j];
        }

        mul[i][j] = sum;
        sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (i = 0; i < 2; i++) {
      for (j = 0; j < 4; j++)
        printf("%d\t", mul[i][j]);

      printf("\n");
    }


  return 0;
}
