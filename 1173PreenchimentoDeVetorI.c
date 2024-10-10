#include <stdio.h>

int main() {
    int N[10];
    N[0] = 1;
    
    for (int i = 1; i < 10; i++) {
        scanf("%d\n",&N[i]);
        N[i] = N[i - 1] * 2;
    }
    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
