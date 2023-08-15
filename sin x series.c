#include<stdio.h>
#include<math.h>
int main()
{
	double x,sum;
	double a=1.0;
	double sum2=0.0;
	printf("enter any number for the sin x series:");
	scanf("%lf",&x);
	x=x*(3.14/180);
	printf("%lf",x);
	for(int i=1;i<=5;i++)
	{
		if(i==1)
		{
			//sum=x/i;
			a=x;
			continue;
		}
		//a=sum;
		else if(i%2!=0)
		{
			int b=-a*(pow(2,2)/(i*i-1));
			sum2=sum2+b;
			printf("%lf\n",sum2);
		}
	}
	
}
