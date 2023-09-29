#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(){
    float vet1[TAM],vet2[TAM],soma[TAM],dif[TAM],prod[TAM],div[TAM];

    for(int i=0; i<TAM; i++){
        printf("Insira o valor %d do primeiro vetor:",i);
        scanf("%f",&vet1[i]);
        printf("Insira o valor %d do segundo vetor:",i);
        scanf("%f",&vet2[i]);

        printf("\n");

        soma[i] = vet1[i]+vet2[i];
        dif[i] = vet1[i]-vet2[i];
        prod[i] = vet1[i]*vet2[i];
        div[i] = vet1[i]/vet2[i];
    }

    for(int i=0; i<TAM; i++){
        printf("\nSoma: %.2f\nDiferenca: %.2f\nProduto: %.2f\nDivisao: %.2f\n",soma[i],dif[i],prod[i],div[i]);
    }
}