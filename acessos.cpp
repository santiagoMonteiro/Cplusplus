#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, view, finalDays, sum = 0, i = 0, days = 0;
	bool passou = false;
	
	cin >> n;
	while (i < n) {
		cin >> view;
		sum = sum + view;
		days = days + 1;
		i = i + 1;
		if (sum >= 1000000 and !passou) {
			finalDays = days;
			passou = true;
		}
	}
	cout << finalDays << endl;
	return 0;
}