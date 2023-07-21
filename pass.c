#include<stdio.h>
int main()
{int mark;
do{
printf("Enter a mark:");
scanf("%d",&mark);
if(mark>=50)
{
printf("Pass\n");
}
else
{
printf("Fail\n");
}}
while(mark<=100);
return 0;
}
