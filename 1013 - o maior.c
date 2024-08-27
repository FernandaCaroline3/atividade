#include <stdio.h>
 
int main() {
 
    int A = 0, B = 0, C = 0;
    int MaiorAB = 0;
    
    scanf("%d\n%d\n%d",&A,&B,&C);
    MaiorAB = (A+B+abs(A-B))/2;
    MaiorAB = (C+MaiorAB+abs(MaiorAB-C))/2;
    printf("%d eh o maior\n",MaiorAB);
 
    return 0;
}