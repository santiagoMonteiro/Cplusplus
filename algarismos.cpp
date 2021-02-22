#include <iostream>
using namespace std;

int main() {
    int num, v[10];
    string conjunto;
    
    for (int i = 0; i < 10; i ++) {
        v[i] = 0;
    }

    cin >> num;
    for (int i = 0; i < num; i ++) {
        cin >> conjunto;
        for (int j = 0; j < conjunto.size(); j ++) {
            if (conjunto[j] == '0')
                v[0] ++;
            else if (conjunto[j] == '1')
                v[1] ++;
            else if (conjunto[j] == '2')
                v[2] ++;
            else if (conjunto[j] == '3')
                v[3] ++;
            else if (conjunto[j] == '4')
                v[4] ++;
            else if (conjunto[j] == '5')
                v[5] ++;
            else if (conjunto[j] == '6')
                v[6] ++;
            else if (conjunto[j] == '7')
                v[7] ++;
            else if (conjunto[j] == '8')
                v[8] ++;
            else if (conjunto[j] == '9')
                v[9] ++;
        }
    }
    
    for (int i = 0; i < 10; i ++) {
        cout << i << " - " << v[i] << endl;
    }

    return 0;
}