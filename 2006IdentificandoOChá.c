#include <stdio.h>

int main() {
    int T, A, B, C, D, E;
    int count = 0;
    
    scanf("%d\n",&T);
    scanf("%d\n%d\n%d\n%d\n%d\n", &A, &B, &C, &D, &E);

    if (T == A || T == B || T == C || T == D || T == E) {
        count++;
    }


    printf("%d\n", count);

    return 0;
}
