#include<stdio.h>
#include<stdlib.h>

void preenche();
void MM(int v[], int c);
void media(int v[], int c);
void ordenar(int v[], int c);

int main(){
    preenche();
    return 0;
}

void preenche(){
    int n, i, op, confirm=0;

    printf("Por favor, insira a quantidade de notas: ");
    scanf("%d", &n);

    int notas[n];

    for(i=0; i<n; i++){
        printf("\nPor favor, insira a %d nota: ", i+1);
        scanf("%d", &notas[i]);
    }

    while(op != 4){
        printf("\n\nEscolha: \n1- Ordenar vetor\t\t2 - Calcular media\n3 - Maior e menor\t\t4 - Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                ordenar(notas, n);
                break;
            case 2:
                media(notas, n);
                break;
            case 3:
                mm(notas, n);
                break;
            case 4:
                confirm = 3;
                while(confirm != 0 && confirm != 1){
                    printf("Deseja realmente sair? ( 1 - SIM | 0 - continuar ) : ");
                    scanf("%d", &confirm);
                    (confirm != 0 && confirm != 1) ? printf("Opcao Invalida! Digite 0 ou 1") : 0;
                }
                op += confirm-1;
                break;
            default:
                printf("Opcao Invalida!!!");
                break;
        }
    }
    ordenar(notas, n);
}


void mm(int v[], int c){

    int i, max = v[0], min=v[0];
    printf("%d", c);
    for(i = 0; i<c; i++){
        if(max<v[i])
            max = v[i];
        if(min>v[i])
            min = v[i];
    }
    printf("\nMaior : %d", max);
    printf("\nMenor : %d", min);
}

void media(int v[], int c){
    int i, soma=0, media;
    for(i=0; i < c; i++){
        soma += v[i];
    }
    media = soma/c;
    printf("A media e´ : %d", media);
}
void ordenar(int v[], int c){
    int i, j, prev, length = c;

    //ordena vetor
    for (i = 0; i < length; ++i){
        for (j = i + 1; j < length; ++j){
            if (v[i] > v[j]){

                prev = v[i];

                v[i] = v[j];

                v[j] = prev;

            }
        }
    }

    printf("\nVetor Ordenado:\n\n");
    for (i = 0; i < length; ++i){
        printf("v[%d] = %d\n", i, v[i]);
    }
}
