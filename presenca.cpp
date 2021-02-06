#include <bits/stdc++.h>
using namespace std;

// Algoritmo quadrático

int main() {
    int n, v[100005], qt = 0, actual;
    bool apareceu;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> actual;
        apareceu = false;
        for (int j = 0; j < qt; j ++) {
            if (actual == v[j]){
                apareceu = true;
                break;
            } 
        }
        if (apareceu == false){
            v[qt] = actual;
            qt++;
        }
    }
    
    cout << qt << endl;
    return 0;
}