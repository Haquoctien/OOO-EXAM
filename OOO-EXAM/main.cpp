#include "LopHoc.h"


int main()
{
	LopHoc lop;
	// nhap lop
	lop.nhap();
	// xuat ten va xep loai
	lop.xuatTenvXepLoai();
	// ten nhom co dong thanh vien nhat
	cout << "Nhom co thanh vien dong nhat: " << lop.nhomDongNhat()->getTen() << endl;
	// ten nhom co diem danh gia cao nhat
	cout << "Nhom co danh gia cao nhat: " << lop.nhomDiemCaoNhat()->getTen() << endl;
	// nhom van nghe nhieu hoat dong nhat
	// xuat ra tong so hoat dong cua nhom
	cout << "Tong so hoat dong cua nhom: " << lop.getTongHD() << endl;
	// loai hoat dong co nhieu nhom tham gia nhat
	// ket qua danh gia lop
	if (lop.danhGia())
		cout << "Ket qua danh gia lop:  TOT" << endl;
	else
		cout << "Ket qua danh gai lop: KHONG TOT" << endl;
	cout << "Press any keky to continue...";
	getchar();
	return 0;
}