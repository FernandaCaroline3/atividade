#include <stdio.h>
 
 int SomaSimples(int x, int y);
 
int main() {
  
  int a = 0, b = 0;
  int R = 0;
    
    scanf("%d\n%d",&a,&b);
    R = SomaSimples(a, b);
    printf("SOMA = %d\n",R);
 
    return 0;
}

int SomaSimples(int x, int y)
{ 
    int R = (x + y);
    return(R);
    
}