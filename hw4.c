#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BinaryConvert(int n) {
	if (n > 0) {
		BinaryConvert(n / 2);
		printf("%d", n % 2);
	}

}

int main(void) {
	int number;

	printf("Please enter a number: ");
	scanf("%d", & number);
	
	if (number > 0) {
		BinaryConvert(number);
	}
	else
		printf("0");

	return 0;
}