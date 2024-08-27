#include <stdio.h>
 
int main() {
 
    int C1 = 0, N1 = 0;
    int C2 = 0, N2 = 0;
    double VU1 = 0, VU2 = 0;
    double valor = 0.0;
    
    scanf("%d\n%d\n%lf",&C1,&N1,&VU1);
    scanf("%d\n%d\n%lf",&C2,&N2,&VU2);
    
    valor = (N1*VU1)+(N2*VU2);
    printf("VALOR A PAGAR: R$ %.2lf\n",valor);
 
    return 0;
}