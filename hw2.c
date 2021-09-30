#include<stdio.h>

int main(void)
{
	double km, mile=0;
	
	printf("please enter kilometers: ");
	scanf_s("%lf", &km);
	mile = km / 1.609;
	printf("%.1f is equal to %.1f miles. \n", km, mile);
	return 0;

}