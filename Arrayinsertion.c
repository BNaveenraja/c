#include <stdio.h>
int main()
{
int n,i,position,element;
printf("\nsize of array:\n");
scanf("%d",&n);
int arr[n];
printf("\nenter the elements of array:\n");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("\nenter the position to be inserted:\n");
scanf("%d",&position);
printf("\nenter the element to insert:\n");
scanf("%d",&element);
for (i = n - 1; i >= position - 1; i--)
arr[i+1] = arr[i];
arr[position-1] = element;
printf("Array after insertion is:\n");
for (i = 0; i <= n; i++)
{
printf("%d ", arr[i]);
}
return 0;
}
