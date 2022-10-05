#include <stdio.h>

int main(void)
{
	int category[9] = { 0 }; // init all values to 0
	int gross;

	do
	{
		printf("Enter the gross (-1 to stop): ");
		scanf_s("%d", &gross);

		if (gross != -1)
		{
			int salary = 200 + 0.09 * gross;

			for (int i = 0; i < 8; i++)
			{
				// check category
				if (salary > ((2 + i) * 100) && salary < (((2 + i) * 100) + 99))
				{
					category[i]++;
				}
			}
			if (salary > 1000)
			{
				category[8]++;
			}
		}
	} while (gross != -1);

	for (int i = 0; i < 8; i++)
	{
		printf("%d - %d: %d\n", ((2 + i) * 100), (((2 + i) * 100) + 99), category[i]);
	}
	printf("    >1000: %d\n", category[8]);

	return 0;
}