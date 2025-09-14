# include <stdio.h>

int main () {
int valor, opcao;
printf("---BEM VINDO AO BANCO ANTHONY PROGRAMMER---\n");
printf("Realizar saque\n");
printf("Realizar deposito\n"); //Sem funcionamento
printf("Sair do caixa eletronico\n");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
    int n100, n50, n20, n10, n5, n2;
    printf("===Digite um valor para sacar===\n");
    scanf("%d", &valor);

    if ( valor < 2) {
    printf("O valor minimo do saque sao R$2,00");
    } else {
        n100 = valor / 100;
        valor %= 100;

        n50 = valor / 50;
        valor %= 50;

        n20 = valor / 20;
        valor %= 20;

        n10 = valor / 10;
        valor %= 10;

        n5 = valor / 5;
        valor %= 5;

        n2 = valor / 2;
        valor %= 2;
    
    printf("Notas entregues:\n");
     if(n100 > 0) 
        printf("%d notas de 100\n", n100);
     if (n50 > 0) 
        printf("%d notas de 50\n", n50);
     if (n20 > 0) 
        printf("%d notas de 20\n", n20);
     if (n10 > 0) 
        printf("%d notas de 10\n", n10);
     if (n5 > 0) 
        printf("%d notas de 5\n", n5);
     if (n2 > 0) 
        printf("%d notas de 2\n", n2);
     if (valor != 0) {
        printf("Nao foi possivel sacar exatamente esse valor\n");
      }
    }
    break;

    case 2:
    printf("Opcao indisponivel no momento...\n");
    break;
    
    case 3:
    printf("Saindo do sistema...\n");
    break;

    default:
    printf("Opcao invalida.\b");
    break;
}

return 0;
}
