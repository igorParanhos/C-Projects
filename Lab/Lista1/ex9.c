#include<stdio.h>
#include<stdlib.h>

int main(){

  int i, quant=0;
  float media=0;

  for(i=0; i<=2000; i++){
    if((i%3==0)&&(i%5==0)){
      media += i;
      quant++;
      printf("%d\n", i);
    }
  }

  media = media/quant;

  printf("Media: %8.2f\nQuantidade: %d\n", media, quant);

  return 0;
}
