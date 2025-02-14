#include <stdio.h>
 
int main() {
    
    double A,B,C;
    double pi = 3.14159;
    scanf("%lf %lf %lf", &A,&B,&C);
    
    double areaTri = (A * C)/2;
    double areaCir = pi * pow(C,2);
    double areaTrap = ((A+B)*C)/2.0;
    double areaQuad = pow(B,2);
    double areaRet = A*B;
    
    printf("TRIANGULO: %.3lf\n", areaTri);
    printf("CIRCULO: %.3lf\n", areaCir);
    printf("TRAPEZIO: %.3lf\n", areaTrap);
    printf("QUADRADO: %.3lf\n", areaQuad);
    printf("RETANGULO: %.3lf\n", areaRet);
    return 0;
}