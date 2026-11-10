/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 1548 - Fila do Recreio
 * Autor     : Pedro Felipe
 * LIAC      : Lê o número de casos e os alunos de cada caso. Conta quantos 
 *             alunos não precisaram trocar de posição após ordenar as notas.
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int na_mesma_posicao(vector<int> &fila) {
    vector<int> ordenada = fila;
    int i, iguais = 0, qtd = fila.size();

    sort(ordenada.begin(), ordenada.end(), greater<int>());

    for (i = 0; i < qtd; i++) {
        if (fila[i] == ordenada[i]) {
            iguais++;
        }
    }
    return iguais;
}

int main() {
    vector<int> fila;
    int n, m, nota, caso, i;

    cin >> n;
    for (caso = 0; caso < n; caso++) {
        fila.clear();
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> nota;
            fila.push_back(nota);
        }
        cout << na_mesma_posicao(fila) << endl;
    }

    return 0;
}