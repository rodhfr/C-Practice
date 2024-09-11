#include <stdio.h>

void scanVct(int A[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("Digite elemento %d do vetor: \n", i + 1);
        scanf("%d", &A[i]);
    }
    return 0;
}

void printVct(int A[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void invertVct(int A[], int t){
    int i, j, temp;
    for (i = 0; i < t/2; i++){
        temp = A[i];
        A[i] = A[t - 1 - i];
        A[t - 1 - i] = temp;
    }
}

int main(){
    int t = 4;
    int vetor_origem[t];
    int vetor_modificado[t];
    scanVct(vetor_origem, t);
    printVct(vetor_origem, t);
    invertVct(vetor_origem, t);
    printVct(vetor_origem, t);




    return 0;
}