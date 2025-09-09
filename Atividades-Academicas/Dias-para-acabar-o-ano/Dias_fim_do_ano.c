#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
int dia, mes, resposta;

printf("Digite o dia atual:");
scanf("%d", &dia);

printf("Digite o mes atual:");
scanf("%d", &mes);

resposta = 30 - dia;
resposta = resposta + (12-mes)*30;

printf("Faltam %d dias para acabar o ano", resposta);

return 0;

}