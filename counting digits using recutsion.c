#include<stdio.h>
int count(int a,int b)
{
	
 	if(a>0)
	{
		//int b;
		//b++;
		b+=1;
		return count(a/10,b);
	}
	else
		return b;
			
}
int main()
{
	int a,b=0,c;
	printf("enter a number:");
	scanf("%d",&a);
	c=count(a,b);
	printf("%d",c);
}
