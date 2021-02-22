#include <iostream>

using namespace std;

int main() {
    int n, M[1005][1005], l[1005], c[1005], maior = 0, temp;

    cin >> n;
    for (int i = 0; i < n; i ++) {
        l[i] = 0;
        c[i] = 0;
        // para que eu possa somar posteriormente
        // havia lixo de memória
    }

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            cin >> M[i][j];
            l[i] += M[i][j];
        }
    }
    for (int j = 0; j < n; j ++) {
        for (int i = 0; i < n; i ++) {
            c[j] += M[i][j];
        }
    }
    // agora vamos saber qual é a melhor combinação
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            temp = l[i] + c[j] - 2*(M[i][j]);
            if (temp > maior) {
                maior = temp;
            }
        }
    }
    cout << maior << endl;

    return 0;
}