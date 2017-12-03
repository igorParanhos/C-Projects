#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countVogals(char text[20]);

int main(){

    char text[20];
    printf("Digite uma palavra: ");
    scanf("%s", &text);
    printf("Numero de vogais: %d", countVogals(text));
    return 0;
}

int countVogals(char text[20]){

    int i,j, vcount=0;
    char vogals[5] = "aeiou";

    for(i=0; i<strlen(text); i++){
        for(j=0; j<5; j++){
            (text[i] == vogals[j]) ?  vcount++ : 0;
        }
    }
    return vcount;
}
