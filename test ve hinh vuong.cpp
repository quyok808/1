#include <stdio.h>

void ve(int n, int v)
{
	for (int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= n; j++)
    		if (i == 1|| i == n || j == 1 || j == n)
    			printf ("%d ",v);
    		else 
    			printf ("  ");
    	printf("\n");
	}
    
}

int main() 
{
    int n;
    scanf("%d", &n);
    for (int k = 1; k <= n; k++)
    	ve(n,n-1);
    		
    return 0;
}
