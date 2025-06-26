#include <stdio.h>
int soma(int matriz[][5]);
int main(){
    int matriz[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("A soma dos seus elementos vale %d", soma(matriz));
    
    return 0;
}

int soma(int matriz[][5]){
    int som = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            som = som + matriz[i][j];
        }
    }
    return (som);
}