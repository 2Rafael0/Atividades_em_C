#include <string.h>
#include <stdio.h>
int comparador(char *str1, char *str2);

int main()
{
	char str1[100], str2[100];
	printf("Digite uma palavra: ");
	scanf("%s", str1);
	printf("Digite outra palavra: ");
	scanf("%s", str2);
	if(comparador(str1, str2)) {
		printf("As duas palavras sao anagramas umas das outras.");
	}
	else
		printf("Essas palavras nao sao anagramas umas das outras.");
	return 0;
}

int comparador(char *str1, char *str2) {
	int tam1 = strlen(str1), tam2 = strlen(str2);
	int saoIguais = 0, cont = 0, count = 0;
	char igual[tam1];
	if(tam1 != tam2)
		return 0;
	for(int i = 0; i < tam1; i++) {
		for(int j = 0; j < tam2; j++) {
			if((igual[cont - 1] == str1[i]) && (i != count)){
			    count++;
				break;
			}
			if(str1[i] == str2[j]) {
				for(int y = 0; y < tam1; y++) {
					if(igual[y] != str1[i]) {
						igual[cont] = str1[i];
						++saoIguais;
						cont++;
						break;
					}
				}
			}

		}
	}
	printf("\n %s \n", igual);
	if(saoIguais == tam1)
		return 1;
	else
		return 0;
}