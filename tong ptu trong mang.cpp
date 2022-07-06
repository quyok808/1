#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000];
	char a[1000];
	int na=0;
	fflush(stdin);
	gets(s);
	int n = strlen(s);
	for (int i = 0; i <= n; i++)
		if (s[i] != ' ' && s[i] != '\0')
		{
			a[na++] = s[i];	
		}
		else
		{
			a[na] = '\0';
			printf("%s\n",a);
			na = 0;
		}
	return 0;
}
