#include <stdio.h>

int novoVetorC(const int *A, const int *B, int *C, int t){
    int i;
    for (i = 0; i < t; i++){
        C[i] = A[i] + B[i];
    }
    return 0;
}

void printVetor(const int C[], const int t){
    int i;
    for (i = 0; i < t; i++){
        printf("%d ", C[i]);
    }
    printf("\n");
}


int main(){
    int t = 10;
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int B[] = {11,12,13,14,15,16,17,18,19,20};    
    int C[t];

    novoVetorC(A,B,C,t);
    printVetor(A,t);
    printVetor(B,t);
    printVetor(C,t);

}