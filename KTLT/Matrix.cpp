//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//#include<string.h>
//#define MAXROW 10
//#define MAXCOL 10
//int checkFistOfOddNumber(int x) {
//	while (x > 9)
//	{
//		x /= 10;
//	}
//	if (x % 2 == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int sumOfFistOddNumber(int a[][MAXCOL], int n, int m)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			if (checkFistOfOddNumber(a[i][j]) == 1)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int sreachMatrix(int a[][MAXCOL], int n, int m, int x)
//{
//	int index = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			if (x == a[i][j])
//			{
//				printf("a[%d][%d]", i, j);
//			}
//		}
//	}
//	return 1;
//}
//int prefectNumber(int x)
//{
//	int sum = 0;
//	for (int i = 1; i < x - 1; i++)
//	{
//		if (x % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == x)
//	{
//		return 1;
//	}
//	return 0;
//}
//int printPerfectNumber(int a[][MAXCOL], int n, int m)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			if (prefectNumber(a[i][j]) == 1)
//				printf(" \t%d", a[i][j]);
//		}
//	}
//	return 1;
//}
//int sumGreaterThanAbs(int a[][MAXCOL], int n, int m)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m - 1; j++) {
//			if (a[i][j] > abs(a[i][j + 1]))
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int sumOfRow(int a[][MAXCOL], int x, int m) {
//	int sum = 0;
//	for (int j = 0; j < m; j++)
//	{
//		sum += a[x][j];
//	}
//	return sum;
//}
//int sumMatrixBoundary(int a[][MAXCOL], int n, int m)// Tong gia tri nam tren bien cua ma tran
//{
//	int sumRow = 0, sumCol = 0;
//	for (int j = 0; j < m; j++)
//	{
//		sumRow = sumRow + a[0][j] + a[n - 1][j];
//	}
//	for (int i = 1; i < n - 1; i++) {
//		sumCol = sumCol + a[i][0] + a[i][m - 1];
//	}
//	return sumRow + sumCol;
//}
//
//void outPut(int a[][MAXCOL], int n, int m)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			printf("\t%d", a[i][j]);
//
//		}
//		printf("\n");
//	}
//}
//int countNumberInMatrix(int a[][MAXCOL], int n, int m, int x)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] == x)
//				count++;
//		}
//
//	}
//	return count;
//}
//int Prime(int x)
//{
//	//x = abs(x);// Xet no la so nguyen to hay ko thi can pai lm them 1 buoc la abs() no vi neu ko thi no se qua vong for vi sai dk ngay ban dau-> dan den sai kq 
//	int count = 0;
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0) {
//			count++;
//		}
//	}
//	if (count == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//void checkPrimMatrix(int a[][MAXCOL], int n, int m)
//{
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (Prime(a[i][j]) == 1)
//				printf("\t%d", a[i][j]);
//		}
//
//	}
//}
//void sumCol(int a[][MAXCOL], int n, int m, int arraySumCol[]) {
//	int sum = 0;
//	for (int j = 0; j < m; j++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			sum += a[i][j];
//		}
//		arraySumCol[j] = sum;
//		sum = 0;
//	}
//
//}
//int printSumCol(int a[][MAXCOL], int n, int m, int arraySumCol[])
//{
//	sumCol(a, 4, 5, arraySumCol);
//	int minCol = arraySumCol[0];
//	int i;
//	for (i = 1; i < n; i++)
//	{
//		if (minCol >= arraySumCol[i]) {
//			minCol = arraySumCol[i];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arraySumCol[i] == minCol)
//		{
//			return i;
//		}
//	}
//
//	return 0;
//}
//int getRowPerfectNumber(int a[][MAXCOL], int n, int m)
//{
//	int row[10], count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			if (prefectNumber(a[i][j]))// != 0
//			{
//				count++;
//			}
//		}
//		row[i] = count;
//		count = 0;
//	}
//	int max = row[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (max <= row[i]) {
//			max = row[i];
//		}
//	}
//	return max;
//}
//int checkEven(int x)
//{
//	if (x % 2 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int getRowWithOnlyEven(int a[][MAXCOL], int n, int m)
//{
//	int row[10], count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			if (!checkEven(a[i][j]))// neu ma odd == 0 
//			{
//				break; // cook khoi vong lap j 
//			}
//			else
//			{
//				count++;// ko thi tang cai count leen
//			}
//
//		}
//		if (count == m)
//		{
//			return i;// neeu ma count no = m thi nghia la no da di het cai vong lap va ko co so chan nao het thi tra ve vi tri cua no 
//		}
//		count = 0;// reset cai bien dem 
//	}
//	return -1;
//}
//int countNumber(int a[][MAXCOL], int n, int m, int x)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			if (x == a[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//int getMostValue(int a[][MAXCOL], int n, int m) {
//	int max = countNumber(a, n, m, a[0][0]);
//	int count = 0, n1 = 0, n2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			if (max < countNumber(a, n, m, a[i][j]))
//			{
//				max = countNumber(a, n, m, a[i][j]);
//				n1 = i;
//				n2 = j;
//			}
//		}
//	}
//	printf("Phan tu xuat hien nhieu nhat trong Maxtrix:%d", a[n1][n2]);
//	return 1;
//}
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void arrageIncrease(int a[][MAXCOL], int m, int n)
//{
//	for (int k = 0; k < m; k++)
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				if (a[k][i] > a[k][j])
//				{
//					swap(a[k][i], a[k][j]);
//				}
//			}
//		}
//	}
//	outPut(a, m, n);
//}
//int findMinMatrix(int a[][MAXCOL], int m, int n)
//{
//	int min = a[0][0];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			if (min > a[i][j])
//			{
//				min = a[i][j];
//			}
//		}
//	}
//	return min;
//}
////---------------------------------------------------------------------Matrix Vuong---------------------------------------------------------
//int sumMainDiagonal(int a[][MAXCOL], int m, int n)// Tinh tong cua duong cheo chinh
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			if (i == j)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int sumUponMainDiagonal(int a[][MAXCOL], int m, int n)
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			if (i < j)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int sumBelowMainDiagonal(int a[][MAXCOL], int m, int n)
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			if (i > j)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
////-------------------------------------------------------------Secondary diagoanl----------------------------------------------------------------------------
//int sumSecondaryDiagonal(int a[][MAXCOL], int m, int n)// tong duong cheo phu
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			if (i + j == n - 1)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int sumUponSecondaryDiagonal(int a[][MAXCOL], int m, int n)// Tong tren duong cheo phu 
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			if (i + j < n - 1)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int main() {
//
//	int a[MAXROW][MAXCOL] = {
//				{12,59,6,14},
//				{28,45,-56,12},
//				{16,84,19,496},
//				{12,56,-40,84}
//	};
//	int x, row, arrayMatrix[6];
//	//printf("Answear:%d", sumOfFistOddNumber(a, 3, 5));
//	/*printf("Nhap so can tim trong ma tran: ");
//	scanf("%d", &x);
//	sreachMatrix(a, 3, 5, x);*/
//	//printPerfectNumber(a, 3, 5);
//	//printf("Tong cac phan tu lon hon tri tuyet doi cua phan tu lien sau no: %d", sumGreaterThanAbs(a, 3, 5));
//	/*printf("Choose your row: ");
//	scanf("%d", &row);
//	printf("Sum row %d: %d", row, sumOfRow(a, row, 5));*/
//	/*outPut(a, 4, 5);
//	printf("Sum of matrix boundary: %d", sumMatrixBoundary(a, 4, 5));*/
//	/*printf("Choose your nuumber that u find: ");
//	scanf("%d", &x);
//	printf("So luong phan tu %d trong Matrix: %d", x, countNumberInMatrix(a, 4, 5, x));*/
//	//checkPrimMatrix(a, 4, 5);
//
//
//
//
//	//sumCol(a, 4, 5, arrayMatrix);
//	/*printf("Cot co sum nho nhat trong matrix: %d", printSumCol(a, 4, 5, arrayMatrix));
//	printf("\n");*/
//
//	//printf("Dong co nhieu so hoan thien nhat: %d", rowPerfectNumber(a, 4, 5));
//	//printf("Dong chi co so chan : %d", getRowWithOnlyEven(a, 4, 5));
//	//getMostValue(a, 4, 5);
//	//arrageIncrease(a, 4, 5);
//	// -------------------------------------------------MAtrix diagonal---------------------------------------------------
//	//printf("Main diagonal:%d", sumMainDiagonal(a, 4, 4));
//	//printf("Secondary diagonal:%d", sumSecondaryDiagonal(a, 4, 4));
//	printf("Upon secondary diagonal:%d", sumUponSecondaryDiagonal(a, 4, 4));
//
//	_getch();
//}