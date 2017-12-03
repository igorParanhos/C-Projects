#include<stdio.h>
#include<stdlib.h>

int main(){

  int i, n=200, numeros[101];

  for(i=0; i<101; i++){
    numeros[i] = n;
    n--;
  }


  for(i=0; i<101; i++){
    printf("%d \n",numeros[i]);
  }

  return 0;
}
