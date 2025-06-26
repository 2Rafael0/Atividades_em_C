#include <stdio.h>
int par(int *vetor);
int main(){
    int vetor[15];
    for(int i = 0; i < 15; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    printf("O número de elementos pares no vetor é %d", par(vetor));
    

    return 0;
}

int par(int *vetor){
    int cont = 0;
    for(int i = 0; i < 15; i++){
        if(vetor[i] % 2 == 0)
            ++cont;
    }
    return (cont);
}