#include<stdio.h>
void areaofrec(int len,int brd)
{
    int area;
    area=len*brd;
    printf("Area=%d",area);
}
int main()

{
    int l=10,b=5;
    areaofrec(l,b);
}


