#include <stdio.h>

int main(){
    int n_a;

    puts("Informe o num. de alunos:");
    scanf("%d",&n_a);

    float G1[n_a],G2[n_a],media[n_a];

    for(int i=1; i<=n_a; i++){
        printf("Informe a G1 do aluno %d:",i);
        scanf("%f",&G1[i]);
        printf("Informe a G2 do aluno %d:",i);
        scanf("%f",&G2[i]);

        printf("\n");

        media[i] = (G1[i]+G2[i]) / (float)n_a;
    }

    for(int i=1; i<=n_a; i++){
        printf("Media do aluno %d:",i);
        printf("\nG1:%.2f\nG2:%.2f\nMedia:%.2f\n",G1[i],G2[i],media[i]);
    }
    
}