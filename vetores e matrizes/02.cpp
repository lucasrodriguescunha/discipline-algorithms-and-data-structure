// 2 - Faça um programa que armazene em um vetor de inteiros as quantidades compradas de 5  produtos. Em outro
// vetor de reais, armazene o valor unitário de cada produto. O programa deve, ao  final, mostrar o valor total a // ser pago por cada produto assim como o valor total da compra.  Considere que o índice do vetor corresponde ao // código do produto. 

#include <iostream>

using namespace std;

int main() {

    int quantidadeDeProdutosComprados[5];
    double valorUnitario[5];

    double valorTotalPorProduto[5];
    double valorTotalDaCompra = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite a quantidade comprada do produto " << i + 1 << ":" << endl;
        cin >> quantidadeDeProdutosComprados[i];
        cout << "Digite o valor unitario do produto " << i + 1 << ":" << endl;;
        cin >> valorUnitario[i];
    }

    for (int i = 0; i < 5; i++) {
        valorTotalPorProduto[i] = quantidadeDeProdutosComprados[i] * valorUnitario[i];
        valorTotalDaCompra += valorTotalPorProduto[i];
    }

    cout << "\nResumo da compra: \n";

    for (int i = 0; i < 5; i++) {
        cout << "Produto " << i + 1 << ": " << quantidadeDeProdutosComprados[i] <<
             " unidades x R$ " << valorUnitario[i] << " = R$ " << valorTotalPorProduto[i] << endl;
    }

    cout << "\nValor total da compra: R$ " << valorTotalDaCompra << endl;

    return 0;
}
