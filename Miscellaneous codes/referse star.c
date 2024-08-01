#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    printf("\n");
    for(i=n;i>0;i--)
    {
      for(j=i;j>0;j--)
      {
          printf("%d ",j);

      }
      printf("\n");
    }
    return 0;
}
