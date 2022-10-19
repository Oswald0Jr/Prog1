#include <stdio.h>

float calculaMedia(float nota1, float nota2, char opcao) {
   if (opcao == 'a' || opcao == 'A') 
      return (nota1 + nota2) / 2;
   else if (opcao == 'p' || opcao == 'P') 
      return (nota1*3 + nota2*2) / 5;
   else if (opcao == 'h' || opcao == 'H')
      return (2 / (1 / nota1 + 1 / nota2));  
}

int main() {

    float nota1, nota2, resultado;
    char opcao;

    printf("Entre com as notas e a opcao (a, p, h): \n");
    scanf("%f %f %c", &nota1, &nota2, &opcao);

    resultado = calculaMedia(nota1, nota2, opcao);
    printf("Media = %.2f", resultado);

    return 0;
}
