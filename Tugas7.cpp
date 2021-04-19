#include <iostream>
using namespace std;

int main(){
	int x, z;
	cout << "Inputkan Nilai x : ";
	cin >> x;getchar();
	cout << "Inputkan Nilai z : ";
	cin >> z;getchar();
	if(x%2 == 1 && z%2 == 1){
		cout << "Semua Bilangan Ganjil" << endl;
	}else if(x%2 == 0 && z%2 == 0){
		cout << "Semua Bilangan Genap" << endl;
	}else if(x%2 == 1 && z%2 == 0){
		cout << "x ganjil dan z genap" << endl;
	}else{
		cout << "x genap dan z ganjil" << endl;
	}
	return 0;
}
