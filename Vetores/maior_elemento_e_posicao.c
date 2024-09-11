
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiorElemento(const int *vetor, const int t){
    int i, temp = 0, maior, maiorIndex;

    for (i=0;i<t+1;i++){
        //printf("i = %d \n", i);
        //printf("temp (antes do if) = %d \n", temp);
        if (temp > vetor[i]){
            maior = temp;
            maiorIndex = i;
        }
        temp = vetor[i];
        //printf("temp (antes depois do if) = %d \n", temp);
    }
    printf("maior = %d, maiorIndex = %d", maior, maiorIndex);
}

void printVetor(int V[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("%d ", V[i]);
    }
    printf("\n");
}

void geraVetorRandom(int v[], int t){
    for (int i = 0; i < t; i++){
        v[i] = rand() % 100;
    }
}

int main(){
    srand(time(NULL));
    int vetor[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int t = 20;

    printVetor(vetor, t);
    geraVetorRandom(vetor, t);
    printVetor(vetor, t);
    maiorElemento(vetor, t);
    
    

    return 0;
}