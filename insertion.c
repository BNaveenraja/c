#include<stdio.h>
int main()
{
int i,pos,b[i];
int a[5]={1,3,4,5,6};
for(i=0;i<5;i++)
{
b[i]=a[i];
}
for(i=4;i>=pos;i--)
{
b[i+1]=b[i];
}
b[pos]=2;
for(i=0;i<6;i++)
{
printf("%d",b[i]);
}
return 0;
}
