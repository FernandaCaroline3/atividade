#include <stdio.h>
 
int main() {
 
    int N = 0;
    int HT = 0;
    double S = 0.0;
    double VH = 0.0;
    
    scanf("%d\n%d\n%lf", &N,&HT,&VH);
    S = HT*VH;
    printf("NUMBER = %d\n", N);
    printf("SALARY = U$ %.2lf\n",S);
 
    return 0;
}