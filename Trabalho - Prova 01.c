#include<stdio.h>

double Soma(double a, double b);
double Subtracao(double a, double b);
double Multiplicacao(double a, double b);
double Divisao(double a, double b);
int Potenciacao(double a, double b);
double RaizQuadrada(double a, double b);
int Fatorial(int a, int b);
int MMC(int a, int b);
int MDC(int a, int b);
double EquacaoSegundoGrau(double a, double b,double c);

int main()
{ 
	int Escolha = 0;
	double Resultado = 0;
	int R = 0;
	double a = 0, b = 0;
	int A = 0, B = 0;
	do
    {
		printf("0. Sair\n");
		printf("1. Soma\n");
		printf("2. Subtracao\n");
		printf("3. Multiplicacao\n");
		printf("4. Divisao\n");
		printf("5. Potenciacao\n");
		printf("6. RaizQuadrada\n");
		printf("7. Fatorial\n");
		printf("8. MDC\n");
		printf("9. MMC\n");
		printf("10. EquacaoSegundoGrau\n");

	
		printf("Digite a sua escolha:\n");	
		scanf("%d\n",&Escolha);
	
		switch (Escolha)
		{
			case 1:
				printf("Digite o primeiro numero:\n");
				scanf("%lf\n",&a);
				printf("Digite o segundo numero:\n");
				scanf("%lf\n",&b);
				Soma = a+b;
				Resultado = %lf + %lf = %.5lf\n;
				double Soma(double x, double y)
			break;
			
			case 2:
				printf("Digite o primeiro numero:\n");
				scanf("%lf\n",&a);
				printf("Digite o segundo numero:\n");
				scanf("%lf\n",&b);
				Subtracao = a-b;
				Resultado = %lf - %lf = %.5lf\n;
				double Subtracao(double x, double y)
			break;
			
			case 3:
				printf("Digite o primeiro numero:\n");
				scanf("%lf\n",&a);
				printf("Digite o segundo numero:\n");
				scanf("%lf\n",&b);
				Multiplicacao = a*b;
				Resultado = %lf*%lf = %.5lf\n;
				double Multiplicacao(double x, double y)
			break;
			
			case 4:
				printf("Digite o primeiro numero:\n");
				scanf("%lf\n",&a);
				printf("Digite o segundo numero:\n");
				scanf("%lf\n",&b);
				Divisao = a/b;
				Resultado = %lf/%lf = %.5lf\n;
				double Divisao(double x, double y)
			break;
			
			case 5:
				printf("Digite o primeiro numero:\n");
				scanf("%d\n",&A);
				printf("Digite o segundo numero:\n");
				scanf("%d\n",&B);
				Potenciacao = Expoente(A,B);
				int Expoente (int x, int y)
			break;
			
			case 6:  
			    printf("Digite o primeiro numero:\n");
				scanf("%lf\n",&a);
				RaizQuadrada = Resultado,x;
				double RaizQuadrada(double x)
			break;
	
			case 7:
				printf("Digite o primeiro numero:\n");
				scanf("%d\n",&A);
				Fatorial = A;
				int Fatorial(int x)
			break;
	
			case 8;
				printf("Digite o primeiro numero:\n");
				scanf("%d\n",&A);
				printf("Digite o primeiro numero:\n");
				scanf("%d\n",&B);
				MDC = A,B;
				int MDC(int x, int y)
			break;
	
			case 9:
				printf("Digite o primeiro numero:\n");
				scanf("%d\n",&A);
				printf("Digite o primeiro numero:\n");
				scanf("%d\n",&B);
				MMC = A,B;
				int MMC(int x, int y)
			break;
	
			case 10:
				printf("Digite o primeiro numero:\n");
				scanf("%lf\n",&a);
				printf("Digite o segundo numero:\n");
				scanf("%lf\n",&b);
				printf("Digite o segundo numero:\n");
				scanf("%lf\n",&c);
				EquacaoSegundoGrau = a,b,c;
			break;
		}
	
	} while (i != 0);
	
	
	return(0);
}
	 double Soma(double x, double y)
{ 
    double Resultado = (x + y);
    return(Resultado);
}
	 double Subtracao(double x, double y)
{
	 double Resultado = (x - y);
	 return(Resultado);
}

double Multiplicacao(double x, double y)
{
	double Resultado = (x * y);
	return(Resultado);
}

double Divisao(double x, double y)
{
	double Resultado = (x/y);
	return(Resultado);
}

int Expoente(int x, int y)
{
	int R = 1;
	 
	for (int i = 0; i < y; i++)
	{
		R = R * x;
	}
	return(R);
}

double RaizQuadrada(double x)
{
	if (x > 0)
	{
		for (int i = 0; i < 100; i++)
		{
			Resultado = (0.5)*(Resultado + x/Resultado);
		}
		return(Resultado);
	}
	else
	{
		printf("%lf\n",Resultado);
	}
}

int Fatorial(int x)
{
	R = 1;
	
	 for(int i = 0; i < x; i ++)
	 {
		 R = R*(x - i);
	 }
	 return(R);
}

int MDC(int x, int y)
{
	while (R != 0);
	{
		R = x%b;
		{
			x = y;
			y = R;
		}
	}
}

int MMC(int x, int y)
{
	MDC;
	
	MMC (x,y) = x*y/MDC (x,y);
}

void EquacaoSegundoGrau(double x, double y,double z)
{
	double x,y,z,x1,x2,d;
	RaizQuadrada;
	
	if (x == 0)
	{
		printf("os dois valores sao iguais");
	} 
    else
	{
		d = y*y - 4*x*z;
		
		if (d < 0)
		{
         printf("essa nao e a solucao");
		}
		else 
		{
         x1 = (-y + RaizQuadrada(d))/(2*x);
         x2 = (-y - RaizQuadrada(d))/(2*x);
         printf("as raizes sao", x1, " e ", x2);
		}
	}
}