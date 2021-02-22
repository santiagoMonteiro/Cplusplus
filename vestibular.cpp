#include <iostream>
using namespace std;

int main() {
    int num, acertos = 0;
    string gabarito, tentativa;
    
    cin >> num;
    cin >> gabarito;
    cin >> tentativa;

    for (int i = 0; i < num; i ++) {
        if (gabarito[i] == tentativa[i]) {
            acertos ++;
        }
    }
    cout << acertos << endl;
    return 0;
}