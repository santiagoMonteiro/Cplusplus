#include <iostream>

using namespace std;

bool eh_primo(int x){
	//Seu código aqui.
    int div = 0;
    
    for (int i = 1; i <= x; i ++) {
        if (x % i == 0) {
            div ++;
        }
    }
    if (div == 2) {
        return true;
    }
    return false;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
