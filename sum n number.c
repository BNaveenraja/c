#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the no:");
    for(i=0;i<n;i++);
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
printf("sum is %d",sum);
return 0;
}
