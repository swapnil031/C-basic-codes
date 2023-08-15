#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch[20];
    int age;
    printf("enter a word");
    scanf("%s",&ch);
    printf("enter the age");
    scanf("%d",&age);
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(0);
    }
    //fputs(ch,fp);
    fprintf(fp,(" %s %d"),ch,age);
    fclose(fp);
}