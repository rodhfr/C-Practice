#include <stdio.h>

void concatenaVetor(int V1[], int V2[], int R[], int t){
    for (int i = 0; i < t/2; i++){
        R[i] = V1[i];
        R[i + t/2] = V2[i];
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
    int t = 10, V1[] = {0,1,2,3,4}, V2[] = {4,3,2,1,0}, R[t];
    printVetor(V1, 5);
    printVetor(V2, 5);
    
    concatenaVetor(V1, V2, R, t);
    printVetor(R, t);
}