// 2 - Faça um programa que armazene em um vetor de inteiros as quantidades compradas de 5  produtos. Em outro vetor de reais, armazene o valor unitário de cada produto. O programa deve, ao  final, mostrar o valor total a ser pago por cada produto assim como o valor total da compra.  Considere que o índice do vetor corresponde ao código do produto. 

#include <iostream>

using namespace std;

int main() {

	int quantityOfProductsPurchased[4];
	double unitValue[4];

	double totalValuePerProduct[5];
	double totalPurchaseValue = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Digite a quantidade comprada do produto " << i + 1 << ": ";
		cin >> quantityOfProductsPurchased[i];
		cout << "Digite o valor unitario do produto " << i + 1 << ": ";
		cin >> unitValue[i];
	}

	for (int i = 0; i < 5; i++) {
		totalValuePerProduct[i] = quantityOfProductsPurchased[i] * unitValue[i];
		totalPurchaseValue = totalPurchaseValue + totalValuePerProduct[i];
	}

	cout << "\nResumo da compra: \n";

	for (int i = 0; i < 5; i++) {
		cout << "Produto " << i + 1 << ": " << quantityOfProductsPurchased[i] <<
		     " unidades x R$ " << unitValue[i] << " = R$ " << totalValuePerProduct[i] << endl;
	}

	cout << "\nValor total da compra: R$ " << totalPurchaseValue << endl;

	return 0;
}