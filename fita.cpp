#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, v[10005], menorDistancia, distancia;

    cin >> n;
	
	for (int i = 0; i < n; i ++) {
		cin >> v[i];
	}

	for (int i = 0; i < n; i ++) {
		menorDistancia = n;
        for (int j = 0; j < n; j ++) {
            if (v[j] == 0) {
                distancia = j - i;
                if ((abs(distancia)) < menorDistancia) {
                    menorDistancia = abs(distancia);
                }
            }
        }
        if (menorDistancia > 9) {
            menorDistancia = 9;
        }
        cout << menorDistancia << " ";
	}
    return 0;
}