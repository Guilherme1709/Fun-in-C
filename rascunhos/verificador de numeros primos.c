#include<stdio.h>
#include <locale.h>
 
int main() {
   setlocale(LC_ALL, "");
   int num, i, quant_divisoes = 0;
 
   printf("Digite um numero: ");
   scanf("%d", &num);
 
   for (i = 2; i <= num - 1; i++) {
         if (num % i == 0) {
         quant_divisoes++;
         break;
      }
   }

   if (quant_divisoes == 0) {
      printf("%d e um numero primo\n", num);
   } else {
      printf("%d nao e um numero primo\n", num);
   }
      
   return 0;
}