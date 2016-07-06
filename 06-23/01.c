#include <stdio.h>

int busca(int x, int vet[10]) {
  int i;
  for (i = 0; i < 10; i++) {
    if (vet[i] == x) return i;
  }
}

int main() {
  int vet[10];
  int i, find;

  printf("Determine o vetor de 10 posicoes\n");
  for (i = 0; i < 10; i++) {
    printf("Posicao %i\n", i + 1);
    scanf("%i", &vet[i]);
  }

  printf("Defina qual numero voce quer encontrar\n");
  scanf("%i", &find);

  printf("O seu numero esta armazenado na posicao %i\n", busca(find, vet) + 1);

  return 0;
}
