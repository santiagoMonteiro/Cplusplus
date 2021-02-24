#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num, difs = 0, v[100005], v2[100005], vd[100005];

    cin >> num;
    for (int i = 0; i < num; i ++) {
        cin >> v[i];
    }
    for (int i = 0; i < num; i ++) {
        v2[i] = v[i];
    }
    sort(v, v + num);
    for (int i = 0; i < num; i ++) {
        if (v[i] != v2[i]) {
            vd[difs] = v2[i];
            difs ++;
        }
    }
    cout << difs << endl;
    sort(vd, vd + difs);
    for (int i = 0; i < difs; i ++) {
        cout << vd[i] << " ";
    }
    cout << endl;
    
    return 0;
}
