#include<stdio.h>
int main()
{
int a,b,ret;
scanf("%d%d",&a,&b);
{
ret=((a==b)||(a>=b));
if(ret==1)
{
printf("Statement 1 is True\n");
}
else
{
printf("Statement 1 is False\n");
}}
{
ret=((a>b)&&(a<=b));
if(ret==1)
{
printf("Statement 2 is True\n");
}
else
{
printf("Statement 2 is
       False\n");
}}
return 0;
}
