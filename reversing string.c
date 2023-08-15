#include<stdio.h>
int main()
{
	int i,j;
	char a[20];
	char b[20];
	printf("Enter the string:");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	int m=i;
	for(j=0;j<m;j++)
	{
		b[j]=a[i-1];
		i--;
	}
	b[j]='\0';
	printf("The string is %s",b);
	
}
