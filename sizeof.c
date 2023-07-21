#include<stdio.h>
int main()
{
int inttype;
char chartype;
float floattype;
long double longdoubletype;
long long longlongtype;
long long int longlonginttype;
printf("size of int is: %zu byte\n",sizeof(int));
printf("size of char is: %zu byte\n",sizeof(char));
printf("size of float is: %zu byte\n",sizeof(float));
printf("size of longdouble is: %zu byte\n",sizeof(long double));
printf("size of longlong is: %zu byte\n",sizeof(long long));
printf("size of longlongint is: %zu byte\n",sizeof(long long int));
return 0;
}
