#include <stdio.h>

int main() {
	int alunos[5][3];
	float maiorMedia = 0.0, mediaAtual = 0.0;
	int i, j;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf("Aluno %i, Materia %i\n", i + 1, j + 1);
			scanf("%i", &alunos[i][j]);
		}
		
		mediaAtual = (alunos[i][0] + alunos[i][1] + alunos[i][2]) / 3;
		if (mediaAtual > maiorMedia) maiorMedia = mediaAtual;
	}
	
	printf("Maior e %f", maiorMedia);
	
}
