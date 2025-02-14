#include <stdio.h>
 
int main() {
    double raio;
    double pi = 3.14159;
    
    scanf("%lf", &raio);
    
    double resultado = (4.0/3) * pi * pow(raio, 3);
    
    printf("VOLUME = %.3lf\n", resultado);
    return 0;
}