#pragma once
#include "Nhom.h"
class NhomHocTap :
	public Nhom
{
private:
	int soMonHoc;
	int soHB;
public:
	NhomHocTap();
	~NhomHocTap();
	void nhap();
	void xuat();
	float tinhDiem();
	bool xepLoai();
};

