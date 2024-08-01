/*#include <stdio.h>

int main() {

 int i = 0, j = 0, n, k, x;

 scanf("%d", &n);

 for(i = 0; i < n; ++i)
 {
    scanf("%d", &k);

    for(j = 0; j < k; ++j)
    {
     scanf("%d", &x);

     if(x == 1){
        printf("Rolien\n");
     } else if(x == 2){
       printf("Naej\n");
     } else if(x == 3){
       printf("Elehcim\n");
     } else{
       printf("Odranoel\n");
     }
    }
   }
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
