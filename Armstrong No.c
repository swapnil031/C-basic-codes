#include <stdio.h>
int main()
{
int a,b,arm=0,i;
scanf("%d",&a);
i=a;
while(a>0)
    {
      arm=arm+((a%10)*(a%10)*(a%10));
      a=a/10;
    }
if(arm==i)//hello
{
  printf("Armstrong");
}
else
{
  printf("Arms are not strong");
}
return 0;
}