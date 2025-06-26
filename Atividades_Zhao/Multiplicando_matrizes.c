#include <stdio.h>
int main(){
    int matriz1[3][3], matriz2[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um número: ");
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz2[i][j] = 2 * matriz1[i][j];
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}