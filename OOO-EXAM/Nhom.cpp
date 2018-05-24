#include "Nhom.h"



Nhom::Nhom()
{
	ten = "Chua nhap";
	soHD = soTV = TGHD = 0;
}


Nhom::~Nhom()
{
}

void Nhom::nhap()
{
	cout << "Nhap ten nhom: ";
	getline(cin, ten);
	do {
		cout << "Nhap so TV: ";
		cin >> soTV;
	} while (soTV <= 0);
	do {
		cout << "Nhap so HD: ";
		cin >> soHD;
	} while (soHD <= 0);
	do {
		cout << "Nhap thoi gian hoat dong trong nam: ";
		cin >> TGHD;
	} while (TGHD < 0 || TGHD > 12);
	cin.ignore();
}

void Nhom::xuat()
{
	cout << "Thong tin nhom: " << endl;
	cout << "\tTen: " << ten << endl;
	cout << "\tSo TV: " << soTV << endl;
	cout << "\tSo HD: " << soHD << endl;
	cout << "\tThoi gian hoat dong: " << TGHD << " thang" << endl;
}

float Nhom::tinhDiem()
{
	return (float(soHD) / TGHD)*30;
}
