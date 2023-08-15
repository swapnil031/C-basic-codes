#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    char a[20];
    char *ptr;
    ptr=s;
    printf("enter a word\t");
    //scanf("%s",&s);
    gets(s);
    int k=strlen(s);
    //ptr=s;
    for(int i=0;i<k;i++)
    {
        a[i]=*(ptr+i);
        //ptr++;
    }
    for(int i=0;i<k;i++)
    {
        printf("%c",a[i]);
    }    
    //printf("%s",a);
    //printf("the word is %s",s);
}