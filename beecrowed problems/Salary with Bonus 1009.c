#include<stdio.h>
int main()
{
    double TOTAL,a,b;
    char name;


    scanf("%s%lf%lf",&name,&a,&b);

    TOTAL=(b*0.15)+a;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
