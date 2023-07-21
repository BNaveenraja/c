#include<stdio.h>
int main()
{
int temp;
printf("Temperature of the moisture content:");
scanf("%d",&temp);
printf("Temperature is %d degree celsius\n",temp);
if(temp>=40)
{
printf("Water content is needed\n");
}
else
{
printf("Water content is not needed");
}
return 0;
}
