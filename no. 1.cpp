#include<conio.h>
#include<iostream>
using namespace std;

int main(){
	cout << "Nama	: Fina Maulidiyah Nabila" << endl;
	cout << "NIM	: 19051397034" << endl;
	cout << "Prodi	: D4 Manajemen Informatika 2019A" << endl;
	cout << "---------------------------------------------" << endl;
	cout << endl;
	cout << "PEMROGRAMAN BERBASIS OBYEK (PBO)" << endl;
	cout << endl;
	cout << "PROGRAM INI UNTUK MENENTUKAN APAKAH SEBUAH BILANGAN TERMASUK KE DALAM KRITERIA BERIKUT :" << endl;
	cout << "1. Positif Genap" << endl;
	cout << "2. Negatif Genap" << endl;
	cout << "3. Positif Ganjil" << endl;
	cout << "4. Negatif Ganjil" << endl;
	
	long bil;
	cout << "Masukan Bilangan :";
	cin >> bil;

	if (bil == 0) {
		cout << "Bilangan " << bil << " adalah Bilangan Nol";
	}
	else  if ( bil > 0){
	if (bil % 2 == 0) {
		cout << "Bilangan " << bil << " adalah Bilangan Genap Positif";
	}
	else{
		cout << "Bilangan " << bil << " adalah Bilangan Ganjil Positif";
	}
	}
	else{
	if (bil % 2 == 0) {
		cout << "Bilangan " << bil << " adalah Bilangan Genap Negatif";
	}
	else{
	cout << "Bilangan" << bil << " adalah Bilangan Ganjil Negatif";
	}
	}

getch();
}
