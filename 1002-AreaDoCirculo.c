#include <stdio.h>
#include <math.h>
 
int main() {
    
    
    double raio;
    double pi = 3.14159;
    scanf("%lf", &raio);
    
    double area = pi * pow(raio, 2);
    
    printf("A=%.4lf\n", area);
    
    return 0;
}