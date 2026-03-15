#include <iostream>
#include <clocale>
using namespace std;
int main ( )

{
	setlocale (LC_ALL, "Portuguese");
	
	//Variáveis
	float temp_celsius, temp_fahrenheit;
	char resposta;
	int escolha_conversao;

do {
	//Entrada
	cout << "\n========== CONVERSOR DE TEMPERATURA =======\n";
	cout << "\nPressione 1 para converter Celsius para Fahrenheit";
	cout << "\nPressione 2 para converter Fahrenheit para Celsius\n";
	cin >> escolha_conversao;
	
	//Processos
	if (escolha_conversao == 1) {
	cout << "\nDigite a temperatura em Celsius: ";
	cin >> temp_celsius;
	temp_fahrenheit = temp_celsius * 1.8 + 32;
	cout << "\nA temperatura em Fahrenheit é: " << temp_fahrenheit << "°F.";
	}
	else if (escolha_conversao == 2) {
	cout << "\nDigite a temperatura em Fahrenheit: ";
	cin >> temp_fahrenheit;
	temp_celsius = (temp_fahrenheit - 32) / 1.8;
	cout << "\nA temperatura em Celsius é: " << temp_celsius << "°C.";
	}

	//Saída
	cout << "\nDeseja realizar outra conversão? (S/N) ";
	cin >> resposta;
} while (resposta == 's' || resposta == 'S');
	
	system("pause");
	
	return 0;
}
