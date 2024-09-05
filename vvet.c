#include<stdio.h>

int main()
{
    char nome[50];
    int indice = 0;
    int quant = 0;
    scanf("%s",nome);
    
while (nome[indice] != '\0')
  {
      indice++;   

      if (nome[indice] == 'a' || nome[indice] == 'A')
       {
            quant++;
       }

  }
      printf("A quantidade de caracteres eh %d",quant);

}