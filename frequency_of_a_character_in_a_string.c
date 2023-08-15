#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,k;
    printf("enter any word: ");
    scanf("%s",&s);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        int j=1;
        if(s[i]!='\0')
        {
        for(k=i+1;k<l;k++)
        {   if(s[i]==s[k])
            {
               s[k]='\0';
                ++j;
            }
        }
        printf("%d\t",j); 
        }
    }
}