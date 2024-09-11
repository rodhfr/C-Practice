#include <stdio.h>

void trocaValores(int V[], int t){
    int i, temp;

    for (i = 0; i < t/2; i++){
        temp = V[i];
        V[i] = V[i + t/2];
        V[i + t/2] = temp;
    }
}

void printVetor(int V[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("%d ", V[i]);
    }
    printf("\n");
}

void readVetor(int V[], int t){
    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < t; i ++){
        scanf("%d", &V[i]);
    }
}

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int t = 16;

    printVetor(vetor, t);
    readVetor(vetor,t);
    printVetor(vetor, t);
    trocaValores(vetor, t);
    printVetor(vetor, t);

    return 0;
}