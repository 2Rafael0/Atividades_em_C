#include <stdio.h>
int diagonalp(int matriz[6][6]);
int diagonals(int matriz[6][6]);
int main(){
    int matriz[6][6] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 35};
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("%2d ", matriz[i][j]);
      //      printf("Digite um número: ");
      //      scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    printf("A soma da diagonal principal vale %d", diagonalp(matriz));
    printf("\nA soma da diagonal secundária vale %d", diagonals(matriz));    
    return 0;
    
}

int diagonalp(int matriz[6][6]){
    int soma = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i == j)
                soma+=matriz[i][j];
        }
    }
    return soma;
}
int diagonals(int matriz[6][6]){
    int soma = 0;
    for(int i = 0; i < 6; i++)
        for(int j = 5; j >= 0; j--)
            if(j == 5 - i)
                soma = soma + matriz[i][j];
    return soma;
}