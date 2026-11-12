#include <iostream>
using namespace std;
int main (){
	int pin, percobaan = 0;
	int pinAsli = 9876;
	
	while (percobaan < 3) {
		cout << "Masukan PIN: ";
		cin >> pin;
		
		if (pin == pinAsli) {
			cout << "Login Berhasil" << endl;
			return 0;
		} else {
			percobaan++;
			cout << "PIN salah!" << endl;
			
		}
	}
	cout << "Kartu terblokir"<< endl;
	
	return 0;
}
