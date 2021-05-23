#include<stdlib.h>
//#include<stdio.h>
#include<locale.h>
#include <iostream>  //atulização da biblioteca Stdio para que se possa usar o linguagem C++ e C#
using namespace std; //Evitar conflitos em funçães completamente diferentes mas que tem o mesmo nome.

int main ()

{
	setlocale (LC_ALL, "Portuguese");
	int opc, cont=1, i;
	float preco, desc, result, num1, num2;


	printf("\t---------------------------------------------\n");
	printf("\t                Tool Box					   \n");
	printf("\n");
	printf("\t       Conversores, formulas, códigos.       \n");
	printf("\t     A ferramenta ideal para iniciantes      \n");
	printf("\n");
	printf("\n");
	printf("\t----------------------------------- V 1.0 BETA\n");
	printf("\n");
	printf("\tCarregando software...........................\n");
	_sleep(1000); // Biblioteca fornecido pela Microsoft Windows, faz a função de pausar o código pelo tempo definido.
	system("cls");

	while (cont == 1) {


		printf("\n\tBem vindo a Tool Box!!!");
		printf("\n\t");
		printf("\n\t 1 - Laço de repetição While e Do While. ");
		printf("\n\t 2 - Laço de repetição For. ");
		printf("\n\t 3 - Estruturas	Condicionais. ( if / else ) ");
		printf("\n\t 4 - Switch Case. ");
		printf("\n\t 5 - Cálculo de desconto com porcentagem. ");
		printf("\n\t 6 - Cálculadora básica. ");
		printf("\n\t 7 - Hello Word!. ");
		printf("\n\t");
		printf("\n\tOpção: ");

		scanf("%d", &opc);

		switch(opc) {
			case 1:
				system("cls");

				printf("\n\tLógica de funcionamento do laço.");

				printf("\n\t");
				printf("\n\tint i = 1;                  // Declaração e inicialização");
				printf("\n\t");
				printf("\n\twhile(i <= 10)   {          // Expressão lógica");
				printf("\n\tprintf('%%d', i);           // Comando 1: escreve o número na tela");
				printf("\n\ti++;                        // Comando 2: Incrementação do i");
				printf("\n\t}");
				printf("\n\t");

				printf("\n\tLógica de funcionamento do laço Do While");

				printf("\n\t");
				printf("\n\tint num;                  			// Declaração");
				printf("\n\t");
				printf("\n\tdo {");
				printf("\n\tprintf('Digite um numero entre 1 e 10: ');    	 // Comando 1: pedido ao usuário");
				printf("\n\tscanf('%%d'&num);                              // Comando 2: armazenamento em num");
				printf("\n\t   }   while(num < 1 || num > 10);                // Epressão lógica");
				printf("\n\t");
				printf("\n\t");
				break;

			case 2:
				system("cls");
				printf("\n\tLógica de funcionamento do laço For");

				printf("\n\t");
				printf("\n\tint i;");
				printf("\n\t");
				printf("\n\tfor(i = 1; i <= 10; i++) {				//Inicialização, Condição, Incremento");
				printf("\n\tprintf('%%d', i);					//Exemplo de uma impressão de 1 a 10");
				printf("\n\t");
				break;

			case 3:
				system("cls");
				printf("\n\tLógica de Funcionamento do IF / ELSE");

				printf("\n\t");
				printf("\n\tif (condição){  	//Use if para especificar um bloco de código a ser executado fo verdadeiro");
				printf("\n\t");
				printf("\n\t instrução 1 ");
				printf("\n\t");
				printf("\n\t }  else   {  		//se a mesma condição for falsa ele retornara para esse bloco.");
				printf("\n\t");
				printf("\n\t instrução 2");
				printf("\n\t");
				printf("\n\t } ");
				printf("\n\t");
				printf("\n\tVale a pena lembrar!!!");
				printf("\n\t");
				printf("\n\t< .......”menor que”");
				printf("\n\t<= ..... ”menor ou igual a”");
				printf("\n\t== ..... ”igual a”");
				printf("\n\t! = .....”diferente de”");
				printf("\n\t>= ..... ”maior ou igual a”");
				printf("\n\t> .......“maior que”");
				printf("\n\t");
				break;

			case 4:
				system("cls");
				printf("\n\tLógica de funcionamento Switch case");
				printf("\n\t");

				printf("\n\tint valor;");
				printf("\n\tprintf('Digite um valor de 1 a : ')");
				printf("\n\tscanf('%%d, &valor'); ");
				printf("\n\t");

				printf("\n\tswitch ( valor )  { ");
				printf("\n\tcase 1 : ");
				printf("\n\tprintf('Domingo');  ");
				printf("\n\tbreak;     ");
				printf("\n\t");

				printf("\n\tswitch ( valor )  { ");
				printf("\n\tcase 2 : ");
				printf("\n\tprintf('Segunda');  ");
				printf("\n\tbreak;     ");
				printf("\n\t");

				printf("\n\tdefault:");
				printf("\n\tprintf('Valor Invalido');");
				printf("\n\t");

				printf("\n\tNota!!!");
				printf("\n\t");
				printf("\n\tA instrução break termina a execução do switch e o programa continua a executar na instrução seguinte");
				printf("\n\t");
				break;
		}
		if(opc==5) {
			system("cls");
			printf("\n\tCalculando porcentagem de um número");
			printf("\n\t");

			printf("\n\tInsira o valor: ");
			scanf("%f", &preco);
			printf("\n\tInsira a porcentagem de desconto: ");
			scanf("%f", &desc);
			result= preco-(preco*(desc/100));
			printf("\n\tProduto no valor de R$%1.f com o desconto de %1.f%%: R$%.2f ",preco ,desc, result);
			printf("\n\t");
		}
		if(opc==6) {
			system("cls");
			cout << "Primeiro numero: ";		// O objeto COUT representa o stream de saída no C++ ou o SCANF no C.
			cin >> num1;						//O objeto CIN representa o stream de entrada no C++ ou o PRINF no C.
			cout << "Segundo numero: ";			//Todas as informaçães sobre comandos de C++ acesse https://www.inf.pucrs.br/~pinho/PRGSWB/Streams/streams.html
			cin >> num2;
			printf("\n");
			cout << "Soma         : " << num1 + num2 << endl;
			cout << "Subtracao    : " << num1 - num2 << endl;
			cout << "Multiplicacao: " << num1 * num2 << endl;
			cout << "Divisao      : " << num1 / num2 << endl;
			cout << "Modulo       : " << (int)num1 % (int)num2 << endl;	//O módulo ou valor absoluto de um número real a é o valor numérico de a desconsiderando seu sinal. Está associado à ideia de distância de um ponto até sua origem, ou seja, a sua magnitude.
			cout << "Porcentagem  : " << 100.0*(num1/num2) << endl;
			cout << "Media        : " << (num1 + num2)/2 << endl;
			printf("\n\t");
		}
		if(opc==7) {
			for(i =1; i<=200; i++) {

				printf("\n\tHello Word!!! Hello Word!!! ***  Hello Word!!! Hello Word!!!");
				printf("\n\t");
				printf("\n\t");
			}
		} else {
		}


		printf("\n\tDigite 1 para voltar o menu principal ou 0 para sair=  ");
		scanf("%d",&cont);
		system("cls");

		if(cont == 0) {
			printf("\n\tObrigado por utilizar a Tool Box!!");
		}

	}
	return(0);
}

