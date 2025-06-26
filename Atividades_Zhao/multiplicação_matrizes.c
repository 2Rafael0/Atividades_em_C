#include <stdio.h>
void matriz_produto(int matrizA[4][6], int matrizB[6][4], int matrizC[4][4]);
int main(){
    srand(time(NULL));
    int matrizA[4][6], matrizB[6][4], matrizC[4][4] = {0};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            matrizA[i][j] = rand() % 5;
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            matrizB[i][j] = rand() % 5;
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    matriz_produto(matrizA, matrizB, matrizC);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            printf("%d ", matrizC[i][j]);
        printf("\n");
    }
    return 0;
}
void matriz_produto(int matrizA[4][6], int matrizB[6][4], int matrizC[4][4]){
    int s11, linha, coluna;
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++){
           coluna = j;
           linha = i; 
           for(int k = 0, l = 0; k < 6; k++){
                   matrizC[i][j] = matrizC[i][j] + matrizA[linha][k] * matrizB[l][coluna];
                   l++;
           }
           
        }
}