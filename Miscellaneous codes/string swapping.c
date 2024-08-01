#include<stdio.h>
int main()
{
    char a[20];
    char b[20];
    char c[20];

    gets(a);
    gets(b);

    printf("before swapping\n\n");
    printf("a=%s\n\n",a);
    printf("b=%s\n\n",b);

    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);

    printf("after swapping\n\n");
    printf("a=%s\n\n",a);
    printf("b=%s\n\n",b);

    return 0;
}
