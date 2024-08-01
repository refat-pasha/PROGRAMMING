#include<stdio.h>
#include<string.h>

char string_lenght1(char s1[100],char s2[100])
{
    char c1,c2;

    //scanf("%s%s",&s1,&s2);

    printf("string1: %s\n",s1);
    printf("string2: %s\n",s2);
         c1=strlen(s1);
         c2=strlen(s2);
    printf("lenght is %ld:",c1);
    printf("lenght is %ld:",c2);
}
char stirng_lenght2()
{

}
int main()
{

    char c;
    int ch;
    printf("1.using strlen function\n");
    printf("2.using for loop\n");

    scanf("choice %d",&ch);
    if(ch==1)
    {
        char r1=string_lenght1(refat,pasha);
        printf("string length using strlen function:",r1);
    }
   /* case '2':
        printf("string length using for loop:");

    }


    scanf("%s%s",&s1,&s2);

    printf("string1: %s\n",s1);
    printf("string2: %s\n",s2);
         c=strlen(s2);
    printf("string2: %ld\n",c);

   if (strcmp(s1,s2))
    printf("string are not equal");
   else
    printf("string are equal");

*/

    return 0;
}
