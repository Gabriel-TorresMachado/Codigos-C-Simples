#include <stdio.h> <math.h>
int main()
{
    int valor, cubo;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    cubo = pow(valor,3);
    printf("O cubo de %d é %d.", valor, cubo);
return 0;
}
