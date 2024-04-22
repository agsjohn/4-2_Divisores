#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int num, x, cont, contdiv;
  do{
    contdiv = 0;
    printf("Digite um número ou zero para sair: ");
    scanf("%i", &num);
    for(x = 1; x <= num; x++){
      cont = num % x;
      if(cont == 0){
        contdiv = contdiv + 1;
        printf("%i é divisível por %i\n", num, x);
      }
    }
    if(num != 0){
      printf("O número %i possuí %i divisores\n\n", num, contdiv);
    }
  }while(num != 0);
}
