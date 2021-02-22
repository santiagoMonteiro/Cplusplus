#include <iostream>
using namespace std;

int main() {
    string risada, normal, inverso;
    bool igual = true;
    
    cin >> risada;
    for (int i = 0; i < risada.size(); i ++) {
        if (risada[i] == 'a')
            normal += 'a';
        else if (risada[i] == 'e')
            normal += 'e';
        else if (risada[i] == 'i')
            normal += 'i';
        else if (risada[i] == 'o')
            normal += 'o';
        else if (risada[i] == 'u')
            normal += 'u';
        }
    for (int i = risada.size() - 1; i >= 0; i --) {
        if (risada[i] == 'a')
            inverso += 'a';
        else if (risada[i] == 'e')
            inverso += 'e';
        else if (risada[i] == 'i')
            inverso += 'i';
        else if (risada[i] == 'o')
            inverso += 'o';
        else if (risada[i] == 'u')
            inverso += 'u';
    }
    for (int i = 0; i < normal.size(); i ++) {
        if (normal[i] != inverso[i]) {
            igual = false;
        }
    }
    if (igual) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }    

    return 0;
}