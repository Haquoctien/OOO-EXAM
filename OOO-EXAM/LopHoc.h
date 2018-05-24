#pragma once
#include "NhomHocTap.h"
#include "NhomTheThao.h"
#include "NhomVanNghe.h"
class LopHoc
{
private:
	int soSV;
	int soNhom;
	Nhom **dsNhom;
	unsigned soNhomHoctap, soNhomVanNghe, soNhomTheThao, tongHD;
public:
	LopHoc();
	~LopHoc();
	void nhap();
	void xuat();
	bool danhGia();
	bool getTongHD();
	Nhom* nhomDongNhat();
	void xuatTenvXepLoai();
	Nhom* nhomDiemCaoNhat();
};

