#include <iostream>
using namespace std;
const int MAX = 50;

struct ToaDo {
	float x, y;
};

struct Diem {
	ToaDo a;
	ToaDo b;


};

struct DiemBatKy {
	ToaDo c;
	ToaDo d;
};

void NhapTD(ToaDo& a) {
	cout << "\n Nhap Toa Do X:"; cin >> a.x;
	cout << "\n Nhap Toa Do Y: "; cin >> a.y;

}

void XuatTD(ToaDo a) {
	cout << " ( " << a.x << " , " << a.y << " ) ";
}
void NhapDiem(Diem& d) {
	cout << "     " << " DIEM A: " << endl;
	NhapTD(d.a);
	cout << "     " << " DIEM B: " << endl;
	NhapTD(d.b);

}

void XuatDiem(Diem d) {
	cout << "\n Toa Do Diem A La: ";
	XuatTD(d.a);
	cout << "\n Toa Do Diem B La: ";
	XuatTD(d.b);

}

void NhapDiemBatKy(DiemBatKy& bk) {
	cout << "     " << " DIEM A: " << endl;
	NhapTD(bk.c);
	cout << "     " << " DIEM B: " << endl;
	NhapTD(bk.d);

}

void XuatDiemBatKy(DiemBatKy bk) {
	cout << "\n Toa Do Diem A La: ";
	XuatTD(bk.c);
	cout << "\n Toa Do Diem B La: ";
	XuatTD(bk.d);

}


int main() {
	Diem d;
	DiemBatKy bk;
	NhapDiem(d);
	XuatDiem(d);
	cout << "\n";
	NhapDiemBatKy(bk);
	XuatDiemBatKy(bk);
	return 0;
}