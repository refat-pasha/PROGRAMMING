#include<stdio.h>
int main()
{
    int x=5,y=9,z=13;

    printf("1. x= %d\n",x+=3);
    y-= (x++);
    printf("2. x= %d y = %d\n",x,y);
    z = (x--) + (--y);
    printf("3. z = %d\n", z++);


    return 0;
}
