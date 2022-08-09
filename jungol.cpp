#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int i, j;
	do
	{
		cin >> x >> y;
		if ((2 > x || 9 < x) || (2 > y || 9 < y))
		{
			cout << "INPUT ERROR!" << endl;
		}
	} while ((2 > x || 9 < x) || (2 > y || 9 < y));

	if (x <= y)
	{
		for (i = 1; i <= 9; i++)
		{
			for (j = x; j <= y; j++)
			{
				printf("%d * %d = %2d ", j, i, i * j);
			}
			cout << endl;
		}
	}
	else if (x > y)
	{
		for (i = 1; i <= 9; i++)
		{
			for (j = x; j >= y; j--)
			{
				printf("%d * %d = %2d ", j, i, i * j);
			}
			cout << endl;
		}
	}

	return 0;
}