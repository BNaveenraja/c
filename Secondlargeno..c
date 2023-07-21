#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int max=a[0];
for(int i=1;i<=sizeof(a)/sizeof(a[0]);i++)
{if(max<a[i]){
max=a[i];}
}printf("%d",max);
}



