#include <bits/stdc++.h>
using namespace std;

int fat(int n){
    if (n == 0)
        return 1;
    else
        return n * fat(n-1);
}

int main() {
    int numero;
    cin >> numero;
    cout << fat(numero) << endl;

    return 0;
}