#include <stdio.h>

int soma(int matriz[7][6]);
int main(){
    srand(time(NULL));
    int matrizA[7][6];
    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 6; j++){
            /*printf("Digite um número: ");
            scanf("%d", &matrizA[i][j]);*/
            matrizA[i][j] = rand() % 10;
        }
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j++){
            printf("%2d ", matrizA[i][j]);
        }
        printf("\n");
        
    }
    printf("A soma da linha 5 com a linha 3 vale: %d", soma(matrizA));
    return 0;
}
int soma(int matrizA[7][6]){
    int s = 0;
    for(int j = 0; j < 6; j++)
        s = s + matrizA[4][j];
    for(int i = 0; i < 7; i++)
        s = s + matrizA[i][2];
    return s;
}