#include <stdio.h>
#include <string.h>
int main(){
    char mens[100];
    int quant[5] = {0}, k = 0;
    printf("Digite uma frase: ");
    fgets(mens, 100, stdin);
    int tam = strlen(mens);
    char vogal[5] = "aeiou";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < tam; j++){
            if(vogal[i] == mens[j]){
                quant[k] = quant[k] + 1;
            }
        }
        k = k + 1;
    }
    for(int i = 0; i < 5; i++){
        printf("Há %d letras %c na frase.\n", quant[i], vogal[i]);
    }
    return 0;
}