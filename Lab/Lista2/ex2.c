#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  int i, numeros[10];

  for(i=1; i<=20; i++){
    if(i%2 != 0){
      numeros[i] = pow(i, 2);
    }
  }

  for(i=0; i<(sizeof(numeros)/sizeof(int)); i++){
    printf("%d \n",numeros[i]);
  }

  return 0;
}
