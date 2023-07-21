#include <stdio.h>
int main()
{
int n,i,position;
printf("\n size of array:\n");
scanf("%d",&n);
int arr[n];
printf("\n Enter the elements of array:\n");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("\nenter the position to be deleted:\n");
scanf("%d",&position);
for (i = position - 1; i < n - 1; i++)
arr[i] = arr[i+1];
printf("Array after deletion is:\n");
for (i = 0; i <= n-1; i++)
{
printf("%d ", arr[i]);
}
return 0;
}
