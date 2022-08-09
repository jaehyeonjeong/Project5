#include <stdlib.h>
#include <stdio.h>

int main()
{
	char AS = 64;

	int N;
	int cn = 1;

	char* arr;
	scanf("%d", &N);

	arr = malloc(N * N);

	int i, j;


	for (i = 0; i < N * N; i++)
	{
		if (AS == 90)
		{
			AS = 64;
		    AS += cn;
			arr[i] = AS;
		}
		else
		{
		    AS += cn;
			arr[i] = AS;
		}

	}

	int length = (N * N) - 1;
	int sub = 0;

	for (i = 0; i < N; i++)
	{
		sub++;
		for (j = 0; j < N; j++)
		{
			printf("%c ", arr[length]);
			length -= N;
		}
		length = (N * N) - 1;
		length = length - sub;

		printf("\n");
	}

	free(arr);

	return 0;
}