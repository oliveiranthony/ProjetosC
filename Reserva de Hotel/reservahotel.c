#include <stdio.h>

// Sistema de reserva de hotel

int main() {
    int menu;

    printf("-- MENU DO HOTEL --\n");
    printf("1. Reserva padrao.\n");
    printf("2. Reserva de final de semana.\n");
    printf("3. Lua de mel.\n");
    printf("4. Reserva mensal.\n");
    printf("5. Pacote familia.\n");
    printf("6. Entre em contato conosco.\n");
    printf("Sua resposta: ");
    scanf("%d", &menu);

    while (menu < 1 || menu > 6 ) {
        printf("Opcao invalida, escolha as devidas reservas solicitadas entre 1 e 6.\n");
        printf("Tente novamente: ");
        scanf("%d", &menu);
    }

    switch (menu) {
        case 1:
            int a;
            printf("A opcao selecionada foi: Pacote padrao.\n");
            printf("Digite 1 para realizar o cadastro: ");
            scanf("%d", &a);
            
            while (a != 1 ) {
                printf("Valor invalido, digite 1 para realizar o cadastro.\n");
                printf("Digite 1: ");
                scanf("%d", &a);
            }
            switch (a) {
                case 1:
                    char n[50], b[50];
                    int cpf, telefone;
                    int data;

                    printf("\nDigite seu primeiro nome: ");
                    scanf("%s", n);
                    printf("\nDigite seu sobrenome: ");
                    scanf("%s", b);
                    printf("\nDigite seu CPF/CNPJ: ");
                    scanf("%d", &cpf);
                    printf("\nDigite seu telefone: ");
                    scanf("%d", &telefone);

                    printf("Cadastro realizado com sucesso.\n");

                    printf("Escolha a data de reserva disponivel:\n");
                    printf("1: Dia 04/11 ao dia 05/11\n");
                    printf("2: Dia 05/11 ao dia 06/11\n");
                    printf("3: Dia 06/11 ao dia 07/11\n");
                    scanf("%d", &data);
                    if (data == 1) {
                        printf("A data selecionada foi: 04/11 ao dia 05/11");
                    } else if (data == 2) {
                        printf("A data selecionada foi 05/11 ao dia 06/11");
                    } else if (data == 3) {
                        printf("A data selecionada foi 06/11 ao dia 07/11");
                    } while (data < 1 || data > 3) {
                        printf("Opcao invalida, por favor, selecione as datas disponiveis.\n");
                        printf("Tente novamente: ");
                        scanf("%d", &data);
                    }
                    
                    int pag;
                    int nunc, cvv, valido;

                    printf("\nValor da Reserva Diaria: R$150,00.\nO pagamento pode ser realizado via PIX ou cartao, podendo parcelar em ate 6 vezes sem juros.\n");
                    printf("Para realizar o pagamento via PIX, por favor, digite 1.\n", pag);
                    printf("Caso o pagamento seja realizado via Cartao de credito ou debito, por gentileza, digite 2.\n", pag);
                    scanf("%d", &pag);
              
                    while (pag != 1 && pag != 2) {
                    printf("Opcao invalida, por gentileza, escolha PIX (1) ou Cartão (2): ");
                    scanf("%d", &pag);
                   }
                    if(pag == 1) {
                        printf("Chave PIX do Hotel: 40028922\n");
                    } else if (pag == 2) {
                        printf("Digite o numero do cartao: ");
                    scanf("%d", &nunc);

                    printf("Digite o CVV: ");
                    scanf("%d", &cvv);

                    printf("Digite a validade: ");
                    scanf("%d", &valido);
                   }
                    printf("Aguardando confirmacao do pagamento...\n");
                    printf("Pagamento efetuado!\n");
                    printf("Reserva realizada com sucesso! Ate breve!\n");
                       
            }
            break;

        case 2:
            printf("Certo, voce escolheu a opcao: Reserva de final de semana.\n");
            printf("Digite 1 para realizar o cadastro: ");
            scanf("%d", &a);
            
            while (a != 1 ) {
                printf("Valor invalido, digite 1 para realizar o cadastro.\n");
                printf("Digite 1: ");
                scanf("%d", &a);
            }

            switch(a){
                case 1: 
                    char n[50], b[50];
                    int cpf, telefone;
                    int data;

                    printf("\nDigite seu primeiro nome: ");
                    scanf("%s", n);

                    printf("\nDigite seu sobrenome: ");
                    scanf("%s", b);

                    printf("\nDigite seu CPF/CNPJ: ");
                    scanf("%d", &cpf);

                    printf("\nDigite seu telefone: ");
                    scanf("%d", &telefone);

                    printf("Cadastro realizado com sucesso.\n");

                    printf("Escolha a data de reserva:\n");
                    printf("1: Dia 07/11 ao dia 09/11\n");
                    printf("2: Dia 14/11 ao dia 16/11\n");
                    printf("3: Dia 21/11 ao dia 23/11\n");
                    printf("4: Dia 28/11 ao dia 30/11\n");
                    scanf("%d", &data);
                    if (data == 1) {
                        printf("A opcao selecionada foi: Dia 07/11 ao dia 09/11");
                    } else if (data == 2) {
                        printf("A opcao selecionada foi: Dia 14/11 ao dia 16/11");
                    } else if (data == 3) {
                        printf("A opcao selecionada foi: Dia 21/11 ao dia 23/11");
                    } else if (data == 4) {
                        printf("A opcao selecionada foi: Dia 28/11 ao dia 30/11");
                    } while (data < 1 || data > 4) {
                        printf("Opcao invalida, por favor, selecione as datas disponiveis\n");
                        scanf("Tente novamente: ");
                    }

                    printf("\nSua selecao de datas foi concluida!");

                int pag;
                int nunc, cvv, valido;

                printf("\nO valor da Reserva de Fim de Semana e de R$300,00.\nO pagamento pode ser realizado via PIX ou cartao, podendo parcelar em ate 6 vezes.\n");
                printf("Para realizar o pagamento via PIX, por favor, digite 1.\n", pag);
                printf("Caso o pagamento seja realizado via Cartao de credito ou debito, por gentileza, digite 2.\n", pag);
                scanf("%d", &pag);

                    while (pag != 1 && pag != 2) {
                    printf("Opcao invalida, por gentileza, escolha PIX (1) ou Cartão (2): ");
                    scanf("%d", &pag);
                    }

                    if (pag == 1) {
                    printf("Chave PIX do Hotel: 40028922\n");
                    } else if (pag == 2) {
                    printf("Digite o numero do cartao: ");
                    scanf("%d", &nunc);
                    printf("Digite o CVV: ");
                    scanf("%d", &cvv);
                    printf("Digite a validade do cartao: ");
                    scanf("%d", &valido);
                    }
                    printf("Aguardando confirmacao do pagamento...\n");
                    printf("Pagamento efetuado!\n");
                    printf("Reserva realizada com sucesso! Ate breve!\n");
                    break;
                    
            }
            break;

            case 3:
            printf("Certo, voce escolheu a opcao: Lua de mel.\n");
            printf("Digite 1 para realizar o cadastro: ");
            scanf("%d", &a);

               while (a != 1 ) {
                printf("Valor invalido, digite 1 para realizar o cadastro.\n");
                printf("Digite 1: ");
                scanf("%d", &a);
            }

            switch(a){
                case 1: 
                    char n[50], b[50];
                    int cpf, telefone;
                    int data;

                    printf("\nDigite seu primeiro nome: ");
                    scanf("%s", n);

                    printf("\nDigite seu sobrenome: ");
                    scanf("%s", b);

                    printf("\nDigite seu CPF/CNPJ: ");
                    scanf("%d", &cpf);

                    printf("\nDigite seu telefone: ");
                    scanf("%d", &telefone);

                    printf("Cadastro realizado com sucesso.\n");

                    printf("Escolha a data de reserva:\n");
                    printf("1: Dia 07/11 ao dia 09/10 com quartos exclusivos para casais\n");
                    printf("2: Dia 14/11 ao dia 16/11 com quartos exclusivos para casais\n");
                    printf("3: Dia 21/11 ao dia 23/11 com quartos exclusivos para casais\n");
                    printf("4: Dia 28/11 ao dia 30/11 com quartos exclusivos para casais\n");
                    scanf("%d", &data);
                    if (data == 1) {
                        printf("A reserva selecionada foi: Dia 07/11 ao dia 09/10 com quartos exclusivos para casais");
                    } else if ( data == 2) {
                        printf("A reserva selecionada foi: Dia 14/11 ao dia 16/11 com quartos exclusivos para casais");
                    } else if ( data == 3) {
                        printf("A reserva selecionada foi: Dia 21/11 ao dia 23/11 com quartos exclusivos para casais");
                    } else if ( data == 4) {
                        printf("A reserva selecionada foi: Dia 28/11 ao dia 30/11 com quartos exclusivos para casais");
                    } while (data < 1 || data > 4) {
                        printf("Opcao indisponivel, por favor, selecione as reservas disponiveis.\n");
                        printf("Tente novamente: ");
                        scanf("%d", &data);
                    }
                    printf("Sua selecao de datas foi concluida!\n");

                int pag;
                int nunc, cvv, valido;

                printf("\nO valor da Reserva Lua de Mel e de R$650,00.\nO pagamento pode ser realizado via PIX ou cartao, podendo parcelar em ate 6 vezes.\n");
                printf("Para realizar o pagamento via PIX, por favor, digite 1.\n", pag);
                printf("Caso o pagamento seja realizado via Cartao de credito ou debito, por gentileza, digite 2.\n", pag);
                scanf("%d", &pag);

                while (pag != 1 && pag != 2) {
                    printf("Opcao invalida, selecione a opcao PIX (1) ou Cartao (2)\n");
                    printf("Tente novamente: ");
                    scanf("%d", &pag);
                } 
                if (pag == 1) {
                    printf("Chave PIX do Hotel: 40028922\n");
                } else if (pag == 2) {
                    printf("Digite o numero do cartao: ");
                    scanf("%d", &nunc);

                    printf("Digite o CVV: ");
                    scanf("%d", &cvv);

                    printf("Digite a validade do cartao: ");
                    scanf("%d", &valido);
                }
                    printf("Aguardando confirmacao do pagamento...\n");
                    printf("Pagamento efetuado!\n");
                    printf("Reserva realizada com sucesso! Ate breve!\n");
                
            }
            break;

            case 4: 
             printf("Certo, voce escolheu a opcao: Reserva mensal.\n");
            printf("Digite 1 para realizar o cadastro: ");
            scanf("%d", &a);
            
            while (a != 1 ) {
                printf("Valor invalido, digite 1 para realizar o cadastro.\n");
                printf("Digite 1: ");
                scanf("%d", &a);
            }

            switch(a){
                case 1: 
                    char n[50], b[50];
                    int cpf, telefone;
                    int data;

                    printf("\nDigite seu primeiro nome: ");
                    scanf("%s", n);

                    printf("\nDigite seu sobrenome: ");
                    scanf("%s", b);

                    printf("\nDigite seu CPF/CNPJ: ");
                    scanf("%d", &cpf);

                    printf("\nDigite seu telefone: ");
                    scanf("%d", &telefone);

                    printf("Cadastro realizado com sucesso.\n");

                    printf("Escolha a data de reserva:\n");
                    printf("1: Dia 01/11 ao dia 30/11\n");
                    printf("2: Dia 01/12 ao dia 31/12\n");
                    scanf("%d", &data);
                    if (data == 1) {
                        printf("Reserva Mensal selecionada: Dia 01/11 ao dia 30/11");
                    } else if ( data == 2) {
                        printf("Reserva Mensal selecionada: Dia 01/12 ao dia 31/12");
                    } while (data < 1 || data > 2) {
                        printf("Opcao indisponivel, por favor, selecione as reservas disponiveis.\n");
                        printf("Tente novamente: ");
                        scanf("%d", &data);
                    }

                    printf("\nSua selecao de datas foi concluida!\n");

                int pag;
                int nunc, cvv, valido;

                printf("O valor da Reserva Mensal e de R$4.200,00.\nO pagamento pode ser realizado via PIX ou cartao, podendo parcelar em ate 6 vezes.\n");
                printf("Para realizar o pagamento via PIX, por favor, digite 1.\n", pag);
                printf("Caso o pagamento seja realizado via Cartao de credito ou debito, por gentileza, digite 2.\n", pag);
                scanf("%d", &pag);
                
                while (pag != 1 && pag != 2) {
                    printf("Opcao invalida, selecione a opcao PIX (1) ou Cartao (2)\n");
                    printf("Tente novamente: ");
                    scanf("%d", &pag);
                }
                  if (pag == 1) {
                    printf("Chave PIX do Hotel: 40028922\n");
                } else if (pag == 2) {
                    printf("Digite o numero do cartao: ");
                    scanf("%d", &nunc);

                    printf("Digite o CVV: ");
                    scanf("%d", &cvv);

                    printf("Digite a validade do cartao: ");
                    scanf("%d", &valido);
                }
                    printf("Aguardando confirmacao do pagamento...\n");
                    printf("Pagamento efetuado!\n");
                    printf("Reserva realizada com sucesso! Ate breve!\n");
                    
            }
            break;

            case 5:
             printf("Certo, voce escolheu a opcao: Pacote familia.\n");
            printf("Digite 1 para realizar o cadastro: ");
            scanf("%d", &a);
            
            while (a != 1 ) {
                printf("Valor invalido, digite 1 para realizar o cadastro.\n");
                printf("Digite 1: ");
                scanf("%d", &a);
            }

            switch(a){
                case 1: 
                    char n[50], b[50];
                    int cpf, telefone;
                    int data;

                    printf("\nDigite seu primeiro nome: ");
                    scanf("%s", n);

                    printf("\nDigite seu sobrenome: ");
                    scanf("%s", b);

                    printf("\nDigite seu CPF/CNPJ: ");
                    scanf("%d", &cpf);

                    printf("\nDigite seu telefone: ");
                    scanf("%d", &telefone);

                    printf("Cadastro realizado com sucesso.\n");

                    printf("Escolha a data de reserva:\n");
                    printf("1: Dia 07/11 ao dia 28/11 com quartos especias dedicados as familias\n");
                    printf("2: Dia 14/11 ao dia 16/11 com quartos especias dedicados as familias\n");
                    printf("3: Dia 21/11 ao dia 23/11 com quartos especias dedicados as familias\n");
                    printf("4: Dia 28/11 ao dia 30/11 com quartos especias dedicados as familias\n");
                    scanf("%d", &data);
                    if (data == 1) {
                        printf("A opcao selecionada foi: Dia 07/11 ao dia 09/11 com quartos especias dedicados as familias");
                    } else if (data == 2) {
                        printf("A opcao selecionada foi: Dia 14/11 ao dia 16/11 com quartos especias dedicados as familias");
                    } else if (data == 3) {
                        printf("A opcao selecionada foi: Dia 21/11 ao dia 23/11 com quartos especias dedicados as familias");
                    } else if (data == 4) {
                        printf("A opcao selecionada foi: Dia 28/11 ao dia 30/11 com quartos especias dedicados as familias");
                    } while (data < 1 || data > 4) {
                        printf("Opcao invalida, por favor, selecione as datas disponiveis\n");
                        scanf("Tente novamente: ");
                    }

                    printf("\nSua selecao de datas foi concluida!");

                int pag;
                int nunc, cvv, valido;

                printf("O valor reserva Pacote Familia e de R$580,00.\nO pagamento pode ser realizado via PIX ou cartao, podendo parcelar em ate 6 vezes.\n");
                printf("Para realizar o pagamento via PIX, por favor, digite 1.\n", pag);
                printf("Caso o pagamento seja realizado via Cartao de credito ou debito, por gentileza, digite 2.\n", pag);
                scanf("%d", &pag);
                while (pag != 1 && pag != 2) {
                    printf("Opcao invalida, selecione a opcao PIX (1) ou Cartao (2)\n");
                    printf("Tente novamente: ");
                    scanf("%d", &pag);
                } if (pag == 1) {
                    printf("Chave PIX do Hotel: 40028922\n");
                } else if (pag == 2) {

                    printf("Digite o numero do cartao: ");
                    scanf("%d", &nunc);

                    printf("Digite o CVV: ");
                    scanf("%d", &cvv);

                    printf("Digite a validade: ");
                    scanf("%d", &valido);
                 } 
                    printf("Aguardando confirmacao do pagamento...\n");
                    printf("Pagamento efetuado!\n");
                    printf("Reserva realizada com sucesso! Ate breve!\n");
                    
            }
            break;

            case 6:
            printf("Telefone dos colaboradores: \n");
            printf("Nathan: (16)99745-3344\n");
            printf("Victor: (16)99746-3344\n");
            printf("Anthony: (74)99770-4246\n");
            printf("email da companhia: ");
            printf("suporte@hotelsonhodevalsa.com\n");
            break;
    }
           
            
    return 0;
}