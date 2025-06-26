#include <stdio.h>
void distancia(int v1, int v2);
void detectar(char a, char b);
char letra[] = "abcdefghijklmnopqrstuvwxyz";
int main(){
    char letra1, letra2;
    printf("Digite uma letra: ");
    scanf("%c", &letra1);
    printf("Digite outra letra: ");
    scanf("%c", &letra2);
    distancia(letra1, letra2);
    return 0;
}

detectar(char a, char b){
    int valor1, valor2;
    for(int i = 0; letra; i++){
        if(letra[i] == a){
            valor1 = i;
        } else if(letra[i] == b){
            valor2 = i;
        }
    }
    if(valor1 < valor2){
        distancia(valor1, valor2);
    } else
        printf("ERRO!");
}

distancia(int v1, int v2){
    printf("A distância entre as letras é %d", v2 - v1);
}