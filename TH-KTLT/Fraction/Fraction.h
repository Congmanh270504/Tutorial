#ifndef Fraction_h
#define Fraction_h

#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
struct PhanSo
{
	int tu,mau;
};
typedef PhanSo PS;
void menu();
void setFraction(PS& a);// Nhap ps
void getFraction(PS a);
void createRandomArrayFraction(PS*&a, int &n);
void soLuongPhanTu(int& n);

void getNumberFile(FILE *fi, PS &a);
void readFile(const char *filename, PS *&a, int &n);

void Input(PS* &a,int &n);
void Output(PS* a,int n);

void getNumberatorGreaterDenomiator(PS* a, int& n);

void getEasyFrac(PS &a);
void updateEasyFrac(PS *&a, int &n);
void getTimeFrac(PS* &a, int &n);
int convertFracToFloat(PS &a);
void findMaxNumber(PS *&a, int n);

#endif // !

