#include <iostream>
using namespace std ;
int main () {
	float Fahrenhait ;
	cout << "Masukan suhu Fahrenhait = ";
	cin >> Fahrenhait ;
	float Hasil = (Fahrenhait-32)*5/9;

	cout<<"Hasil Akhir:"<<Hasil<<"C";
	return 0;
}
