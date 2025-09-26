#include <stdio.h>

/*Você foi contratado para criar um programa simples de monitoramento de voo.
O programa deve:
1. Perguntar ao usuário quantos minutos de voo deseja simular.
2. Usar um laço for para percorrer minuto a minuto.
3. A cada minuto, exibir informações como:
○ Nível de combustível (diminui 5 litros por minuto).
○ Altitude (aumenta 100 metros até o minuto 10; depois mantém).
○ Velocidade (aumenta 50 km/h até o minuto 5; depois mantém).
4. Se o combustível acabar antes do tempo previsto, exibir a mensagem:
"Alerta: Combustível esgotado! Iniciando pouso de emergência." e encerrar a
simulação.*/

int main () {
    int minutos_voo;
    double comb = 320.0;
    int alt =  0;
    int vel = 0;
    printf("Quantos minutos deseja simular? ");
    scanf("%d", &minutos_voo);

    for (int minuto = 1; minuto <= minutos_voo; minuto++) {
        comb -= 5;
   
    if (comb <= 0) {
        printf("\nMinuto %d\n", minuto);
        printf("Alerta: Combust9vel esgotado! Iniciando pouso de emergencia.\n");
        break;
    }  
    if (minuto <= 10) {
        alt += 100;
    } if (minuto <= 5) {
        vel += 50;
    }
    printf("\nMinuto: %d\nCombustivel: %.2lf L\nAltitude: %d\nVelocidade: %d Km/h\n", minuto, comb, alt, vel);
}
return 0;
}