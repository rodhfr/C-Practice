#include <stdio.h>

int preencherVetor(int *vct, int t){
    int i, index_impar = 1, index_par = 0;
    for (i = 0; i < t; i++){
        if (vct[i] % 2 == 0){
            vct[i] = index_par;
        }
        else 
            vct[i] = index_impar;
    }
}

void printVetor(int v[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int t = 10;
    int X[10] = {1,2,3,4,5,6,7,8,9,10};

    printVetor(X,t);
    preencherVetor(X,t);
    printVetor(X,t);
}