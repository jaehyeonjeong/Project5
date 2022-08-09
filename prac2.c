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

	int length = 0;
	int sub = 0;
	int two = 0;

	for (i = 0; i < N; i++)
	{
		sub++;
		for (j = 0; j < N; j++)
		{
			if (j % 2 == 0)//arr[0], arr[2] ÀÏ ¶§ 
			{
				//Â¦
				printf("%c ", arr[length]);
				length += ((N + N) - 1) - two;
			}
			if(j % 2 == 1)//arr[1], arr[3]ÀÏ ¶§
			{
				//È¦
				printf("%c ", arr[length]);
				length += 1 + two;
			}
		}
		length = 0;
		length = length + sub;
		two += 2;

		printf("\n");
	}

	free(arr);

	return 0;
}