//Declaração de Bibliotecas
#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

//Declaração de Variáveis
int numero1, numero2;
char rpt;

//Funções das Contas
int multiplicacao(int numero1, int numero2) {

	int resultadomult = numero1 * numero2;
	return resultadomult;
}

int subtracao(int numero1, int numero2) {

	int resultadosub = numero1 - numero2;
	return resultadosub;
}

int divisao(int numero1, int numero2) {
	int resultadodiv = numero1 / numero2;
	return resultadodiv;
}

int adicao(int numero1, int numero2) {
	int resultadoadi = numero1 + numero2;
	return resultadoadi;
}

//Funções do Programa

void voltaraomenu() {
	cout << "Deseja voltar ao Menu? Pressione S para voltar ou N para sair. : ";
	cin >> rpt;
	system("CLS");
}

void menu()
{
	do {
		int escolha = 0;

		cout << "********** Menu da Calculadora **********" << endl;
		cout << "(1): Multiplicacao" << endl;
		cout << "(2): Subtracao" << endl;
		cout << "(3): Divisao" << endl;
		cout << "(4): Adicao" << endl;
		cin >> escolha;

		switch (escolha)
		{
		case 1:
		{
			// MULTIPLICAÇÃO
			system("CLS");
			cout << "Menu de Multiplicacao" << endl;
			cout << "Coloque o Primeiro Numero : \n" << endl;
			cin >> numero1;
			system("CLS");
			cout << "Coloque o Segundo Numero: \n" << endl;
			cin >> numero2;
			system("CLS");
			int resultadodamult = multiplicacao(numero1, numero2);
			cout << "Resultado da Multiplicacao: \n" << resultadodamult << endl;
			voltaraomenu();
			break;
		}
		case 2:
			// SUBTRAÇÃO
		{
			system("CLS");
			cout << "Menu de Subtracao" << endl;
			cout << "Coloque o Primeiro Numero : \n" << endl;
			cin >> numero1;
			system("CLS");
			cout << "Coloque o Segundo Numero: \n" << endl;
			cin >> numero2;
			system("CLS");
			int resultadosub = subtracao(numero1, numero2);
			cout << "Resultado da Subtracao: \n" << resultadosub << endl;
			voltaraomenu();
			break;
			
		}
		case 3:
		{
			//DIVISAO
			system("CLS");
			cout << "Menu de Divisao" << endl;
			cout << "Coloque o Primeiro Numero : \n" << endl;
			cin >> numero1;
			system("CLS");
			cout << "Coloque o Segundo Numero: \n" << endl;
			cin >> numero2;
			system("CLS");
			int resultadodiv = divisao(numero1, numero2);
			cout << "Resultado da Subtracao: \n" << resultadodiv << endl;
			voltaraomenu();
			break;

		}
		case 4:
		{
			// ADICAO
			system("CLS");
			cout << "Menu de Adicao" << endl;
			cout << "Coloque o Primeiro Numero : \n" << endl;
			cin >> numero1;
			system("CLS");
			cout << "Coloque o Segundo Numero: \n" << endl;
			cin >> numero2;
			system("CLS");
			int resultadoadicao = adicao(numero1, numero2);
			cout << "Resultado da Subtracao: \n" << resultadoadicao << endl;
			voltaraomenu();
			break;
		}
		default:
		{
			cout << "Opcao invalida." << endl;
			cout << "Deseja voltar ao Menu? Pressione S para voltar ou N para sair. : ";
			cin >> rpt;
			system("CLS");
		}
		}
	} while (rpt == 'S');
}

void main() {

	printf("Calculadora 2077\n			");
	Sleep(1000);
	printf("===== Carregando 50 =====\n");
	Sleep(1000);
	printf("===== Carregando 100 =====\n");
	Sleep(1000);
	system("CLS");
	menu();
}


