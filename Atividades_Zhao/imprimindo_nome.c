#include <stdio.h>
#include <string.h>
int main(){
    char nome[100];
    int tam;
    printf("Digite um nome: ");
    scanf("%s", nome);
    tam = strlen(nome);
    for(int i = 0; i < tam; i++){
        printf("%s ", nome);
    }
    return 0;
}