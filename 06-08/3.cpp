#include <stdio.h>
#include <math.h>

char* inPt(int n) {
	switch(n) {
		case 1:
			return "Um";
		case 2:
			return "Dois";
		case 3:
			return "Tres";
	}
}

int main() {
	int n;
	n = 123;
	int i;
	
	while (n) {
		printf("%c \n", inPt(n % 10));
		n /= 10;
	}
}

