#include <stdio.h>
// exercicio 7
void vetoresIntercalados(const int A[], const int B[], int C[], int t){
    int i;
    for (i = 0; i < t; i++){
        if (i % 2 != 0){
            C[i] = B[i];
        }
        else {
            C[i] = A[i];
        }
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
    int t = 10;
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int B[10] = {11,12,13,14,15,16,17,18,19,20};
    int C[t];

    vetoresIntercalados(A,B,C,t);
    printVetor(C,t);
    return 0;
}