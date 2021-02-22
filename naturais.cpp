#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, v[10005], natural = 0, points = 0;
	
	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> v[i];
	}
	
	for (int i = 0; i < n; i ++) {
		if (v[i] == 1) {
			points = 1;	
		} else if (points == 1 and v[i] == 0) {
			points = 2;
		} else if (points == 2 and v[i] == 0) {
			natural ++;
			points = 0;
		} else {
            points = 0;
        }
	}
	
	cout << natural << endl;
	return 0;
}