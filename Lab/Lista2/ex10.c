#include<stdio.h>

int main(){

  int numeros[10], ordenado[10], i, n;

  for(i=0; i<10; i++){

    printf("Numero %d : ", i);
    numeros[i] = scanf("%d", &numeros[i]);

  }

  for(i=0; i<10; i++){
    ordenado[i] = numeros[i];
    for(n=1; n<10; n++){
      if(numeros[n]<ordenado[i] && numeros[n]>=ordenado[i-1])
        ordenado[i] =  numeros[n];
    }
  }

  for(i=0; i<10; i++){

    printf("\n%d", ordenado[i]);

  }

  return 0;
}
