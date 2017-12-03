#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printOpt();
void print4(char nome[40]);
void printOdd(char nome[40]);
void countLetters(char nome[40]);

int main(){

    printOpt();

    return 0;
}

void printOpt(){

    int opt=0;
    char nome[40];

    printf("Selecione uma das opções abaixo:\n");
    printf("1 - Imprimir 4 letras\n");
    printf("2 - Imprimir posições impares\n");
    printf("3 - Contar Consoantes e Vogais\n");

    printf("Opcao: ");
    scanf("%d", &opt);
    if(opt>=1&&opt<=3){
        printf("Nome: ");
        scanf("%s", &nome);
    }

    switch(opt){
        case 1:
            if(strlen(nome)>=4)
                print4(nome);
            else
                printf("\nO nome digitado possui menos de 4 letras!");
            break;
        case 2:
            printOdd(nome);
            break;
        case 3:
            countLetters(nome);
            break;
        default:
            printf("\nOpcao invalida!\n\n");
            break;
    }
}

void print4(char nome[40]){
    char res[5] = {nome[0], nome[1], nome[2], nome[3]};
    printf("res : %s", res);
}
void printOdd(char nome[40]){

    char res[40];
    int c=0, i;

    for(i = 0; i<strlen(nome); i++){
        if(i%2!=0){
            res[c] = nome[i];
            c++;
        }
    }
    printf("res : %s\n", res);
}
void countLetters(char nome[40]){
    int i,j, vcount=0, ccount=0, flag=0;
    char vogals[5] = "aeiou";

    for(i=0; i<strlen(nome); i++){
        for(j=0; j<5; j++){
            (nome[i] == vogals[j]) ?  (flag=1): 0;
        }
        (flag==0) ? ccount++: vcount++;
        flag=0;
    }
    printf("Consoantes: %d\nVogais: %d\n", ccount, vcount);
}
