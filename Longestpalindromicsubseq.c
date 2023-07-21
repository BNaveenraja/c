#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    char s[]={'b','a','b','a','d'};
    char *p  =s;
    int n=((strlen(s))*2)+1;
 char a[n];
 int j=0;
 for(int i=0;i<n-1;i++)
 {
        a[i]='#';
         a[i+1]=*(p+j);
     i=i+1;
     j++;

 }
     a[n-1]='#';
 int index[n];
 index[0]=0;
 int t1,t2,c;
 for(int i=1;i<n;i++)
 {
t1=i-1;
t2=i+1;
while(t1>=0&&t2<=n-1){
if(a[t1]==a[t2])
{
    index[i]++;
    t1--;
    t2++;
}
else
break;
}
}
 int max=index[0];
 int maxc;
 for(int i=0;i<n;i++)
 {
     if(index[i]>max){
     max=i;
     maxc=index[i];
     }
 }
 maxc-=1;
 int start =abs(max-maxc);
 int end=abs(max+maxc);
 for(int i=start;i<=end;i++ )
{
if(a[i]!='#')
{
printf("%c",a[i]);
}
}
}
