#include<stdio.h>
#include<stdlib.h>

/**
  Construa um algoritmo para calcular a média de valores
  PARES e ÍMPARES, de 50 números que serão digitados pelo
  usuário. Ao final o algoritmo deve mostrar estas duas médias.
  O algoritmo deve mostrar também o maior número PAR
  digitado e o menor número ÍMPAR digitado.
*/

int main(){

  int i, i_par, i_impar, maior_par, menor_impar, media_par, media_impar, numeros[50];
  maior_par=menor_impar=media_par=media_impar=i_par=i_impar=0;


  for(i=0; i<50; i++){

    // numeros[i] = i;
    printf("\nDigite um número: ");
    scanf(" %d", &numeros[i]);

    if(numeros[i]%2 == 0){
      if(i_par == 0 || maior_par < numeros[i])
        maior_par = numeros[i];

      media_par += numeros[i];
      i_par++;
    }else{
      if(i_impar == 0 || menor_impar > numeros[i])
        menor_impar = numeros[i];

      media_impar += numeros[i];
      i_impar++;
    }
  }

  media_par = media_par/i_par;
  media_impar = media_impar/i_impar;


  printf("\nmedia_pares: %d", media_par);
  printf("\nmedia_impares: %d", media_impar);
  printf("\nmaior_par: %d", maior_par);
  printf("\nmenor_impar: %d", menor_impar);


  return 0;
}
