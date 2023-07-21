int main()
{
	char s[20];
	int n=0,t=0,i;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
if(s[i]=='z')
t++;
else if(s[i]=='o')
n++;
else
continue;
	}
	if((t*2)==n)
	printf("Yes");
	else
	printf("No");
	return 0;
}
