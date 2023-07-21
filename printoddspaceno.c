#include<stdio.h>
int main()
{
int a,n;
scanf("%d",&n);
while(n>0)
{
    a=n%10;
    printf("%d",a);
    n=n/100;
}
return 0;
}
