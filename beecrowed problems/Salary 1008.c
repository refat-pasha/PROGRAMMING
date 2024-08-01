#include<stdio.h>
int main()
{
    int NUMBER;
    float SALARY,A,B;
    scanf("%d",&NUMBER);
    scanf("%f%f",&A,&B);
    SALARY=A*B;


    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
