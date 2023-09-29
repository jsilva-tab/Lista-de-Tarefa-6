#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    puts("Digite quantos valores voce quer:");
    scanf("%d",&n);

    if(n <= 0){
        printf("Numero invalido tente novamente.");
        return 1;
    }

    float valores[n],soma=0.0,media;

    for(int i=0; i<n; i++){
        puts("Insira um valor para realizar a media:");
        scanf("%f",&valores[i]);

        soma+=valores[i];
    }

    media = soma/n;

    printf("A media dos valores e:%.2f\n",media);
    return 0;
}