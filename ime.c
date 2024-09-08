#include <stdio.h>
#define LIM 500
 
int main(){
  int n,i;
  int vet[LIM];
 
  printf("Entre com n: ");
  scanf("%d", &n);
  printf("Entre com %d elementos: ",n);
  for(i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
  printf("Ordem inversa: ");
  for(i = n-1; i >= 0; i--){
    printf("%d ",vet[i]);
  }
  printf("\n");
  return 0;
}