//#include<conio.h>
//#include<stdio.h>
//#include<math.h>
//float getSqrtN(int n)// tinh n dau can 2 
//{
//	if (n == 1)
//	{
//		return (float)sqrt(2);
//	}
//	return sqrt(2 + getSqrtN(n - 1));// can (2+ham(n-1))
//}
//int giaithua(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return n * giaithua(n - 1);
//}
//float sumN(int n)
//{
//	if (n == 1)
//	{
//		float d = (float)-3 / giaithua(2);
//		return d;
//	}
//
//	int a = pow(-1, n);
//	int c = a * ((2 * n - 1) + (2 * n));
//
//	float b = (float)c / giaithua(2 * n);
//
//	return  b + sumN(n - 1);
//}
//int CSC(int n, int r, int u1)
//{
//	if (n == 1)
//	{
//		return u1;
//	}
//	return  CSC(n - 1, r, u1) + r;
//}
//
//int bieuThuc(int n, int r, int u1)
//{
//	int sum = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//		sum += CSC(n - i, r, u1);
//	}
//	return	sum;
//}
//int bai7(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	if (n == 1)
//	{
//		return 0;
//	}
//	if (n == 2)
//	{
//		return -1;
//	}
//	return 2 * bai7(n - 1) - 3 * bai7(n - 2) - bai7(n - 3);
//}
//int main()
//{
//	int n, r, u1;
//	printf("Nhap n: ");
//	scanf("%d", &n);
//	/*printf("Nhap r: ");
//	scanf("%d", &r);
//	printf("Nhap u1: ");
//	scanf("%d", &u1);*/
//
//	//float sum = getSqrtN(n);
//
//	int sum = bai7(n);
//	printf("Tong cac so n: %d", sum);
//
//
//	getch();
//}