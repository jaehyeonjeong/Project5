#include <stdio.h>

int main()
{
	int i, j;
	char ch = 65;
	int N;
	
	int one = 0;

	scanf("%d", &N);

	int num = (N - 1);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (j >= num)
			{
				printf("%c", ch);
				ch += (N - 1) + one;
				one--;
			}
			else
			{
				printf(" ");
			}
			
		}
		one = 0;
		num -= 1;
		printf("\n");
		ch = 66 + i;
	}
}