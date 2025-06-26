/*Criar um programa que recebe um vetor A e um vetor B de n e m elementos, respectivamente. Então, colocar os elementos do vetor A no vetor B e os elementos do vetor B no vetor A. Use alocação dinâmica para criar o vetor.*/

#include <stdio.h>
#include <stdlib.h> //Possui as funções: malloc, calloc, free e realloc.
    void passar_elemento(int *A, int *B, int *C, int n, int m);
    int main(){
    int n, m;
    printf("Digite o número de elementos do vetor A: ");
    scanf("%d", &n);
    printf("Digite o número de elementos do vetor B: ");
    scanf("%d", &m);
    int *A, *B, *C;
    A = (int *)(calloc(n, sizeof(int)));
    B = (int *)(calloc(m, sizeof(int)));
    C = (int *)(calloc(n, sizeof(int)));
    passar_elemento(A, B, C, n, m);
    printf("Elementos no vetor A:\n");
    for(int i = 0; i < m; i++){
        printf("%d ", A[i]);
    }
    printf("\nElementos no vetor B:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", B[i]);
        free(A);
        free(B);
    return 0;
}

void passar_elemento(int *A, int *B, int *C, int n, int m){
    for(int i = 0; i < n; i++){
        printf("Digite um número para o vetor A: ");
        scanf("%d", &A[i]);
        C[i] = A[i];
    }
    printf("\n");
    for(int i = 0; i < m; i++){
        printf("Digite um número para o vetor B: ");
        scanf("%d", &B[i]);
    }
    free(A);
    A = (int *)realloc(A, m);
    for(int i = 0; i < m; i++){
        A[i] = B[i];
    }
    B = (int*)(realloc(B, n));
    for(int i = 0; i < n; i++)
        B[i] = C[i];
    free(C);
}