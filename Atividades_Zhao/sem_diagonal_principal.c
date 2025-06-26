#include <stdio.h>
int main(){
    int matriz[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
        }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j != i)
                printf("%d ", matriz[i][j]);
        }
    }
    return 0;
}