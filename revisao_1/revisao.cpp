// Você foi contratado para desenvolver um sistema simples de registro de operações realizadas na bolsa de valores.
// O sistema deve permitir que o usuário registre operações de compra e venda de ações, armazenando informações como
// o Ticket da empresa, a quantidade de ações em carteira e o preço médio por ação. Você deverá exibir ao usuário um menu
// para ele selecionar o que deseja fazer. As opções são:

// "Registrar compra" - Solicita ao usuário informações do ticket (cadeia de caracteres de até 6 letras, ex: ITSA4, TAEE11, BBAS3),
// quantidade comprada e valor do ativo no momento da compra.
// "Registrar Venda" - Solicita ao usuário informações do ticket, quantidade vendida e valor do ativo no momento da venda.
// Uma venda só pode ser registrada, caso o exista saldo para a venda.
// "Ver o saldo de um ativo (Busca por Ticket)" - Listar o saldo do ativo juntamente com o preço médio
// "Listar Patrimonio" - Listar todos os ativos do investidor juntamente com a quantidade e o preço médio. 
// "Sair" - Fecha a aplicação
// Em cada compra realizada o preço médio será modificado, o mesmo não ocorre para a venda, onde apenas a quantidade será modificada. 

// Sua solução deve contemplar os seguintes requisitos:

// Uso de Struct
// Uso de Funções e Procedures 
// Uso de Recursividade (Implemente a busca binária para a consulta dos ativos)

#include <iostream>
#include <string>
#include <iomanip> // Apenas para formatação de output

using namespace std;

// Definindo a estrutura para armazenar informações de um ativo
struct Ativo {
    string ticket;
    int quantidade;
    double precoMedio;
};

// Função para registrar uma compra
void registrarCompra(Ativo ativos[], int &numAtivos) {
    string ticket;
    int quantidade;
    double preco;
    bool ativoEncontrado = false;

    cout << "Digite o ticket da ação (até 6 letras): ";
    cin >> ticket;
    cout << "Digite a quantidade comprada: ";
    cin >> quantidade;
    cout << "Digite o valor do ativo no momento da compra: ";
    cin >> preco;

    // Verificar se o ativo já existe
    for (int i = 0; i < numAtivos; ++i) {
        if (ativos[i].ticket == ticket) {
            // Atualizar preço médio
            double custoTotal = ativos[i].precoMedio * ativos[i].quantidade + preco * quantidade;
            ativos[i].quantidade += quantidade;
            ativos[i].precoMedio = custoTotal / ativos[i].quantidade;
            ativoEncontrado = true;
            break;
        }
    }

    if (!ativoEncontrado) {
        // Adicionar novo ativo
        ativos[numAtivos].ticket = ticket;
        ativos[numAtivos].quantidade = quantidade;
        ativos[numAtivos].precoMedio = preco;
        numAtivos++;
    }
}

// Função para registrar uma venda
void registrarVenda(Ativo ativos[], int &numAtivos) {
    string ticket;
    int quantidade;
    double preco;
    bool ativoEncontrado = false;

    cout << "Digite o ticket da ação (até 6 letras): ";
    cin >> ticket;
    cout << "Digite a quantidade vendida: ";
    cin >> quantidade;
    cout << "Digite o valor do ativo no momento da venda: ";
    cin >> preco;

    // Encontrar o ativo
    for (int i = 0; i < numAtivos; ++i) {
        if (ativos[i].ticket == ticket) {
            if (ativos[i].quantidade >= quantidade) {
                ativos[i].quantidade -= quantidade;
                // Se a quantidade chegar a 0, remover o ativo
                if (ativos[i].quantidade == 0) {
                    for (int j = i; j < numAtivos - 1; ++j) {
                        ativos[j] = ativos[j + 1];
                    }
                    numAtivos--;
                }
            } else {
                cout << "Não há quantidade suficiente para a venda." << endl;
            }
            ativoEncontrado = true;
            break;
        }
    }

    if (!ativoEncontrado) {
        cout << "Ativo não encontrado." << endl;
    }
}

// Função para buscar o saldo de um ativo
void verSaldoAtivo(const Ativo ativos[], int numAtivos) {
    string ticket;
    bool ativoEncontrado = false;

    cout << "Digite o ticket da ação (até 6 letras): ";
    cin >> ticket;

    for (int i = 0; i < numAtivos; ++i) {
        if (ativos[i].ticket == ticket) {
            cout << "Ticket: " << ativos[i].ticket << endl;
            cout << "Quantidade: " << ativos[i].quantidade << endl;
            cout << "Preço Médio: " << fixed << setprecision(2) << ativos[i].precoMedio << endl;
            ativoEncontrado = true;
            break;
        }
    }

    if (!ativoEncontrado) {
        cout << "Ativo não encontrado." << endl;
    }
}

// Função para listar o patrimônio
void listarPatrimonio(const Ativo ativos[], int numAtivos) {
    cout << "Patrimônio:" << endl;
    for (int i = 0; i < numAtivos; ++i) {
        cout << "Ticket: " << ativos[i].ticket << endl;
        cout << "Quantidade: " << ativos[i].quantidade << endl;
        cout << "Preço Médio: " << fixed << setprecision(2) << ativos[i].precoMedio << endl;
    }
}

// Função para mostrar o menu e processar a escolha do usuário
void menu() {
    const int MAX_ATIVOS = 100; // Tamanho máximo da lista de ativos
    Ativo ativos[MAX_ATIVOS];
    int numAtivos = 0;
    int escolha;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Registrar compra" << endl;
        cout << "2. Registrar venda" << endl;
        cout << "3. Ver o saldo de um ativo (Busca por Ticket)" << endl;
        cout << "4. Listar Patrimonio" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                registrarCompra(ativos, numAtivos);
                break;
            case 2:
                registrarVenda(ativos, numAtivos);
                break;
            case 3:
                verSaldoAtivo(ativos, numAtivos);
                break;
            case 4:
                listarPatrimonio(ativos, numAtivos);
                break;
            case 5:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    } while (escolha != 5);
}

int main() {
    menu();
    return 0;
}
