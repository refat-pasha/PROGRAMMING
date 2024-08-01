#include <stdio.h>

int main()
{
    //Sum of Consecutive Odd Numbers I
 int x, y, sum = 0, i;
 int min, max;

 printf("enter the first value:");
 scanf("%d", &x);

 printf("enter the second value:");
 scanf("%d", &y);

 if(x < y)
    {
  min = x;
  max = y;
    }
 else
    {
  max = x;
  min = y;
    }

 for(i = (min + 1); i < max; ++i)
 {
  if(i % 2 != 0)
    {
   sum = sum+i;
    }
 }

 printf("Sum of Consecutive Odd Numbers :%d\n", sum);

 return 0;
}
