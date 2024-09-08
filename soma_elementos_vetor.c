#include <stdio.h> 

int somaElementos(int *vect){
    int i, resultado = 0;
    for (i = 0; i < 10; i++){
        printf("Elemento %d: %d\n", i, vect[i]);
        resultado += vect[i];
    }
    return resultado;
}

int main(){
    int vect[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int resultado = somaElementos(vect);
    printf("%d", resultado);
}