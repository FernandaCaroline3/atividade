#include <stdio.h>
 
int main() {
 
    double A = 0.0;
    double B = 0.0;
    double C = 0.0;
    double MEDIA = 0.0;
    
    scanf("%lf\n%lf\n%lf", &A,&B,&C);
    MEDIA = ((A*2) + (B*3) + (C*5))/10;
    printf("MEDIA = %.1lf\n", MEDIA);
 
    return 0;
}