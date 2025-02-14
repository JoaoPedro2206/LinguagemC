#include <stdio.h>
 
int main() {
    
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double resultadoFinal = ((A*2) + (B*3) + (C*5))/10.0;
    
    printf("MEDIA = %.1lf\n", resultadoFinal);
    return 0;
}