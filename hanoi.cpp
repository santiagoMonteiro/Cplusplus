#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int hanoi(int num) {
    return (pow(2, num) - 1);
}

int main() {
    int num, i =0;
    bool stop = false;

    while (! stop) {
        cin >> num;
        if (num == 0) {
            stop = true;
        } else {
            i ++;
            cout << "Teste " << i << endl;
            cout << fixed << setprecision(0) << hanoi(num) << endl;
            cout << endl;
        }
        
    }
    return 0;
}