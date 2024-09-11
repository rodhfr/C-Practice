#include <stdio.h>

void scanfVetor(int V[], int t){
    for (int i = 0; i < t; i++){
        scanf("%d", &V[i]);
    }
}

void printVetor(int V[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("%d ", V[i]);
    }
    printf("\n");
}

void conjuntoIntersecao(const int V1[], const int V2[], int intersecao[], const int t, int tamanho_intersecao){
    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            if (V1[i] == V2[j]){
                tamanho_intersecao++
                intersecao[i] = V2[j];
            }
        }
    }
}

int main(){
    int tamanho = 10, tamanho_intersecao;
    int vetor1[tamanho], vetor2[tamanho], vetor_intersecao[tamanho];

    printf("Insira o primeiro Vetor: \n");
    scanfVetor(vetor1, tamanho);
    

    printf("Insira o segundo vetor: \n");
    scanfVetor(vetor2, tamanho);

    printf("Vetor 1: \n");
    printVetor(vetor1, tamanho);
    printf("Vetor 2: \n");
    printVetor(vetor2, tamanho);

    printf("Vetor intersecao: \n");
    conjuntoIntersecao(vetor1, vetor2, vetor_intersecao, tamanho, );
    
    printf("tamanho_vetor_inter = %d \n", tamanho_intersecao);
    printVetor(vetor_intersecao, tamanho);


}