#include <stdio.h>
int main(){
    int num, max, min, medio;
    printf("Quantos números no vetor: ");
    scanf("%d", &num);
    int numero[num], soma = 0;
    for(int i = 0; i < num; i++){
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
    }
    max = numero[0];
    min = numero[0];
    for(int i = 0; i < num; i++){
        if(numero[i] < min)
            min = numero[i];
        if(numero[i] > max)
            max = numero[i];
        soma = soma + numero[i];
    }
    medio = soma / num;
    printf("Os valores de máximo e mínimo são %d e %d.", max, min);
    printf("\no valor médio é %d.", medio);
    
    return 0;
}