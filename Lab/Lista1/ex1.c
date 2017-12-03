#include<stdio.h>
#include<stdlib.h>

int main(){

  int celsius, fahrenheit, kelvin;

  printf("Digite a temperatura em celsius: ");
  scanf("%d", &celsius);

  fahrenheit = celsius*1.8+32;
  kelvin = celsius+273;

  printf("\nfahrenheit: %d \nkelvin: %d\n", fahrenheit, kelvin);

  return 0;

}
