#include <stdio.h>

int main(void) {
  //definindo variaveis
int n,//guarda o valor N
    i,//numeral de quantos impares vao aparecer
    impar;//apresenta numeros impar para i
//imprimindo na tela
printf("\n\tLista de numeros impares em sequencia\n");
printf("Entre com um numero inteiro:");
//alterando variavel N e guardando o valor
scanf("%d", &n);
//mudando os valores das variaveis iniciais do programa
i = 0;
impar = 1;
//imprimindo os valores impares na tela
printf("Os primeiros %d impares sao:\n", n);
//fazendo com que a variavel i chegue até o valor de n imprimindo os números impares na tela
while (i < n){
  printf("%d\n", impar);
  impar = impar + 2;
  i = i + 1;
}
    return 0;
}