#include<stdio.h>
int main()
{
	int x,a;
	printf("Enter any number:");
	scanf("%d",&a);
	x=a*a;
	printf("the square is %d\t",x);
	int i=0;
	while(a!=0)
	{
		i=a%10;
		printf("%d",i); 
		a=a/10;
	}
	
}
