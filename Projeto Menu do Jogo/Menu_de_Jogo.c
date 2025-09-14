#include <stdio.h>

//O programa consiste em ser uma representação de um menu de um jogo (Ainda sem interface, porém com todas as opcões funcionais no terminal de execução).

int main () {
    printf("---Selecione o modo de jogo---\n");
    printf("1 - Modo Historia\n");
    printf("2 - Modo Desafio\n");
    printf("3 - Configuracoes\n");
    printf("4 - Sair do jogo\n");
int opcao;
scanf("%d", &opcao);

switch(opcao) {
    case 1:
    int dif;
    printf("Selecione a dificuldade\n");
    printf("Facil\n", dif);
    printf("Normal\n", dif);
    printf("Dificil\n", dif);
    printf("Muito dificil\n", dif);
    scanf("%d", &dif);
    if (dif == 1) {
        printf("Voce vai tirar de letra!\n");
     } else if (dif == 2) {
        printf("Aproveite a historia!\n");
     } else if (dif == 3) {
        printf("Cuidado, ha perigos na jornada!\n");
     } else if (dif == 4) {
        printf("Voce gosta de desafios... Tente sua sorte!\n");
     } else {
        printf("Opcao invalida, tente novamente.\n");
        break;
    }
    printf("Iniciando jogo...");
    break;

    case 2:
    int i;
    printf("Esta pronto para uma longa jornada de desafios ?\n");
    printf("Selecione 1 para confirmar e 2 para voltar ao menu: \n");
    scanf("%d", &i);
    if (i == 1) {
        printf("Vamos la, campeao!\n");
        printf("Iniciando jogo partida...");
     } else if (i == 2) { 
        printf("Voltando ao menu...\n");
     } else {
        printf("Opcao invalida!\n");
     }
    break;
    
    case 3:
    int config;
    printf("===Configure suas preferencias===\n");
    printf("Interface:\n");
    printf("Som:\n"); // Ainda sem funcionamento
    printf("Controle\n"); // Ainda sem funcionamento
    scanf("%d", &config);

    switch (config) {
        case 1:
        printf("===Selecione o seu tema preferido===\n");
        printf("===Digite 1 para tema claro e 2 para tema escuro.\n");
        printf("Tema claro\n");
        printf("Tema escuro\n");
        scanf("%d", &config);
        if (config == 1) {
            printf("Tema claro selecionado\n");
        } else if (config == 2) {
            printf("Tema escuro selecionado\n");
        } else {
            printf("Opcao invalida\n");
        }
        printf("Voltando ao menu...\n");
        break;
    }
    break;

    case 4:
    printf("Saindo do jogo");
    break;

    default:
    printf("Opcao invalida");
}

return 0;
}