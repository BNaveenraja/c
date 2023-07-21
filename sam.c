#include<stdio.h>
int areaofrec(int len,int brd)
{
    int area;
    area=len*brd;
    return area;
}
int main()
{
    int l=10,b=5;
    int area=areaofrec(l,b);
    printf("Area=%d",area);
}


