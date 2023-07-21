#include<stdio.h>
int main()
{
int mark;
printf("Enter the mark:");
scanf("%d",&mark);
if(mark<=100)
{
if(mark>=50)
{
printf("Pass");
}
else
{
printf("Fail");
}
}
else
{
printf("Fail");
}
return 0;
}
