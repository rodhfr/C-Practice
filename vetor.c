//calcular a soma dos elementos de um vetor de 10 posicoes

#include <stdio.h>

void funcaoLe(int A[], int t){
    int i;
    printf("Digite os elementos do vetor\n");
    for (i=0;i<t;i++){
        printf("A[%d]=", i);
        scanf("%d", &A[i]);
    }
}

int funcaoSoma(int A[], int t){
    int i, soma=0;
    for (i=0;i<t;i++){
        soma+=A[i];
    }
    return soma;
}

int main (){
    int A[10];
    funcaoLe(A,10);
    printf("Soma dos elementos = %d", funcaoSoma(A,10));
}