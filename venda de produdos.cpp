#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main()
{
                setlocale(LC_ALL, "portuguese");
                int op, resp, ec, num;     //operacao, resposta, escolha cliente, numero do tenis;
                char nome[40], sx;
 
                printf("\t\t\t #### WELLCOME, TO NAT�LIA SHOPPING #### \n\t");
                printf("-> A maior loja do sudeste goiano agora na palma da sua m�o!<- \n\n\t");
                printf(" Ol�, sou a Nat... serei sua guia neste site! -\n\t");
                printf(" Voc� procura uma op��o feminina ou masculina? \n\t");
                printf(" Digite (M) para Masculino e (F) para Feminino. \n\t");
                scanf("%c", &sx);
 
                printf("\n\t Para melhor lhe atender, informe seu primeiro nome: \n\t");
                scanf("%s", &nome);
                if (sx == 'm' && sx == 'M' || sx=='f' && sx=='F')
                {
                               do {       
                                             
                                               system("cls");
                                               printf("\n\t Qual marca � mais a sua carabtrt? \n");
                                               printf("\n\t 1 - NIKE ");
                                               printf("\n\t 2 - ADIDAS ");
                                               printf("\n\t 3 - OLYMPIKUS ");
                                               printf("\n\t 4 - SAIR \n\n\t");
                                               scanf("%d", &op);
                                              
                                               system("cls");
 
                                               if (op < 1 || op > 4)
                                                               printf("\n\n\t Ops, algo deu errado!\n\t\t\t Tente novamente! \n\n\t");
 
                                               if (op == 1)
                                               {
                                                               printf("\n\t %s, estas s�o as opcoes masculinas dos tenis nikes dispon�veis no momento: \n", nome);
 
                                                               printf("\n\t 1 - Nike SB \t R$ 199.99");
                                                               printf("\n\t 2 - Nike Air \t R$ 299,99");
                                                               printf("\n\t 3 - Nike Motriz \t R$ 349,99");
                                                               printf("\n\t 4 - Nike camufle \t R$ 359,99 \n\t");
                                                               printf("\n\t Qual a op��o escolhida? \n\t");
                                                               scanf("%d", &ec);
 
                                                               switch (ec)
                                                               {
                                                                               case 1:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 38");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               case 2:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 -  N� 39");
                                                                                              printf("\n\t 2 - N� 42");
                                                                                              printf("\n\t 3 - N� 43");
                                                                                              printf("\n\t 4 - N� 44 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               case 3:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 37");
                                                                                              printf("\n\t 2 - N� 42");
                                                                                               printf("\n\t 3 - N� 43");
                                                                                              printf("\n\t 4 - N� 44 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               case 4:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               default:
                                                                                              printf("\n\t Op��o inv�lida! \n");
                                                                                              break;
                                                               }
                                               }
 
                                               if (op == 2)
                                               {
                                                               printf("\n\t %s, estas s�o as opcoes masculinas dos tenis adidas dispon�veis no momento: \n", nome);
 
                                                               printf("\n\t 1 - Adidas Grand \t R$ 161.49");
                                                               printf("\n\t 2 - Adidas Lite \t R$ 179,99");
                                                               printf("\n\t 3 - Adidas Ultraboost \t R$ 499,99");
                                                               printf("\n\t 4 - Adidas Falcon \t R$ 159,99 \n\t");
                                                               printf("\n\t Qual a op��o escolhida? \n\t");
                                                               scanf("%d", &ec);
 
                                                               switch (ec)
                                                               {
                                                                               case 1:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               case 2:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 37");
                                                                                              printf("\n\t 2 - N� 38");
                                                                                              printf("\n\t 3 - N� 39");
                                                                                              printf("\n\t 4 - N� 40 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 3:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 42");
                                                                                              printf("\n\t 3 - N� 44");
                                                                                              printf("\n\t 4 - N� 45 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 4:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               default:
                                                                                              printf("\n\t Op��o inv�lida! \n");
                                                                                              break;
                                                               }
                                               }
 
                                               if (op == 3)
                                               {
                                                               printf("\n\t %s, estas s�o as opcoes masculinas dos tenis Olympikus dispon�veis no momento: \n", nome);
 
                                                               printf("\n\t 1 - Olympikus Breed \t R$ 84.99");
                                                               printf("\n\t 2 - Olympikus Attract \t R$ 99,99");
                                                               printf("\n\t 3 - Olympikus Dash \t R$ 84,92");
                                                               printf("\n\t 4 - Olympikus Cyber \t R$ 186,99 \n\t");
                                                               printf("\n\t Qual a op��o escolhida? \n\t");
                                                               scanf("%d", &ec);
 
                                                               switch (ec)
                                                               {
                                                                               case 1:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 37");
                                                                                              printf("\n\t 2 - N� 38");
                                                                                              printf("\n\t 3 - N� 39");
                                                                                              printf("\n\t 4 - N� 41 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               case 2:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 3:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 38");
                                                                                              printf("\n\t 2 - N� 39");
                                                                                              printf("\n\t 3 - N� 40");
                                                                                              printf("\n\t 4 - N� 41 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 4:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 43");
                                                                                              printf("\n\t 4 - N� 44 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               default:
                                                                                              printf("\n\t Op��o inv�lida! \n");
                                                                                              break;
                                                               }
                                               }
 
                                               if (op == 4)
                                               {
                                                               printf("\n\t Programa finalizado pelo usu�rio. \n\t");
                                                               return (0);
                                               }
 
                                               printf("\n\n\tDigite 1 para continuar ou digite 2 para finalizar a compra.\n\n\t");
                                               scanf("%d", &resp);
                               } while (resp == 1);
 
                               system("cls");
                               printf("\n\t Finalizando!");
                               printf("\t\t\t\t .................................... ");
                               printf("\n\t Aperte enter para ser redirecionado para a p�gina do link abaixo para realizar o pagamento.");
                               printf("\n\t https//:www.natshopping/pag.com.br \n\n");
                               printf("\t\t\t %s, foi um prazer te acompanhar at� aqui... Volte sempre! YEEEEEAH", nome);
                }
 
                if (sx == 'f' || sx == 'F')
                {
                               do {
                                               system("cls");
                                               printf("\n\t Qual marca � mais a sua cara? \n");
                                               printf("\n\t 1 - NIKE ");
                                               printf("\n\t 2 - ADIDAS ");
                                               printf("\n\t 3 - OLYMPIKUS ");
                                               printf("\n\t 4 - SAIR \n\n\t");
                                               scanf("%d", &op);
 
                                               if (op < 1 || op > 4) printf("\n\n\t Ops, algo deu errado!\n\t\t\t Tente novamente! \n\n\t");
 
                                               if (op == 1)
                                               {
                                                               printf("\n\t %s, estas s�o as opcoes femininas dos tenis nikes dispon�veis no momento: \n", nome);
                                                               printf("\n\t 1 - Nike SB \t R$ 199.99");
                                                               printf("\n\t 2 - Nike Air \t R$ 299,99");
                                                               printf("\n\t 3 - Nike Motriz \t R$ 349,99");
                                                               printf("\n\t 4 - Nike camufle \t R$ 359,99 \n\t");
                                                               printf("\n\t Qual a op��o escolhida? \n\t");
                                                               scanf("%d", &ec);
 
                                                               switch (ec)
                                                               {
                                                                               case 1:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 38");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               case 2:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 42");
                                                                                              printf("\n\t 3 - N� 43");
                                                                                              printf("\n\t 4 - N� 44 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 3:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 37");
                                                                                              printf("\n\t 2 - N� 42");
                                                                                              printf("\n\t 3 - N� 43");
                                                                                              printf("\n\t 4 - N� 44 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 4:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               default:
                                                                                              printf("\n\t Op��o inv�lida! \n");
                                                                                              break;
                                                               }
                                               }
 
                                               if (op == 2)
                                               {
                                                               printf("\n\t %s, estas s�o as opcoes femininas dos tenis adidas dispon�veis no momento: \n", nome);
                                                               printf("\n\t 1 - Adidas Grand \t R$ 161.49");
                                                               printf("\n\t 2 - Adidas Lite \t R$ 179,99");
                                                               printf("\n\t 3 - Adidas Ultraboost \t R$ 499,99");
                                                               printf("\n\t 4 - Adidas Falcon \t R$ 159,99 \n\t");
                                                               printf("\n\t Qual a op��o escolhida? \n\t");
                                                               scanf("%d", &ec);
 
                                                               switch (ec)
                                                               {
                                                                               case 1:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               case 2:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 37");
                                                                                              printf("\n\t 2 - N� 38");
                                                                                              printf("\n\t 3 - N� 39");
                                                                                              printf("\n\t 4 - N� 40 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 3:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 42");
                                                                                              printf("\n\t 3 - N� 44");
                                                                                              printf("\n\t 4 - N� 45 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 4:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               default:
                                                                                              printf("\n\t Op��o inv�lida! \n");
                                                                                              break;
                                                               }
                                               }
 
                                               if (op == 3)
                                               {
                                                               printf("\n\t %s, estas s�o as opcoes femininas dos tenis Olympikus dispon�veis no momento: \n", nome);
                                                               printf("\n\t 1 - Olympikus Venus \t R$ 99.99");
                                                               printf("\n\t 2 - Olympikus Attract \t R$ 99,99");
                                                               printf("\n\t 3 - Olympikus Dash \t R$ 84,92");
                                                               printf("\n\t 4 - Olympikus Cyber \t R$ 186,99 \n\t");
                                                               printf("\n\t Qual a op��o escolhida? \n\t");
                                                               scanf("%d", &ec);
 
                                                               switch (ec)
                                                               {
                                                                               case 1:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 37");
                                                                                              printf("\n\t 2 - N� 38");
                                                                                              printf("\n\t 3 - N� 39");
                                                                                              printf("\n\t 4 - N� 41 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
 
                                                                               case 2:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 41");
                                                                                              printf("\n\t 4 - N� 42 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 3:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 38");
                                                                                              printf("\n\t 2 - N� 39");
                                                                                              printf("\n\t 3 - N� 40");
                                                                                              printf("\n\t 4 - N� 41 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               case 4:
                                                                                              printf("\n\t As numeracoes disponiveis sao: ");
                                                                                              printf("\n\t 1 - N� 39");
                                                                                              printf("\n\t 2 - N� 40");
                                                                                              printf("\n\t 3 - N� 43");
                                                                                              printf("\n\t 4 - N� 44 \n\t");
                                                                                              scanf("%d", &num);
                                                                                              break;
                                                                               default:
                                                                                              printf("\n\t Op��o inv�lida! \n");
                                                                                              break;
                                                               }
                                               }
 
                                               if (op == 4)
                                               {
                                                               printf("\n\t Programa finalizado pelo usu�rio. \n\t");
                                                               return (0);
                                               }
 
                                               printf("\n\n\tDigite 1 para continuar ou digite 2 para finalizar a compra.\n\n\t");
                                               scanf("%d", &resp);
                                               system("cls");
                               } while (resp == 1);
 
                               printf("\n\t Finalizando!");
                               printf("\t\t\t\t\n\n .................................... \n\n");
                               printf("\n\t Aperte enter para ser redirecionado para a p�gina do link abaixo para realizar o pagamento.");
                               printf("\n\t\t\t https//:www.natshopping/pag.com.br \n\n");
                               printf("\t\t %s, foi um prazer te acompanhar at� aqui... Volte sempre! YEEEEEAH", nome);
                }
                
                return 0;
            }
