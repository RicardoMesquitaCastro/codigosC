#include<stdlib.h>
//#include<stdio.h>
#include<locale.h>
#include <iostream>  //atuliza��o da biblioteca Stdio para que se possa usar o linguagem C++ e C#
using namespace std; //Evitar conflitos em fun��es completamente diferentes mas que tem o mesmo nome.

int main ()

{
	setlocale (LC_ALL, "Portuguese");
	int opc, cont=1, i;
	float preco, desc, result, num1, num2;


	printf("\t---------------------------------------------\n");
	printf("\t                Tool Box					   \n");
	printf("\n");
	printf("\t       Conversores, formulas, c�digos.       \n");
	printf("\t     A ferramenta ideal para iniciantes      \n");
	printf("\n");
	printf("\n");
	printf("\t----------------------------------- V 1.0 BETA\n");
	printf("\n");
	printf("\tCarregando software...........................\n");
	_sleep(1000); // Biblioteca fornecido pela Microsoft Windows, faz a fun��o de pausar o c�digo pelo tempo definido.
	system("cls");

	while (cont == 1) {


		printf("\n\tBem vindo a Tool Box!!!");
		printf("\n\t");
		printf("\n\t 1 - La�o de repeti��o While e Do While. ");
		printf("\n\t 2 - La�o de repeti��o For. ");
		printf("\n\t 3 - Estruturas	Condicionais. ( if / else ) ");
		printf("\n\t 4 - Switch Case. ");
		printf("\n\t 5 - C�lculo de desconto com porcentagem. ");
		printf("\n\t 6 - C�lculadora b�sica. ");
		printf("\n\t 7 - Hello Word!. ");
		printf("\n\t");
		printf("\n\tOp��o: ");

		scanf("%d", &opc);

		switch(opc) {
			case 1:
				system("cls");

				printf("\n\tL�gica de funcionamento do la�o.");

				printf("\n\t");
				printf("\n\tint i = 1;                  // Declara��o e inicializa��o");
				printf("\n\t");
				printf("\n\twhile(i <= 10)   {          // Express�o l�gica");
				printf("\n\tprintf('%%d', i);           // Comando 1: escreve o n�mero na tela");
				printf("\n\ti++;                        // Comando 2: Incrementa��o do i");
				printf("\n\t}");
				printf("\n\t");

				printf("\n\tL�gica de funcionamento do la�o Do While");

				printf("\n\t");
				printf("\n\tint num;                  			// Declara��o");
				printf("\n\t");
				printf("\n\tdo {");
				printf("\n\tprintf('Digite um numero entre 1 e 10: ');    	 // Comando 1: pedido ao usu�rio");
				printf("\n\tscanf('%%d'&num);                              // Comando 2: armazenamento em num");
				printf("\n\t   }   while(num < 1 || num > 10);                // Epress�o l�gica");
				printf("\n\t");
				printf("\n\t");
				break;

			case 2:
				system("cls");
				printf("\n\tL�gica de funcionamento do la�o For");

				printf("\n\t");
				printf("\n\tint i;");
				printf("\n\t");
				printf("\n\tfor(i = 1; i <= 10; i++) {				//Inicializa��o, Condi��o, Incremento");
				printf("\n\tprintf('%%d', i);					//Exemplo de uma impress�o de 1 a 10");
				printf("\n\t");
				break;

			case 3:
				system("cls");
				printf("\n\tL�gica de Funcionamento do IF / ELSE");

				printf("\n\t");
				printf("\n\tif (condi��o){  	//Use if para especificar um bloco de c�digo a ser executado fo verdadeiro");
				printf("\n\t");
				printf("\n\t instru��o 1 ");
				printf("\n\t");
				printf("\n\t }  else   {  		//se a mesma condi��o for falsa ele retornara para esse bloco.");
				printf("\n\t");
				printf("\n\t instru��o 2");
				printf("\n\t");
				printf("\n\t } ");
				printf("\n\t");
				printf("\n\tVale a pena lembrar!!!");
				printf("\n\t");
				printf("\n\t< .......�menor que�");
				printf("\n\t<= ..... �menor ou igual a�");
				printf("\n\t== ..... �igual a�");
				printf("\n\t! = .....�diferente de�");
				printf("\n\t>= ..... �maior ou igual a�");
				printf("\n\t> .......�maior que�");
				printf("\n\t");
				break;

			case 4:
				system("cls");
				printf("\n\tL�gica de funcionamento Switch case");
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
				printf("\n\tA instru��o break termina a execu��o do switch e o programa continua a executar na instru��o seguinte");
				printf("\n\t");
				break;
		}
		if(opc==5) {
			system("cls");
			printf("\n\tCalculando porcentagem de um n�mero");
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
			cout << "Primeiro numero: ";		// O objeto COUT representa o stream de sa�da no C++ ou o SCANF no C.
			cin >> num1;						//O objeto CIN representa o stream de entrada no C++ ou o PRINF no C.
			cout << "Segundo numero: ";			//Todas as informa��es sobre comandos de C++ acesse https://www.inf.pucrs.br/~pinho/PRGSWB/Streams/streams.html
			cin >> num2;
			printf("\n");
			cout << "Soma         : " << num1 + num2 << endl;
			cout << "Subtracao    : " << num1 - num2 << endl;
			cout << "Multiplicacao: " << num1 * num2 << endl;
			cout << "Divisao      : " << num1 / num2 << endl;
			cout << "Modulo       : " << (int)num1 % (int)num2 << endl;	//O m�dulo ou valor absoluto de um n�mero real a � o valor num�rico de a desconsiderando seu sinal. Est� associado � ideia de dist�ncia de um ponto at� sua origem, ou seja, a sua magnitude.
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

