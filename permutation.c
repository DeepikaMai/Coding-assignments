#include<stdio.h>
void perm(char ,char , char ); // permutations for 3 letter word
void main()
{
int i;
char c[5];
for(i=0;i<=2;i++){
    scanf("%c",&c[i]);
}
printf("\nThe permutation is:");
printf("\n");
c[3]=c[0];
c[4]=c[1];
for(i=0;i<=2;i++)
{
perm(c[i],c[i+1],c[i+2]);
perm(c[i+2],c[i+1],c[i]);
}
}
void perm(char a, char b, char c)
{
    char temp;
    char d[5];
    int j=0;
     d[j]=a;
     d[j+1]=b;
     d[j+2]=c;

    temp=d[j+1];
    d[j+1]=d[j+2];
    d[j+2]=temp;
    for(int p=0;p<=2;p++)
    {
        printf("%c",d[p]);
    }
    printf("\n");
}

