#include<stdio.h>
int main()
{
    char c1,c2,s1[100],s2[100];
    int c,i,j;
    printf("1.using strlen function:\n");
    printf("2.using for loop:\n");

    scanf("%d",&c);

    if(c==1)
    {
        scanf("%s%s",&s1,&s2);
    printf("string1: %s\n",s1);
    printf("string2: %s\n",s2);
    c1=strlen(s1);
    c2=strlen(s2);

    printf("string1 length: %ld\n",c1);
    printf("string2 length: %ld\n",c2);

    if(strcmp(s1,s2))
        printf("strings are not equal\n");
    else
        printf("string are equal\n");
    }


    else if(c==2)
    {
         scanf("%s%s",&s1,&s2);
    printf("string1: %s\n",s1);
    printf("string2: %s\n",s2);


    for (i = 0; s1[i] != '\0'; ++i);
    printf("Length of string1 is %d\n", i);
    for (j = 0; s2[j] != '\0'; ++j);
    printf("Length of string2 is %d\n", j);


    if(strcmp(s1,s2))
        printf("strings are not equal\n");
    else
        printf("string are equal\n");
    }


    return 0;
}
