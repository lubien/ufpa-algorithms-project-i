#include <stdio.h>

int main() {
  int i, n = 10;
  int vetA[n];
  int vetB[n];
  int temp;

  for (i = 0; i < n; i++) {
    printf("Vetor A, posicao %i\n", i + 1);
    scanf("%i", &vetA[i]);
    printf("Vetor B, posicao %i\n", i + 1);
    scanf("%i", &vetB[i]);
  }

  for (i = 0; i < n; i++) {
    printf("Antes\n");
    printf("Vetor A, posicao %i = %i\n", i + 1, vetA[i]);
    printf("Vetor B, posicao %i = %i\n", i + 1, vetB[i]);

    temp = vetB[i];
    vetB[i] = vetA[i];
    vetA[i] = temp;

    printf("Depois\n");
    printf("Vetor A, posicao %i = %i\n", i + 1, vetA[i]);
    printf("Vetor B, posicao %i = %i\n", i + 1, vetB[i]);
  }

  return 0;
}
