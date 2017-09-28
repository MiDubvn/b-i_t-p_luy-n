#include<iostream>
#include<conio.h>

using namespace std;

struct SinhVien
{
	int MSSV;
	char HoTen[100];
	float Toan, Ly, Hoa;
};
void NhapMangCacSinhVien(SinhVien *MangSinhVien, int &SoLuongSinhVien)
{
	cout << "Can Nhap Bao Nhieu Sinh Vien: " << endl;
	int SoLuong = 0;
	cin >> SoLuong;
	for (int i = SoLuongSinhVien; i < (SoLuongSinhVien + SoLuong); i++) {
		cout << "Nhap MSSV thu: " << i << endl;
		cin >> (MangSinhVien + i)->MSSV;
		cout << "Nhap Ho Va Ten: " << i << endl;
		cin >> (MangSinhVien + i)->HoTen;
		cout << "nhap Diem Toan: " << i << endl;
		cin >> (MangSinhVien + i)->Toan;
		cout << "nhap Diem Ly: " << i<<endl;
		cin >> (MangSinhVien + i)->Hoa;
	}
	SoLuongSinhVien += SoLuong;

}
void NhapTuFile(SinhVien*MangSinhVien, int&SoLuongSinhVien) {
	delete MangSinhVien;
	MangSinhVien = new SinhVien[1000];
	char TenFile[100] = "input.txt";
	//cout << "Nhap Ten File: " << endl;
	//cin >> TenFile;
	FILE *file;
	fopen_s(&file, TenFile, "rt");
	SoLuongSinhVien = 0;
	if (file != NULL) {
		while (!feof(file)) {
			if (fscanf_s(file, "%s\t%d\t%f\t%f\t%f\n",&MangSinhVien[SoLuongSinhVien].HoTen,&(MangSinhVien + SoLuongSinhVien)->MSSV,&(MangSinhVien + SoLuongSinhVien)->Toan,&(MangSinhVien + SoLuongSinhVien)->Ly,&(MangSinhVien + SoLuongSinhVien)->Hoa))
			SoLuongSinhVien++;
		}
		fclose(file);
	}
}

void main() {
	int SoLuong = 0;
	SinhVien *DSSV = new SinhVien;
	NhapTuFile(DSSV, SoLuong);
}