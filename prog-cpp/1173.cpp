/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 1173 - Array Fill I
 * Autor     : Pedro Felipe
 * LIAC      : Le um inteiro, guarda em N[0] e preenche N[1] a N[9] com o dobro
 *             da posicao anterior. Imprime as dez posicoes.
 */
#include <iostream>
#include <vector>
using namespace std;

void preencher(vector<int> &n, int primeiro) {
    int i;

    n[0] = primeiro;
    for (i = 1; i < 10; i++) {
        n[i] = n[i - 1] * 2;
    }
}

void mostrar(vector<int> &n) {
    int i, qtd = n.size();

    for (i = 0; i < qtd; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
}

int main() {
    vector<int> n(10); // Cria o vetor já com 10 posições reservadas
    int primeiro;

    cin >> primeiro;
    preencher(n, primeiro);
    mostrar(n);

    return 0;
}