#include<stdio.h>
#include<stdlib.h>

int main(){

  int soma=0, i;
  int numeros[] = {12,23,43,5,32,4,13,65,54,44,22};

  for(i=0; i<10; i++){
    if(numeros[i]%2==0 && numeros[i]%3==0){
      soma += numeros[i];
      printf("%d \n",numeros[i]);
    }
  }
  printf("\n%d\nsoma: ",soma);

  return 0;
}
