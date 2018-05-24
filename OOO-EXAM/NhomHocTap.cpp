#include "NhomHocTap.h"



NhomHocTap::NhomHocTap()
{
	soMonHoc = soHB = 0;
}


NhomHocTap::~NhomHocTap()
{
}

void NhomHocTap::nhap()
{
	Nhom::nhap();
	cout << "Nhap so hoc bong: ";
	cin >> soHB;
	cout << "Nhap so mon hoc: ";
	cin >> soMonHoc;
	cin.ignore();
}

void NhomHocTap::xuat()
{
	Nhom::xuat();
	cout << "\So hoc bong: " << soHB << endl;
	cout << "\So mon hoc: " << soMonHoc << endl;
	cout << "\tDiem: " << tinhDiem() << endl;
}

float NhomHocTap::tinhDiem()
{
	return Nhom::tinhDiem() + (float(soMonHoc) / 10) * 50 + (float(soHB) / soTV) * 20;
}

bool NhomHocTap::xepLoai()
{
	return soHB / soTV >= 80;
}
