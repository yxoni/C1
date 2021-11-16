#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int* aptr = &arr1[0];
	int* bptr = &arr2[0];
	int i, temp;
	
	printf("arr1:");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2:");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}

	printf("\n\nafter swap\n\n");

	for (i = 0; i < 6; i++)
	{
		temp = *(aptr + i);
		*(aptr + i) = *(bptr + i);
		*(bptr + i) = temp;
	}

	printf("arr1:");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2:");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
}