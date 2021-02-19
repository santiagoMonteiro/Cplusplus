#include <bits/stdc++.h>
using namespace std;

int main(){
	int quant, num, best, starter, points_starter = 0, points = 0;
	
	cin >> quant;
	for (int i = 0; i < quant; i++) {
		cin >> num;
		if (i == 0) {
			best = num;
			starter = num;
			points++;
            points_starter ++;
		} else {
			if (num == starter) {
				points_starter ++;
				if (points_starter > points) {
					best = starter;
					points = points_starter;
				}
			} else {
				points_starter = 1;
				starter = num;
			}
		}
	}
	
	cout << points << endl;
	
	return 0;
}