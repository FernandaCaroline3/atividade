#include<stdio.h>

int main()
{
   double a, b, c, d, e, f = 0;
   int i = 0;
   scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d, &e, &f);

    if (a >= 0)
    {
       i++;
    }

    if (b >= 0)
    {
       i++;
    }
    
    if (c >= 0)
    {
       i++;
    }
    
    if (d >= 0)
    {
       i++;
    }

    if (e >= 0)
    {
       i++;
    }

    if (f >= 0)
    {
       i++;
    }

    printf("quantidade de numeros positivos = %d",i);

    return(0);
}