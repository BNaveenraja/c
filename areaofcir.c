#include<stdio.h>
int areaofcir(int r)
{
    int area;
    area=3.14*r*r;
    return area;
}
int main()
{
    int r=10;
    int area=areaofcir(r);
    printf("Area=%d",area);
    return 0;
}


