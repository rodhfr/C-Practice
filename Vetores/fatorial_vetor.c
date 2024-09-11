#include <stdio.h>
//5!=5×4×3×2×1=120

int fatorialNumero(int a){
    for (int i = a-1; i > 1; i--){
        a = a * i;
    }
    return a;
}

void fatorialVetor(int A[],int B[], int t){
    for (int i = 0; i < t; i++){
        B[i] = fatorialNumero(A[i]);
    }
}

void printVetor(int V[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("%d ", V[i]);
    }
    printf("\n");
}

int main(){
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int B[] = {11,12,13,14,15,16,17,18,19,20};
    int t = 10;

    printf("Imprimindo o vetor A:\n");
    printVetor(A, t);

    printf("Imprimindo o vetor B (antes da operação):\n");
    printVetor(B, t);

    printf("Calculando o fatorial dos elementos do vetor A e armazenando em B...\n");
    fatorialVetor(A, B, t);

    printf("Imprimindo o vetor B (após a operação de fatorial):\n");
    printVetor(B, t);

    return 0;

}