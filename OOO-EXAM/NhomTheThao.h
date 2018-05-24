#pragma once
#include "Nhom.h"
class NhomTheThao :
	public Nhom
{
private:
	int soMonTT;
	int soHuyChuong;
	float tiLeThang;
public:
	NhomTheThao();
	~NhomTheThao();
	void nhap();
	void xuat();
	float tinhDiem();
	bool xepLoai();
};

