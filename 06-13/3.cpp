#include <stdio.h>

int main() {
	int fib[10] = {1, 1};
	
	int i;
	for (i = 2; i < 10; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	
	for (i = 0; i < 10; i++) printf("%i\n", fib[i]);
}
