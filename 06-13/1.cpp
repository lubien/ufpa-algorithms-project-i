#include <stdio.h>

int main() {
	int tabuada[10];
	
	int i;
	for (i = 0; i <= 10; i++) tabuada[i] = i * 5;
	
	
	for (i = 0; i <= 10; i++) printf("%i\n", tabuada[i]);
}
