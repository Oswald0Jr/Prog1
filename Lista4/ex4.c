#include <stdio.h>

int calculaPotencia(int x, int n) {
	int potencia = 1, i = 0;
	do {
		potencia *= x; //sem usar funcao pow da biblioteca math.h
		i++;
	} while (i != n);

	return potencia;
}

int main() {

	int x, n;
	scanf("%d%d", &x, &n);
	printf("Potencia = %d\n", calculaPotencia(x, n));
	return 0;
}
