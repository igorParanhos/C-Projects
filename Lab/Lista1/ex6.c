#include<stdio.h>
#include<stdlib.h>

int main(){

  int i;
	float nota, dist[5];
  dist[0]=dist[1]=dist[2]=dist[3]=dist[4];

  for(i=1; i<=30; i++){
  	printf("\n\nInforme a nota do aluno %d: ", i);
  	scanf("%f", &nota);

  	if(nota<0||nota>100){
      nota = 0;
  		printf("\nValor invalido!");
  	}
  	else if(nota<39){
      dist[0]++;
      printf("\nConceito E");
  	}
  	else if(nota<49){
      dist[1]++;
      printf("\nConceito D");
  	}
  	else if(nota<74){
      dist[2]++;
      printf("\nConceito C");
  	}
  	else if(nota<89){
      dist[3]++;
      printf("\nConceito B");
  	}
  	else if(nota<100){
      dist[4]++;
      printf("\nConceito A");
  	}
  }

  dist[0] = dist[0]/30*100;
  dist[1] = dist[1]/30*100;
  dist[2] = dist[2]/30*100;
  dist[3] = dist[3]/30*100;
  dist[4] = dist[4]/30*100;

	printf("Distribuicao Percentual:");
  printf("\nA: %8.2f", dist[0]);
  printf("\nB: %8.2f", dist[1]);
  printf("\nC: %8.2f", dist[2]);
  printf("\nD: %8.2f", dist[3]);
	printf("\nE: %8.2f", dist[4]);

	return 0;

}
