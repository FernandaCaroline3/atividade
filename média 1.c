#include <stdio.h>
 
int main() {
 
    double A = 0.0;
    double B = 0.0;
    double MEDIA = 0.0;
   
   scanf("%lf\n%lf",&A,&B);
   MEDIA = ((A*3.5)+(B*7.5))/11;
   printf("MEDIA = %.5lf\n", MEDIA);
 
    return 0;
}