#include <stdio.h>
 
int main() {
 
    double Volume = 0.0;
    double R = 0.0;
    double PI = 3.14159;
    
    scanf("%lf\n",&R);
    Volume = (4.0/3)*PI*R*R*R;
    
    printf("VOLUME = %.3lf\n", Volume);
 
    return 0;
}