#include <stdio.h>

int main() {
    int A, B;

    scanf("%d\n%d\n", &A, &B);

    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
