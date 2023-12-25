#ifndef Mang1Chieu_SV_h
#define Mang1Chieu_SV_h

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
struct SinhVien
{
	char MSSV[15];
	char ho[10], tenlot[15], ten[11];
	float diemTB;
};
typedef SinhVien ItemType;
void menu();

void deleteEndLine(char s[]);
void fixScanf();

void nhapSoLuongSv(int &n);

void nhapTTSV(SinhVien &a);
void xuatTTSV(SinhVien a);

void docTTSV(FILE *fi, SinhVien &a);// cho parameter la fi=file input
void ghiTTSV(FILE *fo, SinhVien &a);// fo=file output


void nhapMang1C_SV(SinhVien *&a, int &n);
void xuatMang1Chieu_SV(SinhVien *a, int &n);

void docMang1ChieuSoNguyen(const char*filename, SinhVien *&a, int &n);
void ghiMang1ChieuSoNguyen(const char*filename, SinhVien *&a, int &n);

//BT Buoi 2 
int findMSSV_InterchangeSort(SinhVien *a, int &n, char *pMSSV);
int findName_InterchangeSort(SinhVien *a, int &n, char *pten);
int findName_BinarySort(SinhVien *a, int &n, char *pten);

void intertchangeSortWithName(SinhVien *&a, int &n);


void swap(SinhVien &a, SinhVien &b);


#endif // Mang1Chieu_SV_h
