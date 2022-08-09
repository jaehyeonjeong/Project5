#include <stdio.h>

int main()
{
	char AS = 64;

	int i, j, cn = 1;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (AS == 90)
			{
				AS = 64; 
				printf("%c ", AS += cn);
			}
			else
			{
				printf("%c ", AS += cn);
			}
		}
		printf("\n");
	}
}