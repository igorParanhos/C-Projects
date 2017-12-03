#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int somar(int n1, int n2);
int subtrair(int n1, int n2);
int dividir(int n1, int n2);
int multiplicar(int n1, int n2);
void delay(int number_of_seconds);

int main(){

    int op=0,n1,n2;
    char operador[5] = {' ','+','-','*','/'};

    while(op!=5){
        printf("\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair");

        printf("\nOpcao: ");
        scanf("%d", &op);

        if ( op==5 ) break;

        if(op>0&&op<5){
            printf("Expressao : \n");
            scanf("%d", &n1);
            printf("\033[1A");
            (n1 < 100) ? printf("\033[2C") : (n1 >= 100) ?  printf("\033[4C") : (n1 >= 1000) ?  printf("\033[5C") : 0;
            printf("%c", operador[op]);
            scanf("%d", &n2);
        }

        switch(op){
            case 1:
                printf("\nTotal da soma: %d", somar(n1,n2));
                break;
            case 2:
                printf("\nTotal da subtracao: %d", subtrair(n1,n2));
                break;
            case 3:
                printf("\nTotal da multiplicacao: %d", multiplicar(n1,n2));
                break;
            case 4:
                printf("\nTotal da divisao: %d", dividir(n1,n2));
                break;
            default:
                printf("\nOpcao Invalida!");
                break;
        }

        printf("\n\npressione ENTER para continuar...");
        while ((getchar()) != '\n');
        getchar();
        printf("\033[2J\033[100A");
    }
    return 0;
}

int somar(int n1, int n2){
    return n1+n2;
}
int subtrair(int n1, int n2){
    return n1-n2;
}
int dividir(int n1, int n2){
    return n1/n2;
}
int multiplicar(int n1, int n2){
    return n1*n2;
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds);
}
