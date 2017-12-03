#include<stdio.h>
#include<stdlib.h>

int main(){

  int i, numero, intervalo=0;

  for(i=0; i<=10; i++){
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero>=30&&numero<=90){
      intervalo++;
    }
  }

  printf("\nNumeros entre 30 e 90: %d\n", intervalo);

  return 0;

}
