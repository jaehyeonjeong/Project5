#include <stdio.h>

int main()
{
	int i, j, N;
	
	scanf("%d", &N);

	int length = (N + N) - 1;
	int start = 1;
	int two = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (j % 2 == 0)
			{
				printf("%d ", start);
				start += length - two;
			}
			else if (j % 2 == 1)
			{
				printf("%d ", start);
				start += 1 + two;
			}
		}
		start = 1;
		printf("\n");
		start += i;
		two += 2;
	}

	return 0;
}