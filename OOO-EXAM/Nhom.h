#pragma once
#include<iostream>
#include <string>
#include <cmath>
using namespace std;
class Nhom
{
protected:
	string ten;
	int soTV, soHD;
	int TGHD;
public:
	Nhom();
	virtual ~Nhom();
	virtual void nhap();
	virtual void xuat();
	virtual float tinhDiem();
	virtual bool xepLoai()=0;
	string getTen()
	{
		return ten;
	}
	int getSoHD() {
		return soHD;
	}
	int getSoTV()
	{
		return soTV;
	}
};

