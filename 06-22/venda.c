#include <stdio.h>

int main() {
  float acc[3];
  acc[0] = 0; // L
  acc[1] = 0; // A
  acc[2] = 0; // H
  float valor, soma = 0;
  char codigo;

  do {
    printf("Qual o valor da mercadoria?\n");
    scanf("%f", &valor);

    if (valor <= 0) {
      break;
    }

    printf("Qual o código da mercadoria?\n");
    scanf(" %c", &codigo);

    switch (codigo) {
      case 'L': acc[0] += valor; break;
      case 'A': acc[1] += valor; break;
      default: acc[2] += valor; break;
    }

    soma += valor;
  } while (1);

  printf("Limpeza     : %.2f\n", acc[0]);
  printf("Alimentação : %.2f\n", acc[1]);
  printf("Higiene     : %.2f\n", acc[2]);
  printf("Total       : %.2f\n", soma);

  return 0;
}
