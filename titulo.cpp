#include <iostream>

using namespace std;

string title(string F){
	//Seu código aqui
    string mod = F;
    int ch;
    
    ch = (int) mod[0];
    if (ch >= 97 and ch <= 122) {
        ch -= 32;
        mod[0] = (char) (ch);
    }
    for (int i = 1; i < mod.size(); i ++) {
        ch = (int) (mod[i]);
        if (mod[i - 1] == ' ') { // 
            if (ch >= 97 and ch <= 122) {
                ch -= 32;
            }
        }
        else if (ch >= 65 and ch <= 90) {
            ch += 32;
        }
        mod[i] = (char)(ch);
    }
    return mod;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
