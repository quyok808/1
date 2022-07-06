#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++)
	{
        for(int j=0;j<len;j++)
		{
				int min = j;
				if (i < j)	min = i;
				if (min >= len - i) min = len -i-1;
				if (min >= len - j - 1) min = len - j - 1;
				printf("%d ", n - min);
        }
        printf("\n");
    }
	
    return 0;
}
