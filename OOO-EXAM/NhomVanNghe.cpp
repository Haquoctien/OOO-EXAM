#include "NhomVanNghe.h"



NhomVanNghe::NhomVanNghe()
{
	soGiaiThuong = soTheLoai = 0;
}


NhomVanNghe::~NhomVanNghe()
{
}

void NhomVanNghe::nhap()
{
	Nhom::nhap();
	cout << "Nhap so giai thuong: ";
	cin >> soGiaiThuong;
	cout << "Nhap so the loai: ";
	cin >> soTheLoai;
	cin.ignore();
}

void NhomVanNghe::xuat()
{
	Nhom::xuat();
	cout << "\tSo giai thuong: " << soGiaiThuong << endl;
	cout << "\tSo the loai: " << soTheLoai << endl;
	cout << "\tDiem: " << tinhDiem() << endl;
}

float NhomVanNghe::tinhDiem()
{
	return Nhom::tinhDiem() + (float(soTheLoai) / 20) * 40 + (float(soGiaiThuong * 3) / TGHD) * 30;
}

bool NhomVanNghe::xepLoai()
{
	return soGiaiThuong >= ceil(float(TGHD) / 3);
}
