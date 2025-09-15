#include <stdio.h>

int main() {

    printf("===Selecione uma opcao===\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");

    int opcao;
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
case 1:
int a, b, soma;

printf("Digite o primeiro numero para a soma: \n");
scanf("%d", &a);
printf("Digite o segundo numero da soma: \n");
scanf("%d", &b);
soma = a + b;
printf("O resultado de %d + %d = %d\n", a, b, soma);
break;

case 2:
int subt;

printf("Digite o primeiro numero da subtracao: \n");
scanf("%d", &a);
printf("Digite o segundo numero da subtracao: \n");
scanf("%d", &b);
subt = a - b;
printf("O resultado de %d - %d = %d\n",a, b, subt);
break;

case 3:
int multi;

printf("Digite o primero numero da multiplicacao: \n");
scanf("%d", &a);
printf("Digite o segundo numero da multiplicacao: \n");
scanf("%d", &b);
multi = a * b;
printf("O resultado de %d * %d = %d\n", a, b, multi);
break;

case 4:
int divisao;

printf("Digite o primero numero da divisao: \n");
scanf("%d", &a);
printf("Digite o segundo numero da divisao: \n");
scanf("%d", &b);
divisao = a / b;
printf("O resultado de %d / %d = %d\n", a, b, divisao);
break;
}
printf("Esse demorou mas deu certo professor kkkkk");

return 0;
}