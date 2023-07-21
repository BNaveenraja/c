#include<stdio.h>
int main()
{
int a,b,sum,div,mul,sub;
printf("Enter the number a:");
scanf("%d",&a);
printf("Enter the number b:");
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("Sum of the number:%d",sum);
printf("subtract the number :%d",sub);
printf("multiply the number :%d",mul);
printf("divide the number :%d",div);
return 0;
}
