#include <stdio.h> 
#include <math.h>

int main()
{
   float xc, yc, xp, yp, raio, distancia;
   
   printf("Digite as coordenadas do ponto C (xc yc) e raio: ");
   scanf("%f %f %f", &xc, &yc, &raio);
   printf("Digite as coordenadas do ponto P (xp yp): ");
   scanf("%f %f", &xp, &yp);
                        
                         // Distância entre dois pontos: d = √((x₂ - x₁)² + (y₂ - y₁)²)}; 
   distancia = sqrt(pow(xp-xc, 2)+pow(yp-yc, 2));         //sqrt (x "raiz quadrada de x"), pow (x, y "x elevado a y")
   if(distancia>raio){
       printf("O ponto P está no exterior da circunferência.");
   }
   else if(distancia<raio){
       printf("O ponto P está no interior da circunferência.");
   }
   return 0;
   }
