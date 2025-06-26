#include <stdio.h>
#include <string.h>
int main(){
    char palavra[50];
    int tam;
    printf("Digite uma frase: ");
    gets(palavra);
    tam = strlen(palavra);
    for(int i = 0; i < tam; i++){
        if(palavra[i] != ' ')
            printf("%c", palavra[i]);
    }
    return 0;
}