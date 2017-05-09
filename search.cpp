#include <iostream>

using namespace std;

int main(){
	int x[10],cari, hitung;
	//bool ketemu;
	int Data = 1;
	
	for(int i=0; i < 10; i++){
		cout << "Data ke - " << Data << " index ke - " << i << " : ";
		cin >> x[i];
		Data++;
	}
	
	cout << "\nMasukkan Data yang dicari : ";
	cin >> cari;
	hitung=0;
	
	 for (int i=0; i<10; i++){
            if(cari == x[i]){
		cout << "Data Ditemukan" << endl;
                cout << "Data " << cari << " ada pada index ke - " << i << endl;
                hitung ++;
                break;
            }
     }
        if (hitung == 0){
		cout << "Data tidak Ditemukan " << endl;
            	cout << "angka " << cari << " tidak ada pada array";
        }
	return 0;
}
