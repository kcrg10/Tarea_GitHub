#include <stdio.h>
#include <math.h>
int main()
{

	double valorInicial, valorFinal, incremento, x, suma, termino;
	int n, N;
	

	scanf_s("%lf %lf %lf", &valorInicial, &valorFinal, &incremento);

	
	if (incremento <= 0)
	{
		return 1;
	}

	N = (int)((valorFinal - valorInicial) / incremento) + 1;
	
	for (x = valorInicial ; x <= valorFinal; x += incremento)
	{
		suma = 0.0;
		termino = 1.0;
		
		for (n = 0; n < N; n++)
		{
			if (n == 0)
			{
				termino = 1.0;
			}
			else
			{
				termino = termino * (x / n);
			}
			suma += termino;
		}
			
	
		printf("%lf %lf %lf\n", x, suma, exp(x));
	}

	

	return 0;
}