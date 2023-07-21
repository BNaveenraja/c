#include<stdio.h>
int main()
{
int a,r,n;
scanf("%d",&n);
while(a!=0)
{
    r=n%10;
    a=a+r;
    n=n/10;
}
printf("%d",a);
return 0;
}
