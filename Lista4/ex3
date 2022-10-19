#include <stdio.h>
#include <math.h>

float calculaDelta(float a, float b, float c) {
	return pow(b,2) - (4 * a * c);
}

//evita repeticao de codigo, agrupando em uma unica funcao o calculo das raizes
float calculaRaizes(float a, float b, float delta, int operador) {

	if (operador == 1) //var auxiliar p indicar a operacao a ser realizada
		return (-b + sqrt(delta)) / 2 * a;
	else
		return (-b - sqrt(delta)) / 2 * a;
}

int main() {
	
	float a, b, c, delta;
	printf("Entre com os coeficientes da equacao (a, b, c): \n");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a == 0) {
		printf("Nao eh equacao de 2 grau\n");
	}
	else {//b²-4ac
		delta = calculaDelta(a, b, c);
		if (delta < 0) 
			printf("Nao existem raizes reais\n");
		else {
			printf("x1 = %.2f\n", calculaRaizes(a, b, delta, 1));
			printf("x2 = %.2f\n", calculaRaizes(a, b, delta, 0));
		}
	}
	return 0;
}
