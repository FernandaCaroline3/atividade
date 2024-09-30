#include <stdio.h>
 
int main() {
 
    int H, Z, L = 0;

    scanf("%d\n%d\n%d\n",&H,&Z,&L);
    if ((H > Z && H < L) || (H < Z && H > L))
    {
        printf("huguinho\n");
    }

    else if ((Z > H && Z < L) || (Z< H && Z > L))
    {
        printf("zezinho\n");
    }
    
    else {
        printf("luisinho\n");
    }
 
    return 0;
}