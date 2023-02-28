#include <stdio.h>
#include <math.h>
int main() {
    //int
    double g = 9.8;
    int alturainicial = 0;
    int angle;
    int vinicial;
    int alturateto;
    int d;
    int h;

    //introduzir valores
    printf("Introduza o angulo em graus : ");
    scanf("%d",&angle);

    printf("\n");

    printf("Introduza a velocidade inicial : ");
    scanf("%d",&vinicial);

    printf("\n");

    printf("Introduza a altura do teto : ");
    scanf("%d",&alturateto);

    printf("\n");

    //Questão da distancia
    d = ((vinicial * vinicial) * sin(2 * angle * 0.0174533)) / g;
    printf("O cesto tem de estar a %d metros",d);
    printf("\n");

    //Questão do teto
    h = alturainicial + (((vinicial * vinicial) * ((sin(angle * 0.0174533)) * (sin(angle * 0.0174533)))) / (2 * g));
    if (h < alturateto){
        printf("Nao bate no teto");
    }
    else{
        printf("Bate no teto");
    }

}
