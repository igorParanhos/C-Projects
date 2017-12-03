#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  /**
    Escreva um algoritmo que receba quinze números do usuário e armazene
    em um vetor a raiz quadrada de cada número. Caso o valor digitado seja
    menor que zero o número –1 deve ser atribuído ao elemento do vetor.
    Após isso, o algoritmo deve imprimir todos os valores armazenados.
  */

  int numeros[15], i;

  for(i=0; i<15; i++){

    printf("numero %d :", numeros[i]);
    scanf("%d", &numeros[i]);

    if(numeros[i] < 0)
      numeros[i] = -1;
    else
      numeros[i] = pow(numeros[i], 2);
  }

  for(i=0; i<15; i++){
    printf("%d\n", numeros[i]);
  }

  return 0;
}
