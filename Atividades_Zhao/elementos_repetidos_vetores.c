#include <stdio.h>
int main(){
    int vetor1[5], vetor2[8];
    for(int i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor1[i]);
    } printf("\n");
    for(int i = 0; i < 8; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor2[i]);
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 5; j++){
            if(vetor1[j] == vetor2[i])
                printf("%d ", vetor1[j]);
        }
    }
    return 0;
}