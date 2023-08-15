#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("abc.txt","r");
    if(fp1==NULL)
    {
        printf("error");
        exit(0);
    }
    fp2=fopen("xyz.txt","w");
    /*if(fp2==NULL)
    {
        printf("error");
        exit(0);
    }*/
    while((c=fgetc(fp1))!=EOF)
    {
        //fputc(c,fp2);
        fprintf(fp2,"%c",c);
    }
    fclose(fp1);
    fclose(fp2);
}