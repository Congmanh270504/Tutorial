#ifndef Array_h
#define Array_h

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void menu();

void elementArray(int& n);
void createRandomArray(int*& a, int& n);
void createRandomArrayEven(int*& a, int& n);
void readFileArray(const char* filename, int*& a, int& n);
void writeFileArray(const char* filename, int*& a, int& n);

void LinearSearch(int*& a, int& n, int x);
void interchangeSortIncrease(int*& a, int& n);
void interchangeSortDecrease(int*& a, int& n);
int binarySortSearchRecursive(int*& a, int left, int right, int& n, int x);// binary De quy

void getPrimeLessNumberX(int*& a, int& n, int x);

int getSumFirstDigit(int*& a, int& n);
void getNumberAppeartime(int*& a, int& n);
void SortEvenIncrease(int*& a, int& n);
void SortOddDecrease(int*& a, int& n);

void findLongestDecrease(int*& a, int& n);
void findSecondMin(int*& a, int& n);
void find2NumberXY(int*& a, int& n, int x);

void justSortEvenIncrease(int*& a, int& n);
void sortOddFistEvenSecond(int*& a, int& n);


void output(int* a, int &n);
#endif // Array_Buoi2_h
