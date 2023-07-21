#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d\n%d\n",&x,&y);
	    if(x<y){
	    printf("%d\n",y-x);}
	    else{
	    printf("%d\n",x-y);
	}}
	return 0;
}



