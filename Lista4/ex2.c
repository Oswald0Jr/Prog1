#include <stdio.h>
#include <math.h>

float calculaDelta(float a, float b, float c) {
	return pow(b,2) - (4 * a * c);
}

float calculaX1(float a, float b, float delta) {
	return (-b + sqrt(delta)) / (2 * a);
}

float calculaX2(float a, float b, float delta) {
	return (-b - sqrt(delta)) / (2 * a);	
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
			printf("x1 = %.2f\n", calculaX1(a, b, delta));
			printf("x2 = %.2f\n", calculaX2(a, b, delta));
		}
	}
	return 0;
}

