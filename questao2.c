#include <stdio.h>

#define TAM 5

int main(){
    float salario[TAM],novosal[TAM];

    for(int i=0; i<TAM; i++){
        puts("Digite o valor do seu salario:");
        scanf("%f",&salario[i]);

        if(salario[i]<1000.00){
            salario[i] = salario[i]+(salario[i]*0.1);
        }
    }

    printf("Lista de salario atualizada:\n");

    for(int i=0; i<TAM; i++){
        printf("%.2f\t",salario[i]);
    }
}