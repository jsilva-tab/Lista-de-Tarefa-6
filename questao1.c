#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
    int salario[TAM], maiorValor;

    for(int i=0; i<TAM; i++){
        puts("Digite seu salario:");
        scanf("%d",&salario[i]);

        if(i == 0 || salario[i]>maiorValor){
            maiorValor = salario[i];
        }
    }

    printf("O maior salario e: %d\n",maiorValor);
}