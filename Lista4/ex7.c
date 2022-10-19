#include <stdio.h>

int maior (int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	int resultado = maior(x, y);
	printf("Maior = %d\n", resultado);
	return 0;
}
