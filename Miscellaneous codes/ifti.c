#include<stdio.h>
int main()
{
    int a,b,c; char ch1, ch2;
    scanf("%d%c%d%c%d",&a,&ch1,&b,&ch2,&c);
    printf("%02d\/\%02d\/\%02d\n",b,a,c);
    printf("%02d\/\%02d\/\%02d\n",c,b,a);
    printf("%02d\-\%02d\-\%02d\n",a,b,c);


    return 0;
}
