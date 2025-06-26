void vol(float raio, float pi);
#include <stdio.h>

int main(){
    float raio, pi;
    printf("Qual o valor do raio da esfera? ");
    scanf("%f", &raio);
    printf("Qual o valor do pi: ");
    scanf("%f", &pi);
    vol(raio, pi);
    
    return 0;
}

void vol(float raio, float pi){
    float volume = pi * raio * raio * raio * 4 / 3;
    printf("O volume da esfera é %.2f.", volume);
}