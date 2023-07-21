#include<stdio.h>
int main()
{
int a[2][3]={{1,2,3},{4,5,6}};
for(int j=0;j<3;j++)
{for(int i=0;i<2;i++)
{
printf("%d\t",a[i][j]);
}
printf("\n");}
return 0;}
