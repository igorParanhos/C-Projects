#include<stdio.h>
#include<stdlib.h>

int main(){

  int i, idade;
  float media=0, quant=0;

  for(i=0; i<10; i++){
    printf("Digite a %d idade: ", i);
    scanf(" %d", &idade);

    if(idade>=18){
      media += idade;
      quant++;
    }
  }

  media = media/quant;

  printf("Media: %8.2f \nQuantidade: %8.2f\n", media, quant);

  return 0;
}
