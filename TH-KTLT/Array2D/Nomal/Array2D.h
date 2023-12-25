#ifndef Array2D_h
#define Array2D_h
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void menu();
void menu2();

void Input(int**& a, int& m, int& n);
void Output(int**& a, int m, int n);
void createRandomArray2D(int**& a, int& m, int& n);

int getSumFirstUnitOdd(int**& a, int& m, int& n);
int checkPrefectNumber(int n);

void getPrefectNumberArray2D(int**& a, int& m, int& n);

int getSumAllGreater(int**& a, int& m, int& n);
int getSumRowK(int**& a, int& k, int& n);
int getSumBoundary(int** a, int& m, int& n);

int getCountNumberX(int** a, int& m, int& n, int x);
// dem 
int getEvenNumber(int**& a, int& m, int& n);
int getOddNumber(int**& a, int& m, int& n);
int getNegativeNumber(int**& a, int& m, int& n); // so am
int getPositiveNumber(int**& a, int& m, int& n);
int getPrimeNumber(int**& a, int& m, int& n);// dem cac so nguyen to

void getSumColMin(int** a, int& m, int& n);
void getRowPrefectNumberMax(int** a, int& m, int& n);

void getRowOnlyEven(int**& a, int& m, int& n);
void getNumberMostAppearTime(int** a, int& m, int& n);

void getMinPrimeArray2D(int** a, int& m, int& n);

int getMaxNumberRowK(int** a, int& m, int& n, int k);
int getMinNumberRowK(int** a, int& m, int& n, int k);

int getMaxNumberColK(int** a, int& m, int& n, int k);
int getMinNumberColK(int** a, int& m, int& n, int k);

void evenIncreaseOddDecreaseRow(int** a, int& m, int& n);
void evenIncreaseOddDecreaseCol(int** a, int& m, int& n);
void sortZicZac(int** a, int& m, int& n);

void readArray2DFile(const char* filename, int**& a, int& m, int& n);
void writeFileArray2D(const char* filename, int** a, int& m, int& n);
void deleteRow(int** a, int& m, int& n, int k);
void deleteCol(int** a, int& m, int& n, int k);
void deleteRowWithK(int** a, int& m, int& n, int k);
void deleteColWithK(int** a, int& m, int& n, int k);
void swapRow(int** a, int& m, int& n, int row1, int row2);
void swapCol(int** a, int& m, int& n, int col1, int col2);

void deleteArray(int** a, int m, int n);

#endif 
