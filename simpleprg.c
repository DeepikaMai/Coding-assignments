#include<stdio.h>
// program to find vowels, constants, space
void main()
{

    int i,words=0,vowel=0,space=0,cons=0;
    char c[30];
    for(i=0;c[i]!=' ';i++)
    {
        scanf("%c",&c[i]);
    }
    for(i=0;c[i]!='\n';i++)
    {
        if(c[i]!=' '){
            words++;
        }
        else
        {
            space++;
        }
    }
    for(i=0;c[i]!='\n';i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o'|| c[i]=='u')
        {
            vowel++;
        }
        else
        {
            cons++;
        }
    }
    printf(" words=%d\n space=%d \n vowel=%d \n cons=%d",words,space-1,vowel,cons-1);
}
