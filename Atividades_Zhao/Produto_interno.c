#include <stdio.h>
int main(){
    int vetorn[10], vetorm[10], p = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &vetorn[i]);
    } printf("\n");
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &vetorm[i]);
    }
    for(int i = 0; i < 10; i++){
        p = vetorn[i] * vetorm[i] + p;
    }
    printf("O produto escalar desses vetores é %d", p);

    return 0;
}