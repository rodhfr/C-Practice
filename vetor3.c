#include <stdio.h>

void funcaoLe(int A[], int t){
    int i;
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

int acima_media(int A[], int t, float M){
    int i, acima = 0, m=0;
    for (i=0;i<t;i++){
        if (A[i]>m){
            acima++;
        }
    }
    return acima;
}

int main (){
    int A[10], S;
    float M;

    printf("Digite os elementos do vetor A\n");
    funcaoLe(A, 10);
    S = funcaoSoma(A,10);
    printf("Soma dos elementos = %d", funcaoSoma(A,10));
    M=(float)S/10;
    printf("Media dos elementos do vetor = %.2f\n", M);
    printf("Quantidade de elementos acima daa media = %d", acima_media(A, 10, M));
    
    return 0;
}