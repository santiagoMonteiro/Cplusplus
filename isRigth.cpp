#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, in = 0, out = 0;
	cin >> n;
	for (int i = 0; i <= n ; i++){
        string conteudo;
		getline(cin, conteudo);
        for (int j = 0; j < conteudo.length(); j ++){
            if (conteudo[j] == '{')
			    in++;
		    else if (conteudo[j] == '}')
			    out++;
        }
    }
	if (in == out)
		cout << 'S' << endl;
	else 
		cout << 'N' << endl;

	return 0;
}