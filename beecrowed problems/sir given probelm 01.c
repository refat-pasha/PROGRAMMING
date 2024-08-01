# include<stdio.h>
int main()
{
   int n, sum;

    printf("Enter a number\n");
    scanf("%d", &n);

    for(sum=0; n > 0; sum = sum+n%10, n=n/10);

    printf("Sum of digits : %d\n", sum);

    return 0;
}
