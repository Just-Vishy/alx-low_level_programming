#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints nums one to one hundred or words
 *
 * Return: Always 0.
 */

int main(void)
{
	int nums;

	nums = 1;
	while (nums <= 100)
	{
		if (nums % 3 == 0 && nums % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (nums % 5 == 0 && nums != 100 && nums % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (nums % 5 == 0 && nums == 100 && nums % 3 != 0)
		{
			printf("Buzz\n");
		}
		else if (nums % 3 == 0 && nums % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ",nums);
		}
		nums++;
	}
	return (0);
}
