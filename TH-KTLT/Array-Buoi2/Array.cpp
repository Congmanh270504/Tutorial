//#include"Array.h"
//void menu()
//{
//	printf("***************************Menu****************************\n");
//	printf("* 1.Tao mang nguyen va xuat ra man hinh		          *\n");
//	printf("* 2.Tao mang nguyen voi cac phan tu la so chan 	          *\n");
//	printf("* 3.Doc File so nguyen   	                          *\n");
//	printf("* 4.Tim phan tu X (Linear Sort) 	                  *\n");
//	printf("* 5.Sap xep mang tang/giam (Interchange Sort) 	          *\n");
//	printf("* 6.Tim phan tu X (BinarySort Recursive) 	          *\n");
//	printf("* 7.Xuat cac so nguyen to nho hon X     	          *\n");
//	printf("* 8.Tong cac phan tu co chu so dau la le     	          *\n");
//	printf("* 9.Liet ke so lan xuat hien cua tung phan tu      	  *\n");
//	printf("* 10.Sap xep day so chan tang dan      	                  *\n");
//	printf("* 11.Sap xep day so le giam dan      	                  *\n");
//	printf("* 12.Tim mang con giam dai nhat trong mang    	          *\n");
//	printf("* 13.Tim so nho thu 2 trong mang       	                  *\n");
//	printf("* 14.Tim cac so chua so X      	                          *\n");
//	printf("* 15.Sap xep cho mang chan tang,le giu nguyen   	  *\n");
//	printf("* 16.Sap xep so le o dau mang va chan cuoi mang  	  *\n");
//	printf("* 0.Thoat chuong trinh				          *\n");
//	printf("***************************End*****************************\n");
//}
//void elementArray(int& n)
//{
//	printf("Nhap so luong phan tu: ");
//	scanf("%d", &n);
//}
//void createRandomArray(int*& a, int& n)
//{
//	a = new int[n];
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		int tmp;
//		tmp = 100 + rand() % (1000 - 100 + 1);
//		a[i] = tmp;
//	}
//}
//void createRandomArrayEven(int*& a, int& n)
//{
//	a = new int[n];
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		int tmp;
//		do
//		{
//			tmp = 15 + rand() % (100 - 15 + 1);
//		} while (tmp % 2 == 1);
//		a[i] = tmp;
//	}
//}
//void readFileArray(const char* filename, int*& a, int& n)
//{
//	FILE* fi = fopen(filename, "rt");
//	if (!fi)
//	{
//		printf("Khong mo dc File: %s!!\n", filename);
//		return;
//	}
//	fscanf(fi, "%d\n", &n);
//	a = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		int tmp;
//		fscanf(fi, "%d", &tmp);
//		a[i] = tmp;
//	}
//	fclose(fi);
//}
//void writeFileArray(const char* filename, int*& a, int& n)
//{
//	FILE* fo = fopen(filename, "wt");
//	if (!fo)
//	{
//		printf("Khong mo dc File: %s!!\n", filename);
//		return;
//	}
//	fprintf(fo, "%d\n", n);
//	for (int i = 0; i < n; i++)
//	{
//		//int tmp;
//		fprintf(fo, "%d\t", a[i]);
//		//a[i] = tmp;
//	}
//	fclose(fo);
//}
//void output(int* a, int& n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\t", a[i]);
//	}
//	printf("\n");
//}
//void LinearSearch(int*& a, int& n, int x)
//{
//	int* b = new int[n];
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			b[j] = i;
//			j++;
//		}
//	}
//	if (j == 0)
//	{
//		printf("Khong co phan tu can tim!!\n");
//	}
//	printf("Co phan tu %d o vi tri: ", x);
//	output(b, j);
//}
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void interchangeSortIncrease(int*& a, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//			if (a[i] > a[j])
//			{
//				swap(a[i], a[j]);
//			}
//	}
//}
//void interchangeSortDecrease(int*& a, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//			if (a[i] < a[j])
//			{
//				swap(a[i], a[j]);
//			}
//	}
//}
//int binarySortSearchRecursive(int*& a, int left, int right, int& n, int x)
//{
//	int mid;
//	if (right > 1)
//	{
//		mid = (left + right) / 2;
//	}
//	if (a[mid] == x)
//	{
//		return mid;
//	}
//	else if (a[mid] > x)
//	{
//		return binarySortSearchRecursive(a, left, right - 1, n, x);
//	}
//	else
//	{
//		return binarySortSearchRecursive(a, left + 1, right, n, x);
//	}
//	return -1;
//}
//int checkPrime(int x)
//{
//	for (int i = 0; i < x; i++)
//	{
//		if (x % 2 == 0)
//			return 0;
//	}
//	return 1;
//}
//void getPrimeLessNumberX(int*& a, int& n, int x)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < x && checkPrime(a[i]))
//		{
//			printf("%d\t", a[i]);
//			count++;
//		}
//	}
//	if (count == 0)
//	{
//		printf("Khong co so nguyen to nho hon %d!!\n", x);
//	}
//}
//int checkFirstDigit(int x)
//{
//	while (x / 10)
//	{
//		x = x / 10;
//	}
//	if (x % 2 == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int getSumFirstDigit(int*& a, int& n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (checkFirstDigit(a[i])) {
//			sum += a[i];
//		}
//	}
//	return sum;
//}
//int checkAppearTime(int*& a, int& n, int x)
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
//void getNumberAppeartime(int*& a, int& n)
//{
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (checkAppearTime(a, n, a[i]))
//		{
//			int b = checkAppearTime(a, n, a[i]);
//			printf("So %d xuat hien %d lan\n", a[i], b);
//		}
//	}
//}
//void SortEvenIncrease(int*& a, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j])
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//void SortOddDecrease(int*& a, int& n)
//{
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] < a[j])
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//int checkLongestNumber(int*& a, int& n, int x)
//{
//	int count = 1;
//	for (int i = x; i < n; i++)
//	{
//		if (a[i] > a[i + 1])// Truyền vào cái tham số là cái index của cái phần tử đó và so sánh là nó pải là dãy giảm ko
//		{
//			if (i == n - 1)// nếu nó là ở ví trí cuối thì break luôn vì khi nó so sánh thì cái index n nó sẽ là giá trị rác và count sẽ đc + thêm
//			{
//				break;
//			}
//			count++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return count;// trả về độ dài của dãy tăng
//}
//int findMax(int*& a, int& n)// tìm max
//{
//	int max = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//int findMin(int*& a, int& n)// tìm max
//{
//	int min = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//	}
//	return min;
//}
//void findLongestDecrease(int*& a, int& n)
//{
//	int* b = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		int result = checkLongestNumber(a, n, i);// gán cái return value cho thg result
//		b[i] = result;// cho nó vô cái mảng b
//	}
//	int max = findMax(b, n);// tìm max mảng b
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] == max)// tìm vị trí của cái b[i]== max
//		{
//			printf("\nMang con giam dai nhat trong a: ");
//			for (int j = i; j < max + i; j++)// đk vòng lặp: i+max ->từ vị trí đó cộng thêm độ dài giảm dần của nó
//			{
//				printf("%d\t", a[j]);// xuất ra giá trị của mảng a
//			}
//		}
//	}
//	printf("\n");
//}
//void findSecondMin(int*& a, int& n)
//{
//	int result = findMin(a, n);
//	interchangeSortIncrease(a, n);
//	output(a, n);
//	for (int i = 0; i < n; i++)
//	{
//		if (result < a[i + 1])
//		{
//			printf("Phan tu nho thu 2 trong mang: %d\n", a[i + 1]);
//			break;
//		}
//	}
//}
//int checkNumberX(int i, int x)
//{
//	int result = 0;
//	do
//	{
//		result = i % 10;// lay so cuoi cung 
//		if (result == x)// check
//		{
//			return 1;
//		}
//		i /= 10;// bo cai so do di 
//	} while (i % 10);// trong khi i con chia du 
//	return 0;
//}
//void find2NumberXY(int*& a, int& n, int x)
//{
//	int dozen = x / 10, unit = x % 10, count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (checkNumberX(a[i], dozen) && checkNumberX(a[i], unit))
//		{
//			printf("%d\t", a[i]);
//		}
//		else
//		{
//			count++;
//		}
//	}
//	if (count == n)
//	{
//		printf("Khong co so %d trong cac so cua mang!!\n ", x);
//	}
//	printf("\n");
//}
//void justSortEvenIncrease(int*& a, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j] && a[i] % 2 == 0 && a[j] % 2 == 0)
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//void sortOddFistEvenSecond(int*& a, int& n)
//{
//	int* b = new int[n];
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 1)
//		{
//			b[j] = a[i]; 
//			j++;
//		}
//	}
//	interchangeSortDecrease(b, j);
//	int tmp = j;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			b[j] = a[i];
//			j++;
//		}
//	}
//	for (int i = tmp; i < n - 1; i++)
//	{
//		for (int k = i + 1; k < n; k++)
//			if (b[i] > b[k])
//			{
//				swap(b[i], b[k]);
//			}
//	}
//	output(b, n);
//}
