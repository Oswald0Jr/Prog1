#include <stdio.h>

//funcao que compara 2 numeros
int maior2 (int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

//funcao que compara 3 numeros
int maior3 (int x, int y, int z) {

	//reutilizando a funcao que que compara dois numeros
	return maior2(maior2(x, y), z);
}

int main() {
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	int resultado = maior3(x, y, z);
	printf("Maior = %d\n", resultado);
	return 0;
}
