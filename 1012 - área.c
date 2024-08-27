#include <stdio.h>
 
int main() {
 
    double A = 0.0, B = 0.0, C = 0.0;
    double PI = 3.14159;
    double TRIANGULO = 0.0, CIRCULO = 0.0, TRAPEZIO = 0.0, QUADRADO = 0.0, RETANGULO = 0.0;
    
    
    scanf("%lf\n%lf\n%lf",&A,&B,&C);
    TRIANGULO = (A*C)/2;
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    CIRCULO = PI*C*C;
    printf("CIRCULO: %.3lf\n",CIRCULO);
    TRAPEZIO = (A+B)*C/2;
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    QUADRADO = B*B;
    printf("QUADRADO: %.3lf\n",QUADRADO);
    RETANGULO = A*B;
    printf("RETANGULO: %.3lf\n",RETANGULO);
    
    return 0;
}