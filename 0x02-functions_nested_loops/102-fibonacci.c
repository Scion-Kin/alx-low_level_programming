#include <stdio.h>

int main(void)
{
	int prev1 = 1, prev2 = 2, current;

	printf("%d %d ", prev1, prev2);
 
	for (int i = 2; i < 50; i++)
	{
		current = prev1 + prev2;
		printf("%d ", current);
		prev1 = prev2;
		prev2 = current;
	}

	printf("\n");

	return 0;
}

