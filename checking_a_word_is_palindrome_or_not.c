#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,a,flag=0;
    char c[100];
    printf("enter a word\t");
    gets(c);
    a=strlen(c);
    int k=a;
    printf("\n the word length is %d\n",a);
    for(i=0;i<a;i++)
    {
        for(j=i;j<k/2;j++)
        {
            if(c[j]==c[a-1])
               {
                    flag++;
                    a--;
                    //continue;                        
               } 
                
            else
                break;    
        }
    }
    if(flag==k/2)
        printf("the word is palindrome\t");
    else
        printf("the word is not a palindrome");

}