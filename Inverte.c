#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Digite uma Palavra: ");
    scanf("%s", palavra);
    
    int qtdC = strlen(palavra);
    
    for (int i = 0; i < qtdC / 2; ++i) {
        char troca = palavra[i];
        palavra[i] = palavra[qtdC - 1 - i];
        palavra[qtdC - 1 - i] = troca;
    }

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}
