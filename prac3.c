#include <stdio.h>

int main()
{
	int i, j;
	
	int N;
	do
	{
		scanf("%d", &N);
	} while (N < 0 || N > 100);
	
	int start = 1;
	

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d ", start);

			start += N;
		}
		start = 2;
		printf("\n");
		start += i;
	}
}