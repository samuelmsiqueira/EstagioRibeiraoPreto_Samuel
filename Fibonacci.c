/*
    Solução para inserir um numero e descobrir se faz parte ou não da sequencia de Fibonacci
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    /*
        n - numero que sera lido, soma - resultado da soma, 
        p - o numero que vem primeiro na soma, s - segundo numero da soma
    */
    int n = 0, i, soma = 0, p = 0, s = 1;
    bool pertence = false;
    
    printf("\nDigite um Numero\n");
    scanf("%d", &n);
    
    for(i=1; i <= n;i++){
        soma = p + s;
        p = s;
        s = soma;
        if(soma == n){
            pertence = true;
        }
    }
    
    if(pertence == true){
        printf("O numero digitado pertence a sequencia de Fibonacci");
    }else{
        printf("O numero NAO digitado pertence a sequencia de Fibonacci");
    }
    return 0;
}
