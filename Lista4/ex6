#include <stdio.h>

float calculaImc(float peso, float altura){
   return peso / (altura * altura);
}

void classificaImc(float imc) {
   if (imc < 18.5) //condicao 1
      printf("Abaixo do peso! \n");
   else if (imc <= 24.9) //condicao 2
      printf("Peso normal! \n");
   else if (imc <= 29.9) //condicao 3
      printf("Sobrepeso! \n");
   else //condicao 4
      printf("Obeso! \n");
}
int main(){
   
    float peso, altura, resultado;
    printf("Peso e altura: ");
    scanf("%f%f", &peso, &altura);
    resultado = calculaImc(peso, altura);
   
    printf("IMC = %.2f\n", resultado);
    classificaImc(resultado);
    return 0;
}
