#include <stdio.h>
#include <string.h>

int compara(char *palavra1, char *palavra2);
int main(){
    char palavra1[50], palavra2[50];
    printf("Digite uma palavra: ");
    scanf("%s", palavra1);
    printf("Digite outra palavra: ");
    scanf("%s", palavra2);
    if(compara(palavra1, palavra2))
        printf("Essas palavras são anagramas.");
    else
        printf("Essas palavras não são anagramas.");
    return 0;
}

int compara(char *palavra1, char *palavra2){
    int tam1 = strlen(palavra1), tam2 = strlen(palavra2);
    if(tam1 != tam2)
        return 0;
    else {
        for(int i = 0; i < tam1; i++)
            for(int j = 0; j < tam2; j++){
                if(palavra1[i] == palavra2[j])
                    return 1;
                else
                    return 0;
            }
    }
}