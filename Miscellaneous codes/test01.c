#include <stdio.h>
int main()
{
  int    i, j, k, sum = 0;
  int a[3][3], b[3][3], mul[3][3];


  printf("Enter elements of first matrix\n");

  for (i = 0; i < 3; i++)
  {
      for (j = 0; j < 3; j++)
      {
          scanf("%d", &a[i][j]);
      }

  }

    printf("Enter elements of second matrix\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }

    }

    for (i = 0; i< 3; i++)
    {
      for (j = 0; j < 3; j++)
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

    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++)
         printf("%d\t", mul[i][j]);


      printf("\n");
    }


  return 0;
}

