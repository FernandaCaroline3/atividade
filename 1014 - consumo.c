#include <stdio.h>
 
int main() {
 
    int A = 0;
    double B = 0.0;
    double ConM = 0.0;
    
    scanf("%d\n%lf",&A,&B);
    ConM = A/B;
    printf("%.3lf km/l\n", ConM);
 
    return 0;
}