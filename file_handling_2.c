#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[20];
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    //char c[20]=
    //fgets(s,5,fp);
    //puts(s);
    while (!feof(fp))
    {
        fgets(s,20,fp);
        printf("%s",s);
    }
    fclose(fp);
    
}