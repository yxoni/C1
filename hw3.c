#include<stdio.h>

int main(void)
{
	int num;
	printf("please enter a number: ");
	scanf_s("%d", &num);

	if (num == 2)
		printf("It is a prime number.");

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("It is not a prime number.");
			break;
		}

		if (i == num - 1)
		{
			printf("It is a prime number.");
		}
	}
}