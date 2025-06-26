#include <stdio.h>

int soma_diagonal(int matriz[6][6]);
int main(){
    int matriz[6][6];
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++){
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
        }
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("A soma da diagonal principal com a diagonal secundária é %d", soma_diagonal(matriz));
    return 1;
}
int soma_diagonal(int matriz[6][6]){
    int soma = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if((i == j) || (i + j == 5))
                soma+=matriz[i][j];
        }
    }
    return soma;
}