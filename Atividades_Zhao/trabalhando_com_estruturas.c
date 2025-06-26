#include <stdio.h>
    struct media{
        float nota1;
        float nota2;
        float nota3;
        float trab1;
        float trab2;
        float nota;
        
    };
    struct media media;
    struct media media_final(struct media notas);
int main(){

    printf("Digite a nota 1: ");
    scanf("%f", &media.nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &media.nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &media.nota3);
    printf("Digite a nota do trabalho 1: ");
    scanf("%f", &media.trab1);
    printf("Digite a nota do trabalho 2: ");
    scanf("%f", &media.trab2);
    struct media nota_final;
    nota_final = media_final(media);
    printf("\nA média final do aluno é: %.2f", nota_final.nota);

    return 0;
}

struct media media_final(struct media notas){
    struct peso{
        int peso1;
        int peso2;
        int peso3;
        int peso4;
        int peso5;
    };
    struct peso pesos; 
    pesos.peso1 = 1;
    pesos.peso2 = 1;
    pesos.peso3 = 1;
    pesos.peso4 = 1;
    pesos.peso5 = 1;
    printf("A nota das provas tem peso? (S / N)");
    char indicador;
    scanf("%s", &indicador);
    if(indicador == 'S' || indicador == 's'){
        printf("Digite os pesos das nota 1: ");
        scanf("%d", &pesos.peso1);
        printf("Digite o peso da nota 2: ");
        scanf("%d", &pesos.peso2);
        printf("Digite o peso da nota 3: ");
        scanf("%d", &pesos.peso3);
    }
    printf("\nHá trabalhos? (S / N)");
    scanf("%s", &indicador);
    if(indicador == 'S' || indicador == 's'){
        printf("Digite o peso do trabalho 1: ");
        scanf("%d", &pesos.peso4);
        printf("Digite o peso do trabalho 2: ");
        scanf("%d", &pesos.peso5);
    }
    float media = ((notas.nota1 * pesos.peso1) + (notas.nota2 * pesos.peso2) + (notas.nota3 * pesos.peso3)
                + (notas.trab1 * pesos.peso4) + (notas.trab2 * pesos.peso5))
                / (pesos.peso1 + pesos.peso2 + pesos.peso3 + pesos.peso4 + pesos.peso5);
    notas.nota = media;
    return notas;
    
    
}