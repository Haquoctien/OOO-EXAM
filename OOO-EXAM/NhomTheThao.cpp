#include "NhomTheThao.h"



NhomTheThao::NhomTheThao()
{
	soHuyChuong = soMonTT = tiLeThang = 0;
}


NhomTheThao::~NhomTheThao()
{
}

void NhomTheThao::nhap()
{
	Nhom::nhap();
	cout << "Nhap so huy chuong: ";
	cin >> soHuyChuong;
	cout << "Nhap so mon the thao: ";
	cin >> soMonTT;
	float a;
	int b;
	cout << "Nhap so tran thi dau: ";
	cin >> b;
	cout << "Nhap so tran thang: ";
	cin >> a;
	cin.ignore();
	tiLeThang = a / b;
}

void NhomTheThao::xuat()
{
	Nhom::xuat();
	cout << "\tSo huy chuong: " << soHuyChuong << endl;
	cout << "\tSo mon TT: " << soMonTT << endl;
	cout << "\tTi le thang: " << tiLeThang << endl;
	cout << "\tDiem: " << tinhDiem() << endl;
}

float NhomTheThao::tinhDiem()
{
	return Nhom::tinhDiem() + (float(soMonTT) / 15) * 20 + (float(soHuyChuong * 2) / TGHD) * 30 + tiLeThang * 20;
}

bool NhomTheThao::xepLoai()
{
	return tiLeThang >= 0.75;
}
