#include <stdio.h>

int max(int num1, int num2);

int main() {
	int a = 9;
	int b = 3;
	int output;

	output = max(a, b);
	printf("Max value is : %d\n", output);

	return 0;
}

int max(int num1, int num2) {
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}