#include <stdio.h>

int convCase(int ch) {
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main(void) {
	char str[50];
	int i = 0;

	printf("input> ");
	fgets(str, sizeof(str), stdin);

	for (i = 0; i < (int)strlen(str); i++)
		str[i] = convCase(str[i]);

	printf("output> ");
	printf("%s\n", str);

	return 0;
}