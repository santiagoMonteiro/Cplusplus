#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int v[100005], num;

    cin >> num;
    for (int i = 0; i < num; i ++) {
        cin >> v[i];
    }
    sort(v, v + num);
    for (int i = 0; i < num; i ++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}