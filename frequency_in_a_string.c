#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int count=1,i,j;
	printf("Enter the string: ");
	gets(a);
	printf("The entered string is %s\n",a);
	printf("The length of the string is: %d\n",strlen(a));
	for(i=0;i<=strlen(a);i++)
	{
		for(j=1+i;j<=strlen(a);j++)
		{
			if(a[j]==a[i])
			{
				count++;
			
			}
				a[j]='\0';
		}
		printf("%c----%d\n",a[i],count);
	}
}
