#include<iostream>
#include<string>
using namespace std;
string nama, tempat_lahir;
int umur;
float berat_badan;

int main()
{
	cout << "Masukan Nama: ";
	getline (cin, nama);
	cout << "Masukan Umur: ";
	cin >> umur;
	cout << "Masukan Tempat Lahir: ";
	cin >> tempat_lahir;
	cout << "Masukan Berat Badan: ";
	cin >> berat_badan;
	
	cout << "\nNama Anda " << nama << "\n";
	cout << "Umur Anda " << umur << "\n";
	cout << "Tempat Lahir " << tempat_lahir << "\n";
	cout << "Berat Badan " << berat_badan;
}






