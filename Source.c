#include <stdio.h>
#include <stdbool.h>

int main() {
	int x;
	scanf_s("%d", &x);
	
	printf("%d", x >= 1000 && x != 4999 && x <= 9999);
		
	return 0;
}							