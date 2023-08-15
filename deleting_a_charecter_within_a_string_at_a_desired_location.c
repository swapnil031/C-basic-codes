#include<stdio.h>
int main()
{
    int i,n,j=0;
    char s[50];
    char b[50];
    printf("enter a string:\t");
    gets(s);
    printf("%s\n",s);
    printf("enter the position:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        b[j]=s[i];
        j++;
    }
    //b[j]='\0';
    for(i=n+1;s[i]!='\0';i++)
    {
        b[j]=s[i];
        j++;
    }
    b[j]='\0';
    //for(j=0;j<n;j++)
    printf("%s",b);

}