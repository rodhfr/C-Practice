#include <stdio.h>

void funcaoLe(int X[], int t){
    int i;
    for (i=0;i<t;i++){
        printf("A[%d]=", i);
        scanf("%d", &X[i]);
    }
}


void soma_Vetores(int A[], int B[], int C[], int t){
    int i;
    
    for (i=0;i<t;i++){
        C[i] = A[i] + B[i];
    }
}

void mostra_vetor(int A[], int t){
    int i;
    for (i=0;i<t;i++)
        printf("%4d",A[i]);
}


int main(){
    int A[10], B[10], C[10], t = 10;
    funcaoLe(A,10);
    funcaoLe(B,10);
    funcaoLe(C,10);

    calcula_C(A,B,C, t);

    printf("Vetor C =");
    mostra_vetor(C,10);
    
    
    return 0;

}