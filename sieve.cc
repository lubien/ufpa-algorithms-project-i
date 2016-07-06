#include <stdio.h>
#include <math.h>

int main(void) {
//    setvbuf(stdout, NULL, _IONBF, 0);
    
    double n = 10;
    
    int arr[10], results[100];
    int i;
  	int maxEval;
  	
    for (i = 0; i < 100; i++) arr[i] = i + 1;
    
    maxEval = floor(sqrt(n));
    
    for (i = 0; i < maxEval; i++) {
    	if (i == arr[i] || arr[i] % i != 0) {
    		results[sizeof(arr) - 1] = i;
    	}
    }
    
    // prints
    
    for (i = 0; i < sizeof(results); i++) {
    	printf("%i", results[i]);
    }
    
    return 0;
}


