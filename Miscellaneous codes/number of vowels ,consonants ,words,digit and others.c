#include<stdio.h>
int main()
{
    char x[200],ch;
    int i,vowel,consonant,digit,word,other;

    printf("enter a string :");
    gets(x);

    i=vowel=consonant=digit=word=other=0;

    while((ch=x[i])!='\0')
    {
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'  )
        vowel++;

      else if((ch>='a' && ch<='z' )|| (ch>='A' && ch<='Z'))
        consonant++;

      else if(ch>='0' && ch<='9')
        digit++;

      else if(ch==' ')
        word++;
      else
        other++;


      i++;
    }
    word++;

    printf("number of vowels = %d\n",vowel);
    printf("number of consonants = %d\n",consonant);
    printf("number of words = %d\n",word);
    printf("number of digits = %d\n",digit);
    printf("number of others = %d\n",other);


    return 0;
}
