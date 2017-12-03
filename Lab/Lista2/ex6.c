#include<stdio.h>
#include<stdlib.h>

int main(){

  /**
  Escreva um algoritmo que receba a altura de 10 atletas.
  Esse algoritmo deve imprimir a altura daqueles atletas
  que tem altura maior que a média.
  */

  int altura[10], i, media=0;

  for(i=0; i<10; i++){

    printf("Digite o altura %d (cm):", i);
    scanf("%d", &altura[i]);

    media+= altura[i];

  }

  media = media/10;

  printf("media: %d\n", media);

  for(i=0; i<10; i++){

    if(altura[i] > media)
      printf("Altura : %dcm\n", altura[i]);
  }

  return 0;
}
