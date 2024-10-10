#include <stdio.h>

int main() {
    unsigned long long fib[61];

    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int T;
    scanf("%d", &T);


    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }

    return 0;
}


//Copiar código
    // long long fib[61]; Vetor para armazenar Fibonacci (0 a 60)
//Declaração do Vetor: Um vetor fib de 61 elementos é declarado. Ele armazena os números de Fibonacci de 0 a 60. O tipo unsigned long long é usado para garantir que o vetor possa conter grandes números (até 64 bits).
//c
//Copiar código
    // Inicializa os primeiros números de Fibonacci
   // fib[0] = 0;
    //fib[1] = 1;
//Inicialização: Os dois primeiros números da sequência de Fibonacci são inicializados. fib[0] é 0 e fib[1] é 1.
//Copiar código
    // Calcula os números de Fibonacci
    //for (int i = 2; i <= 60; i++) {
       // fib[i] = fib[i - 1] + fib[i - 2];
  //  }
//Cálculo dos Números de Fibonacci: Um loop for começa em 2 (já que os primeiros dois números estão inicializados). Para cada índice i, o número de Fibonacci correspondente é calculado como a soma dos dois números anteriores: fib[i] = fib[i - 1] + fib[i - 2].
//c
//Copiar código
 //   int T;
 //   scanf("%d", &T); // Lê o número de casos de teste
//Leitura do Número de Casos de Teste: Uma variável T é declarada para armazenar o número de casos de teste, e scanf é usado para ler esse valor da entrada.
//c
//Copiar código
    // Processa cada caso de teste
 //   for (int i = 0; i < T; i++) {
  //      int N;
  //      scanf("%d", &N); // Lê o N-ésimo termo
  //      printf("Fib(%d) = %llu\n", N, fib[N]); // Imprime o resultado
   // }
//Processamento dos Casos de Teste:
//Um loop for é usado para iterar sobre o número de casos de teste T.Para cada iteração, uma variável N é declarada e o valor correspondente ao N-ésimo número de Fibonacci é lido.
//printf é usado para imprimir o resultado no formato "Fib(N) = X", onde X é o N-ésimo número de Fibonacci armazenado no vetor.
//Copiar código
 //   return 0;
//}
//Finalização: O programa retorna 0, indicando que a execução foi bem-sucedida.
//Resumo:
//O programa calcula os números de Fibonacci de 0 a 60 e os armazena em um vetor.
//Lê o número de casos de teste e, para cada caso, lê um valor N e imprime o N-ésimo número de Fibonacci correspondente.
//A abordagem usando um vetor é eficiente, pois permite calcular todos os números de Fibonacci de uma vez e acessá-los rapidamente.//