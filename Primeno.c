#include<stdio.h>
#include<conio.h>
int main()
{
int a,fl=0,m=0;
scanf("%d",&a);
m=a/2;
for(int i=2;i<=m;i++)
{
if(a%i==0)
printf("NPn");
else
printf("Pn");
return 0;
}}


