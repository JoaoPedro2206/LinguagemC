#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2;
    double y1, y2;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    double difx, dify, distancia;
    
    difx = x2 - x1;
    dify = y2 - y1;
    
    distancia = sqrt((difx * difx) + (dify * dify));
    
    printf("%.4lf\n", distancia);
    
    
    
    return 0;
}