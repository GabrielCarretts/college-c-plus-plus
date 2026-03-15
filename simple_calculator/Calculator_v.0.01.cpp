#include <iostream>
#include <clocale>
using namespace std;
main ( )
{
	setlocale (LC_ALL, "Portuguese");
	
	//Variáveis agrupadas
	float n1, n2, resultado;
	char operacao;
	
	// 1. Setup e Boas-vindas
	cout << "Bem vindo à Calculadora v.0.01" << endl;
	
	//2. Coleta dos inputs (Entrada)
	cout << "Digite o primeiro número: ";	
	cin >> n1;
	
	cout << "Selecione a operação (+, -, *, /): ";
	cin >> operacao;
	 
	//4. Processamento (Operações matemáticas)	
	if (operacao == '+') {
        cout << "Adição escolhida!" << endl;
        cout << "Digite o segundo número: ";
		cin >> n2;
		resultado = n1 + n2;
    }
    
    	if (operacao == '-') {
        cout << "Subtração escolhida!" << endl;
        cout << "Digite o segundo número: ";
		cin >> n2;
		resultado = n1 - n2;
    }
	
		if (operacao == '*') {
        cout << "Multiplicação escolhida!" << endl;
        cout << "Digite o segundo número: ";
		cin >> n2;
		resultado = n1 * n2;
    }
    
    	if (operacao == '/') {
        cout << "Divisão escolhida!" << endl;
        cout << "Digite o segundo número: ";
		cin >> n2;
		resultado = n1 / n2;
    }

	//3. Saída
	cout << "Resultado: " << resultado;
}
