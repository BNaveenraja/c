#include<stdio.h>
int main()
{
int num;
printf("Enter the mark:");
scanf("%d",&num);
if(num>=95&&num<=100)
{
printf("Gold Medalist");
}
else if(num>=90&&num<95)
{
printf("Silver Medalist");
}
else if(num>=85&&num<90)
{
printf("Bronze Medalist");
}
else
{
printf("Average");
}
return 0;
}
