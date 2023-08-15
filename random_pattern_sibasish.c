#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,k,l;
    int m=5;
    char s[4]={'a','b','c','d'};
   
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",s[j]);
        }
         if(m>=2)
        {
           for(k=1;k<=2*(m-1)-3;k++)
            {
                printf(" ");
                m--;
            }
        }
        for(l=0;l<=i;l++)
        {
            printf("%c",s[i-l]);
        }
        printf("\n");
    }
}