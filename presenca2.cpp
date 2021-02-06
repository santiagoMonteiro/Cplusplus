#include <bits/stdc++.h>
using namespace std;

// Algoritmo Linear

const int MAX = 1000009;
bool v[MAX];

int main() {
    
    for(int i = 0; i < MAX; i++) {
        v[i] = false;
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int element;
        cin >> element;
        v[element] = true;
    }

    int qt = 0;
    for (int i = 0; i < MAX; i++) {
        if (v[i] == true) {
            qt++;
        }
    }

    cout << qt << endl;
}