#include <iostream>
using namespace std;
int main(){
	int tabungan, total = 0;
	
	while (total <= 1000000){
		cout << "Masukan saldo anda hari ini: Rp ";
		cin >> tabungan;
		
		total += tabungan;
		
		cout << "Total tabungan: Rp" << total << endl;		
	}
	cout << "Target tercapai :)";
	
	return 0;
}
