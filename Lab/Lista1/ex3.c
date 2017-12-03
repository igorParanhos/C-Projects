#include<stdio.h>
#include<stdlib.h>

int main(){

	float celsius, fahrenheit, viscosidade;
	
	printf("Digite a temperatura em celsius: ");

	scanf("%f", &celsius);

	fahrenheit = celsius*1.8+32;

	if(fahrenheit<0){
		printf("Valor invalido!");
	}
	else if(fahrenheit<50){
		viscosidade = 242;
	}
	else if(fahrenheit<100){
		viscosidade = 82.1;
	}
	else if(fahrenheit<150){
		viscosidade = 30.5;
	}
	else if(fahrenheit<200){
		viscosidade = 12.6;
	}
	else if(fahrenheit>=200){
		viscosidade = 5.7;
	}

	printf("Viscosidade: %8.2f", viscosidade);

	return 0;

}
