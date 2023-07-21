#include<stdio.h>
void areaofcir(int r)
{float area;
area=3.14*r*r;
printf("Area of circle is:%f",area);
}
int main()
{
int r;
printf("Enter the radius:");
scanf("%d",&r);
areaofcir(r);
return 0;
}
