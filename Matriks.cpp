#include <iostream>
using namespace std;

int main(){
	int M[3][3];
	int M1[3][3];
	int M2[3][3];
	
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << "M1 : "<< i <<" m1 : " << j << " = ";
			cin >> M1[i][j];
			cout << "M2 : "<< i <<" m2 : " << j <<" = ";
			cin >> M2[i][j];
			M[i][j] = M1[i][j] + M2[i][j];
		}
	}	
		// M1
	cout << endl << endl;
	cout << "M1	" << endl;
	cout  << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << M1[i][j] << " ";
		}
		cout << endl;
	}
	
		// M2
	cout << endl << endl;
	cout << "M2	" << endl;
	cout  << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << M2[i][j] << " ";
		}
		cout << endl;
	}
		// M
	cout << endl << endl;
	cout << "M	" << endl;
	cout  << endl;

	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	
}
