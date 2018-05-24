#include "LopHoc.h"



LopHoc::LopHoc()
{
	dsNhom = NULL;
	soSV = soNhom = soNhomHoctap = soNhomTheThao = soNhomVanNghe = tongHD = 0;
}


LopHoc::~LopHoc()
{
	cout << "Nhap lop: " << endl;
	for (int i = 0; i < soNhom; i++)
		delete dsNhom[i];
	delete[] dsNhom;
}

void LopHoc::nhap()
{
	cout << "Nhap so sinh vien: ";
	cin >> soSV;
	cout << "Nhap so nhom : ";
	cin >> soNhom;
	dsNhom = new Nhom*[soNhom];
	for (int i = 0, choice = 0; i < soNhom; i++)
	{
		cout << "\tNhap nhom thu #" << i + 1 << ":" << endl;
		cout << "Lua chon: 0. nhom hoc tap; 1. nhom van nghe; 2. nhom the thao\nchon: ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 0:
			dsNhom[i] = new NhomHocTap;
			soNhomHoctap++;
			break;
		case 1:
			dsNhom[i] = new NhomVanNghe;
			soNhomVanNghe++;
			break;
		case 2:
			dsNhom[i] = new NhomTheThao;
			soNhomTheThao++;
			break;
		default:
			dsNhom[i] = new NhomHocTap;
			soNhomHoctap++;
			break;
		}
		dsNhom[i]->nhap();
	}
}

void LopHoc::xuat()
{
	for (int i = 0; i < soNhom; i++)
	{
		cout << "Nhom thu #" << i + 1 << endl;
		dsNhom[i]->xuat();
		cout << endl;
	}
	cout << endl;
}

bool LopHoc::danhGia()
{
	bool tieuChi1 = soNhomHoctap >= 1 && soNhomTheThao >= 1 && soNhomVanNghe >= 1;
	float DTB = 0;
	for (int i = 0; i < soNhom; i++)
		DTB += dsNhom[i]->tinhDiem();
	DTB /= soNhom;
	bool tieuChi2 = DTB >= 80;
	float tiLeKhongDat = 0;
	for (int i = 0; i < soNhom; i++)
		if (dsNhom[i]->xepLoai() == false)
			tiLeKhongDat++;
	tiLeKhongDat /= soNhom;
	bool tieuChi3 = tiLeKhongDat <= 0.2;
	return tieuChi1 && tieuChi2 && tieuChi3;
}

int LopHoc::getTongHD()
{
	for (int i = 0; i < soNhom; i++)
		tongHD += dsNhom[i]->getSoHD();
	return tongHD;
}

Nhom * LopHoc::nhomDongNhat()
{
	Nhom * max= dsNhom[0];
	for (int i = 1; i < soNhom; i++)
		if (max->getSoTV() < dsNhom[i]->getSoTV())
			max = dsNhom[i];
	return max;
}

void LopHoc::xuatTenvXepLoai()
{
	for (int i = 0; i < soNhom; i++)
	{
		cout << "Nhom thu #" << i + 1 << endl;
		cout << "Ten nhom : " << dsNhom[i]->getTen() << endl;
		if (dsNhom[i]->xepLoai())
			cout << "Xep loai: dat" << endl;
		else
			cout << "Xep loai: khong dat" << endl;
		cout << endl;
	}
	cout << endl;
}

Nhom * LopHoc::nhomDiemCaoNhat()
{
	Nhom * max = dsNhom[0];
	for (int i = 1; i < soNhom; i++)
		if (max->tinhDiem() < dsNhom[i]->tinhDiem())
			max = dsNhom[i];
	return max;
}
