#include <stdio.h>

int contaTotalBrinquedos(int altura, int idade) {
   int count = 0;
   
   //Barca Viking: 1,5m de altura e 12 anos.
   if (altura >= 150 && idade >= 12) 
      count+=1; 
   //Elevator of Death: 1,4m de altura e 14 anos
   if (altura >= 140 && idade >= 14) 
      count+=1;
   //Final Killer: 1,7m de altura ou 16 anos.
   if (altura >= 170 || idade >= 16) 
         count+=1;
   return count;
}

int main() {

   int altura, idade, total;
   
   //le altura (em cm) e idade da pessoa
   printf("Entre com a altura (em cm) e a idade da pessoa: ");
   scanf("%d%d", &altura, &idade);

   total = contaTotalBrinquedos(altura, idade);
   //numero de brinquedos q a pessoa pode andar
   printf("Total de brinquedos: %d\n", total); 
   return 0;
}
