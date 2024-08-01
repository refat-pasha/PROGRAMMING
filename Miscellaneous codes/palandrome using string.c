#include<stdio.h>
int main()
{
    char c,a[20],b[20];
    gets(a);
    gets(b);
    c = strrev(a);
    if(a!=c)
      {
        puts(a);
        printf("palandrome!");
      }
    else
    {
        puts(b);
        printf("not palandrome");

    }


    return 0;
}
