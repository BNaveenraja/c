#include<stdio.h>
void circumofcir(int*r)
{
  float circum;
  circum=2*3.14*(*r);
  printf("Circumference of circle is:%f",circum);

}
int main()
{
int x;
printf("Enter the value of x:");
scanf("%d",&x);
circumofcir(&x);
return 0;
}
