#include <stdio.h>

int main(void) {
  //definindo as variaveis do programa
  int base,//base de numero inteiro
      expoente,//expoente inteiro nao negativo
      potencia,//guarda as potencias parciais
      contador;
  //imprimindo na tela
  printf("\n\tResultado de potencias\n");
  printf("Escolha uma base de numero inteiro:\n");
  //modificando o valor da variavel base
  scanf("%d", &base);
  printf("Escolha um expoente de numero inteiro nao-negativo:\n");
  //modificando o valor da variavel expoente
  scanf("%d", &expoente);
  //definindo valor das variaveis no inicio do programa
  potencia = 1;
  contador = 0;
  //enquanto o contador não for igual ao expoente o código é repetido
  while(contador != expoente){
    potencia *= base;
    contador = contador + 1;

  }printf("O valor de %d elevado a %d sera de: %d", base, expoente, potencia);

  //termina o programa
  return 0;
}