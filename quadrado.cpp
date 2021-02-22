#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, A[15][15], soma_linhas[15], soma_colunas[15];
    int soma_principal = 0, soma_secundaria = 0, teste_secundario, soma1, soma2;
    bool magico = true;

    cin >> n;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            cin >> A[i][j];
        }
    }
    // soma das linhas
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            soma_linhas[i] += A[i][j];
        }
    }
    // soma das colunas 
    for (int j = 0; j < n; j ++) {
        for (int i = 0; i < n; i ++) {
            soma_colunas[j] += A[i][j]; 
        }
    }
    // soma da diagonal principal
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            if (i == j) {
                soma_principal += A[i][j];
            } 
        }
    }
    // soma da diagonal secundária
    teste_secundario = n - 1;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            if (i + j == teste_secundario) {
                soma_secundaria += A[i][j];
            } 
        }
    }

    // verificações
    // linhas
    soma1 = soma_linhas[0];
    for (int i = 0; i < n; i ++) {
        if (soma_linhas[i] != soma1) {
            magico = false;
        }
    }
    if (magico) {
        // verificação das colunas
        soma2 = soma_colunas[0];
        for (int i = 0; i < n; i ++) {
            if (soma_colunas[i] != soma2) {
                magico = false;
            }
        }
    }
    if (magico) {
        if (soma_principal != soma_secundaria) {
            magico = false;
        } else if (soma_principal != soma1) {
            magico = false;
        } else if (soma_principal != soma2) {
            magico = false;
        }
    }

    if (magico) {
        cout << soma1 << endl;
    } else {
        cout << (-1) << endl;
    }
    return 0;
}