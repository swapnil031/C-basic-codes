#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float a,b,c;
    printf("Enter a value in degree:");
    scanf("%f",&a);
    b=(PI*a);
    c=(b/180);
    printf("The value of sin(%f) is %f",a,sin(c));
}