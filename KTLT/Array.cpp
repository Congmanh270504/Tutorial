//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//#include<string.h>
//void outPut(int a[], int n);
//int Min(int a[], int n);
//int Max(int a[], int n);
//int even(int a[], int n);
//int odd(int a[], int n);
//int Search(int a[], int n, int x);
//void swap(int& a, int& b);
//int interchangeSort(int a[], int n); // Ham sap xep tu be>lon 
//int binarySearch(int a[], int n, int x);//Tim theo kieu nhi phan + bat buoc can pai co sap xep tang dan 
//int countX(int a[], int n, int x);// Dem so luong phan tu X trong mang 
//int countMajorThanX(int a[], int n, int x);// Dem so phan tu lon hon X 
//int Prime(int x);
//int printPrime(int a[], int n);
//int prefectnumber(int x);// Kiem tra xem no la so hoan thien ko? 
//int printPecfectNumber(int a[], int n);// Xuat ra nhung so prefect
//void indexEven(int a[], int n); // Xuat phan tu o vi tri chan
//void indexOdd(int a[], int n);// Xuat phan tu o vi tri le 
//int MinPlus(int a[], int n);//  Xuat phan tu min cung vi tri 
//int MaxPlus(int a[], int n); //  Xuat phan tu max cung vi tri 
//
//
//
//
//int main() {
//	int a[] = { 5,12,3,4,89,63,71,55 }, x;
//	int b[] = { 2,3,12,24,56,61,99 };
//	int c[] = { 13,16,54,59,78 };
//	size_t sizeOfArray = sizeof(a) / sizeof(a[0]); // sl phan tu cua mang = kich thuoc mang/ kich thuoc phan tu cua mang
//	/*outPut(a, sizeOfArray);
//
//	printf("\nMin cua array: %d\nMax cua array: %d", Min(a, sizeOfArray), Max(a, sizeOfArray));
//
//	printf("\nSo luong phan tu chan-le : %d %d\n", even(a, sizeOfArray), odd(a, sizeOfArray));*/
//	interchangeSort(a, sizeOfArray);
//	/*printf("Phan tu can tim: ");
//	scanf("%d", &x);
//	printf("So luong phan tu lon hon %d : %d", x, countMajorThanX(a, sizeOfArray, x));*/
//
//	/*printf("Phan tu %d trong mang a (Theo tuyen tinh) o vi tri thu : %d\n", x, Search(a, sizeOfArray, x));
//	printf("Phan tu %d trong mang a (Theo nhi phan) o vi tri thu : %d", x, binarySearch(a, sizeOfArray, x));
//	*/
//
//	//printf("So phan tu %d trg mang: %d", x, countX(a, sizeOfArray, x));
//	//printPrime(a, sizeOfArray);
//	//printPecfectNumber(a, sizeOfArray);
//	/*indexEven(a, sizeOfArray);
//	printf("\n");
//	indexOdd(a, sizeOfArray);*/
//	MinPlus(a, sizeOfArray);
//	MaxPlus(a, sizeOfArray);
//	_getch();
//}
//void outPut(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("\t%d", a[i]);
//	}
//}
//int Min(int a[], int n)
//{
//	int min = a[0];
//	for (int i = 1; i < n - 1; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//	}
//	return min;
//}
//int Max(int a[], int n)
//{
//	int max = a[0];
//	for (int i = 1; i < n - 1; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//int even(int a[], int n)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int odd(int a[], int n)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int Search(int a[], int n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int interchangeSort(int a[], int n) // Ham sap xep tu be>lon 
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//			if (a[i] > a[j])
//			{
//				swap(a[i], a[j]);
//			}
//	}
//	outPut(a, n);
//	printf("\n");
//	return 1;
//}
//int binarySearch(int a[], int n, int x)
//{
//	interchangeSort(a, n);
//	int left = 0, right = n - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] == x)
//		{
//			return mid;
//		}
//		else if (a[mid] < x)
//			left = mid + 1;
//		else
//			right = mid - 1;
//	}
//	return -1;
//}
//int countX(int a[], int n, int x)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int countMajorThanX(int a[], int n, int x)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > x)
//			count++;
//	}
//	return count;
//}
//int sumArray(int a[], int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[i];
//	}
//	return sum;
//}
//int Prime(int x)
//{
//	int count = 0;
//	if (x < 2)
//	{
//		return -1;
//	}
//	for (int i = 2; i <= sqrt(x); i++)// thu 1: cho no ngon, thu 2:  có số ước ở nửa đầu căn bậc 2 của nó bằng số ước ở nửa sau căn bậc 2 của nó
//	{ // *luu y: nho dau <= vi neu thieu thi an lz (chang han nhu 4 9 ) 
//		if (x % i == 0)
//			count++; // neu so do chia het thi tang len 1 -> no ko pai la so nguyen to 
//	}
//	if (count == 0) // neu ko co thi no la so nguyen to 
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int printPrime(int a[], int n)
//{
//	printf("Cac phan tu la so nguyen to trong mang: ");
//	for (int i = 0; i < n; i++)
//	{
//		if (Prime(a[i]) == 1)
//			printf("%d\t", a[i]);
//	}
//	return 1;
//}
//int prefectnumber(int x)
//{
//	int sum = 0;
//	for (int i = 1; i < x-1; i++)
//	{
//		if (x % i == 0)// 
//			sum += i;
//	}
//	if (sum==x)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int printPecfectNumber(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (prefectnumber(a[i]) == 1)
//			printf("%d\t", a[i]);
//	}
//	return 1;
//}
//void indexEven(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 2 == 0)
//			printf("%d\t", a[i]);
//	}
//}
//void indexOdd(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\t", a[i]);
//	}
//
//}
//int MinPlus(int a[], int n)
//{
//	int min = a[0],index=0;
//	for (int i = 1; i < n - 1; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//			i=index;
//		}
//	}
//	printf("Min: %d tai vi tri %d", min, index);
//	return 1;
//}
//int MaxPlus(int a[], int n)
//{
//	int max = a[0];
//	int index = 0;
//	for (int i = 1; i < n - 1; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			i = index;
//		}
//	}
//	printf("\nMax: %d tai vi tri %d", max, index);
//	return 1;
//}
