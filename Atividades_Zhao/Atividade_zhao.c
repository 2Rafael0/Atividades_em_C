#include <stdio.h>
int intersecao(int *vetorA, int *vetorB, int *vetorC, int n, int m);
int main() {
	int n, m;
	printf("Digite a quantidade de elementos do vetor A: ");
	scanf("%d", &n);
	printf("Digite a quantidade de elementos do vetor B: ");
	scanf("%d", &m);
	int vetorA[n], vetorB[m], vetorC[n];
	for(int i = 0; i < n; i++) {
		printf("Digite o valor do elemento %d do vetor A:", i+1);
		scanf("%d", &vetorA[i]);
	}
	printf("\n");
	for(int i = 0; i < m; i++) {
		printf("Digite o valor do elemento %d do vetor B: ", i+1);
		scanf("%d", &vetorB[i]);
	}
	int cont = intersecao(vetorA, vetorB, vetorC, n, m);
	printf("Vetor intersecao:\n");
	for(int i = 0; i < cont; i++)
		printf("%d ", vetorC[i]);
	return 0;
}

int intersecao(int *vetorA, int *vetorB, int *vetorC, int n, int m) {
	int cont = 0, jaFoi = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(vetorA[i] == vetorB[j]) {
			    jaFoi = 0;
				for(int k = 0; k < n; k++) {
					if(vetorC[k] == vetorA[i]) {
						jaFoi = 1;
						break;
					}
				}
				if(jaFoi == 0) {
					vetorC[cont] = vetorA[i];
					cont = cont + 1;
					break;
					jaFoi = 0;
				}

			}
		}
	}
	return cont;
}