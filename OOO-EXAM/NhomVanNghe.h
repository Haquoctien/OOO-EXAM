#pragma once
#include "Nhom.h"
class NhomVanNghe :
	public Nhom
{
private:
	int soTheLoai;
	int soGiaiThuong;
public:
	NhomVanNghe();
	~NhomVanNghe();
	void nhap();
	void xuat();
	float tinhDiem();
	bool xepLoai();
};

