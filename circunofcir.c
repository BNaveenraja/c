#include<stdio.h>
float circumofcir(int r)
{
    float cir;
    cir=2*3.14*r;
    return cir;
}
float areaofcir(int r)
{
    float area;
    area=3.14*r*r;
    return area;
}
int main()
{
    int r;
    scanf("%d",&r);
    float cir=circumofcir(r);
    printf("Circumstance=%f",cir);
    float area=areaofcir(r);
    printf("\nArea=%f",area);
    return 0;
}


