#include<stdio.h>
int main()
{
	int i,j=0;
	char a[20];
	printf("Enter the string: ");
	gets(a);
	printf("The entered string is %s\n",a);
	for(i=0;a[i]!='\0';i++);
	//{
	//	j++;
//	}
	printf("the length of the string is %d",i);
	return 0;
}
