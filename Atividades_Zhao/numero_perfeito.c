#include <stdio.h>
int divisores(int a);
int detectar(int *divisor, int cont, int a);
int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if(divisores(num) != 0){
        printf("O número %d é perfeito", num);
    }
    else
        printf("O número %d não é perfeito.", num);
	return 0;
}

int divisores(int a){
    int cont = 0;
    for(int i = 1; i < a; i++){
        if(a % i == 0)
            cont = cont + 1;
    }
    int divisor[cont], c = 0;
    for(int i = 1; i < a; i++){
        if(a % i == 0){
            divisor[c] = i;
            c = c + 1;
        }
    }
    return detectar(divisor, cont, a);
}

int detectar(int *divisor, int cont, int a){
    int soma = 0;
    for(int i = 0; i < cont; i++){
        soma+=divisor[i];
    }
    return (a == soma);
}