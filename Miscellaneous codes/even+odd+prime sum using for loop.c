#include<stdio.h>
int main()
{
    int i,n,number,even=0,odd=0,prime=0,count=0;
    printf("How much number you wanna enter : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("Enter your number: ");
        scanf("%d",&number);

        if (number%2==0)
        {
            even=even+number;
        }

        else if (number%2!=0)
        {
            odd=odd+number;
        }

        if (number==1 || number==0)
            {
                count=1;
            }

        for (i = 2; i < number; i++)
        {


            if (number%i==0)
            {
                count++;
            }

        }

        if (count==0)
            {
                prime=prime+number;
            }


        count=0;

    }

    printf("\nThe Total Sum of Even Number  = %d", even);
    printf("\nThe Total Sum of Odd Number   = %d",odd);
    printf("\nThe Total Sum of Prime Number = %d",prime);

return 0;

}
