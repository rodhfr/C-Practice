#include <stdio.h>


int lacoVetor(int *vct, int t, int k){
    int i;
    for (i = 0; i < t; i++){
        if (i % 2 == 0){
            vct[i] = vct[i] * k;
            }
    }
}

int printVetor(int *vct, int t){
    int i;
    for (i = 0; i < t; i++){
        printf("%d", vct[i]);
    }
}

void mostra_vetor(int vct[], int t){
    int i;
    for (i=0;i<t;i++)
        printf("%4d",vct[i]);
}
int main(){
    int t = 4, k = 15;
    int vct[4] = {1,2,3,4};
    
    lacoVetor(vct, t, k);
    mostra_vetor(vct, t);
    return 0;
}