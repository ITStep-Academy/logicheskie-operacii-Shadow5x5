#include <stdio.h>
#include <stdbool.h>

int main() {
	int x, y, z;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	printf("%d", (x % 5 == 0) + (y % 5 == 0) + (z % 5 == 0) == 1);
		
	return 0;
}							