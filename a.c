#include<stdio.h>

  int main()
{
    char vet[5];

    int i = 0;
    scanf("%s",vet);

    for ( i = 0; i < 5; i++)
    {
       printf("%c\n",vet[i]);
    }
    
    return(0);
}