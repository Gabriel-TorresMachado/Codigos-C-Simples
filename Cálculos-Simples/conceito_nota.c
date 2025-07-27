#include <stdio.h>

int main()
{
    float nota;
    printf("Digite a sua nota: ");
    scanf("%f", &nota);
    if(nota<3){
        printf("Conceito E.");
    }
    else if(3<=nota && nota<6){
        printf("Conceito D.");
    }
    else if(6<=nota && nota<8){
        printf("Conceito C.");
    }
    else if(8<=nota && nota<9){
        printf("Conceito B.");
    }
    else if(9<=nota && nota<=10){
        printf("Conceito A.\n Parabéns!");
    }
    return 0;
}
