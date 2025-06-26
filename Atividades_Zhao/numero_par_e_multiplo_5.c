#include <stdio.h>
int main(){
    int par = 0, multiplo = 0, vetor[10] = {0};
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            par++;
         }   
        if(vetor[i] % 5 == 0)
            multiplo += 1;
    }
    printf("Há %d números pares no vetor.\n", par);
    printf("Há %d múltiplos de 5 no vetor.", multiplo);
    
    return 0;
}