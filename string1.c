#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int i;
    char ch[100];
    printf("Enter string:\n");
    scanf("%[^\n]",ch);
    printf("Enter the index: ");
    scanf("%d",&i);
    char *a = strtok(ch," ");
    while(i--)
    {
        a = strtok(NULL," ");
    }
    printf("%s",a);
}
