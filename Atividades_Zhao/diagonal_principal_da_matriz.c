#include <stdio.h>

int main(){
    int matriz[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    /*int matriz[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
        }
    }*/
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                printf("%d ", matriz[i][j]);
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}