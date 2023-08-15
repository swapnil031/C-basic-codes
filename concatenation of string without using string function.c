#include<stdio.h>
int main()
{
	int i,j;
	char a[20];
	char b[20];
	char c[20];
	printf("Enter the 1st string");
	gets(a);
	printf("Enter the 2nd string");
	gets(b);
	printf("%s\n",a);
	printf("%s\n",b);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!='\0';j++)
	{
		c[i]=b[j];
		i++;
	}
	//c[i]='\0'
	printf("%s",c);
}
