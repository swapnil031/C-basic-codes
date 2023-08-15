#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[20];
    char b[20];
    char c[20];
    char *p;
    char *q;
    p=a;
    q=b;
    printf("enter the first string");
    gets(a);
    printf("enter the second string");
    gets(b);
    int l=strlen(a);
    int m=strlen(b);
    for(i=0;i<l;i++)
    {
        c[i]=*(p+i);
    }
    for(j=0;j<m;j++)
    {
        c[i]=*(q+j);
        i++;
    }
    puts(c);

}