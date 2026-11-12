#include <iostream>
using namespace std;

int main() {
    int suhu;
    
    cout << "======SISTEM MONITORING SUHU======"<< endl;
    cout << "Masukan suhu: ";
    cin >> suhu;
    
    while (suhu!=-1) {
    	cout << "SUhu terdeteksi: " << suhu << " drajat C" <<endl;
    	
    	cout << "Masukan suhu";
    	cin >> suhu;
	}
	
	cout << "Sistem dimatikan"<< endl;
	
    return 0;
}
