#include <stdio.h>
int main()
{
    float n1, p1, n2, p2, n3, p3, media;
    printf("Digite a primeira nota e seu peso: ");
    scanf("%f %f", &n1, &p1);
    printf("Digite a segunda nota e seu peso: ");
    scanf("%f %f", &n2, &p2);
    printf("Digite a terceira nota e seu peso: ");
    scanf("%f %f", &n3, &p3);

    media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    printf("A média foi: %.2f", media);
return 0;
}
