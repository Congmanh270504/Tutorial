//#include"Array2D.h"
//void menu()
//{
//	printf("=============================Menu================================\n");
//	printf("|| **************************Init***************************** ||\n");
//	printf("|| * 1.Nhap mang 2 chieu va xuat mang 2 chieu                * ||\n");
//	printf("|| * 2.Tao mang 2 chieu va xuat ra man hinh                  * ||\n");
//	printf("|| * 3.Doc mang 2 chieu tu File va xuat ra man hinh          * ||\n");
//	printf("|| **************************Sum***************************  * ||\n");
//	printf("|| * 4.Liet ke cac so hoan thien trong mang                  * ||\n");
//	printf("|| * 5.Tong cac so co chu so dau la chu so le                * ||\n");
//	printf("|| * 6.Tong cac so lon hon tri tuyet doi sau no              * ||\n");
//	printf("|| * 7.Tong cac phan tu tren dong k                          * ||\n");
//	printf("|| * 8.Tong cac phan tu o vi tri bien                        * ||\n");
//	printf("|| **************************Count**************************** ||\n");
//	printf("|| * 9.So lan xuat cua gia tri K                             * ||\n");
//	printf("|| * 8.Tong cac phan tu o vi tri bien                        * ||\n");
//	printf("|| * 10.Dem cac phan tu chan,le,am,duong,nguyen to           * ||\n");
//	printf("|| **************************Lised**************************** ||\n");
//	printf("|| * 11.Liet ke cac cot co tong nho nhat trong mang 2 chieu  * ||\n");
//	printf("|| * 12.Liet ke cac dong co nhieu so hoan thien nhat         * ||\n");
//	printf("|| * 13.Liet ke cac dong chi co chan                         * ||\n");
//	printf("|| ***************************FindNumber********************** ||\n");
//	printf("|| * 14.Tim gia tri xuat hien nhieu nhat trong mang 2 chieu  * ||\n");
//	printf("|| * 15.Tim so nguyen to nho nhat trong mang                 * ||\n");
//	printf("|| * 16.Tim so lon nhat trong dong K                         * ||\n");
//	printf("|| * 17.Tim so nho nhat trong dong K                         * ||\n");
//	printf("|| * 18.Tim so lon nhat trong cot  K                         * ||\n");
//	printf("|| * 19.Tim so nho nhat trong cot  K                         * ||\n");
//	printf("|| ***************************Sort**************************** ||\n");
//	printf("|| * 20.Sap xep dong chan tang, dong le giam                 * ||\n");
//	printf("|| * 21.Sap xep cot chan tang, cot le giam                   * ||\n");
//	printf("|| * 22.Sap xep Zic-Zac                                      * ||\n");
//	printf("|| ***************************Delete************************** ||\n");
//	printf("|| * 23.Xoa dong K                                           * ||\n");
//	printf("|| * 24.Xoa cot  K                                           * ||\n");
//	printf("|| * 25.Xoa dong co phan tu X                                * ||\n");
//	printf("|| * 26.Xoa cot  co phan tu X                                * ||\n");
//	printf("|| ***************************Swap**************************** ||\n");
//	printf("|| * 27.Doi vi tri 2 dong i va j                             * ||\n");
//	printf("|| * 28.Doi vi tri 2 cot  i va j                             * ||\n");
//	printf("|| ***************************SquareMatrix******************** ||\n");
//	printf("|| * 29.Xuat cac phan tu tren duong cheo chinh               * ||\n");
//
//	printf("|| **************************WriteFile************************ ||\n");
//	printf("|| * 30.Ghi mang so phan so tu File                          * ||\n");
//	printf("|| * 0.Thoat chuong trinh			             * ||\n");
//	printf("|| ***************************End***************************** ||\n");
//	printf("=================================================================\n");
//}
//void menu2()
//{
//	printf("***************Chon bai muon lam******************\n");
//	printf("*              1.Dem so chan                     *\n");
//	printf("*              2.Dem so le                       *\n");
//	printf("*              3.Dem so am                       *\n");
//	printf("*              4.Dem so duong                    *\n");
//	printf("*              5.Dem so nguyen to                *\n");
//	printf("* 	       0.Thoat chuong trinh              *\n");
//	printf("*********************End**************************\n");
//}
//void elementArray(int& n)
//{
//	printf("Nhap so luong phan tu: ");
//	scanf("%d", &n);
//}
//void init(int**& a, int& m, int& n)
//{
//	a = (int**)malloc(n * sizeof(int));// khoi tao n dong 
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = (int*)malloc(m * sizeof(int));// ung vs moi n la co m cot
//	}
//}
//void Input(int**& a, int& m, int& n)// mang 2 chieu can co 2 dau **
//{
//	init(a, m, n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("Nhap phan tu a[%d][%d]: ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//}
//void Output(int**& a, int m, int n)
//{
//	printf("Mang 2 chieu: \n");
//	for (int i = 0; i < m; i++)
//	{
//		printf("\t");
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void createRandomArray2D(int**& a, int& m, int& n)
//{
//	init(a, m, n);
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			a[i][j] = -20 + rand() % 121;
//		}
//	}
//}
//void readArray2DFile(const char* filename, int**& a, int& m, int& n)
//{
//	FILE* fi = fopen(filename, "rt");
//	if (!fi)
//	{
//		printf("Loi mo File!!\n");
//		getch();
//	}
//	fscanf(fi, "%d %d\n", &m, &n);
//	init(a, m, n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			fscanf(fi, "%d", &a[i][j]);
//		}
//	}
//	fclose(fi);
//}
//void writeFileArray2D(const char* filename, int** a, int& m, int& n)
//{
//	FILE* fo = fopen(filename, "wt");
//	if (!fo)
//	{
//		printf("Khong the ghi File!!\n");
//		return;
//	}
//	fprintf(fo, "%d %d\n", m, n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			fprintf(fo, "%d\t", a[i][j]);
//		}
//		fprintf(fo, "\n");
//	}
//	fclose(fo);
//}
//
//int checkOdd(int n)
//{
//	n = abs(n);
//	while (n / 10)
//	{
//		n /= 10;
//	}
//	if (n % 2 == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int getSumFirstUnitOdd(int**& a, int& m, int& n)
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (checkOdd(a[i][j]))
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int checkPrefectNumber(int n)
//{
//	int sum = 1;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (n == sum)
//	{
//		return 1;
//	}
//	return 0;
//}
//void getPrefectNumberArray2D(int**& a, int& m, int& n)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == 1)
//			{
//				continue;
//			}
//			else if (checkPrefectNumber(a[i][j]))
//			{
//				printf("%d\t", a[i][j]);
//			}
//			else
//			{
//				count++;
//			}
//		}
//	}
//	if (count == (m * n))
//	{
//		printf("Mang 2 chieu khong co so hoan thien!!");
//	}
//	printf("\n");
//}
//int getSumAllGreater(int**& a, int& m, int& n)
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (a[i][j] > abs(a[i][j + 1]))
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int getSumRowK(int**& a, int& k, int& n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[k][i];
//	}
//	return sum;
//}
//int getSumBoundary(int** a, int& m, int& n)
//{
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == 0 || i == m - 1)
//			{
//				sum1 += a[i][j];
//			}
//			else
//			{
//				sum2 += a[i][0] + a[i][n - 1];
//				break;
//			}
//		}
//	}
//	return sum1 + sum2;
//}
//int getCountNumberX(int** a, int& m, int& n, int x)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == x)
//			{
//				count++;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		return 0;
//	}
//	return count;
//}
//int getEvenNumber(int**& a, int& m, int& n)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] % 2 == 0)
//			{
//				count++;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		return 0;
//	}
//	return count;
//}
//int getOddNumber(int**& a, int& m, int& n)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] % 2 == 1)
//			{
//				count++;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		return 0;
//	}
//	return count;
//}
//int getNegativeNumber(int**& a, int& m, int& n)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] < 0)
//			{
//				count++;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		return 0;
//	}
//	return count;
//}
//int getPositiveNumber(int**& a, int& m, int& n)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] > 0)
//			{
//				count++;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		return 0;
//	}
//	return count;
//}
//int checkPrime(int x)
//{
//	x = abs(x);
//	if (x <= 0)
//	{
//		return 0;
//	}
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int getPrimeNumber(int**& a, int& m, int& n)// dem cac so nguyen to
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (checkPrime(a[i][j]))
//			{
//				count++;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		return 0;
//	}
//	return count;
//}
//int findMin(int*& b, int n)
//{
//	int min = b[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (min > b[i])
//		{
//			min = b[i];
//		}
//	}
//	return min;
//}
//int findMax(int*& b, int n)
//{
//	int max = b[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (max < b[i])
//		{
//			max = b[i];
//		}
//	}
//	return max;
//}
//void getSumColMin(int** a, int& m, int& n)
//{
//	int* b = new int[n];
//	int sum = 0, j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < m; j++)
//		{
//			sum += a[j][i];
//		}
//		b[i] = sum;
//	}
//	int min = findMin(b, n);
//	for (int i = 0; i < n; i++)
//	{
//		if (min == b[i])
//		{
//			printf("Cot co tong nho trong mang la: %d\n", i);
//		}
//	}
//}
//void getRowPrefectNumberMax(int** a, int& m, int& n)
//{
//	int* b = new int[m];
//	int count = 0, count2 = 0;
//	for (int i = 0; i < m; i++)
//	{
//		count = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (checkPrefectNumber(a[i][j]))
//			{
//				count++;
//			}
//		}
//		b[i] = count;
//	}
//	int max = findMax(b, n);
//	for (int i = 0; i < m; i++)
//	{
//		if (b[i] == 0) {
//			count2++;
//		}
//	}
//	if (count2 == m)
//	{
//		printf("Trong mang 2 chieu khong co so hoan thien!!\n");
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (max == b[i])
//		{
//			printf("Dong co nhieu so hoan thien nhat trong mang la: %d\n", i);
//		}
//	}
//}
//int checkArrayOnlyEven(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (abs(a[i]) % 2 == 1)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//void getRowOnlyEven(int**& a, int& m, int& n)
//{
//	int* b = new int[m];
//	int j = 0;
//	for (int i = 0; i < m; i++)
//	{
//		if (checkArrayOnlyEven(a[i], n))
//		{
//			b[j] = i;
//			j++;
//		}
//	}
//	if (j == 0)// neu ma no ko chay vao cai vong tren thi mang rong ko co gia tri de gan <=> khong co mang nao chan 
//	{
//		printf("Khong co dong nao chua chi so chan!!\n");
//		return;
//	}
//	for (int i = 0; i < j; i++)
//	{
//
//		printf("Dong chi co so chan : %d\n", b[i]);
//	}
//}
//int getAppearTimeNumber(int** a, int& m, int& n, int x)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (x == a[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//int checkNumberArray(int* b, int& n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] == x)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//void getNumberMostAppearTime(int** a, int& m, int& n)// loi~
//{
//	int countMax = getAppearTimeNumber(a, m, n, a[0][0]);// tim so lan xuat hien cua phan tu dau 
//	int* b = new int[m * n];
//	int* c = new int[m * n];
//	int k = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (countMax <= getAppearTimeNumber(a, m, n, a[i][j]))// so sanh so lan xuat hien vs cac phan tu khac (neu con nho hon)
//			{
//				countMax = getAppearTimeNumber(a, m, n, a[i][j]);// gan cai cai return vao cai countMax de moi lan thuc hien vong lap lai
//				b[k] = countMax;// gan cai kq vao mang b
//				k++;// tang cai bien dem cua cai mang  
//			}
//		}
//	}
//	if (b == NULL)// check xem mang do co full 0 ko 
//	{
//		printf("Mang 2 chieu khong co phan tu xuat hien nhieu nhat!!\n");
//		return;
//	}
//	int max = findMax(b, k);// tim max cua cai mang 
//	k = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (checkNumberArray(c, k, a[i][j]))
//			{
//				continue;
//			}
//			if (max == getAppearTimeNumber(a, m, n, a[i][j]))
//			{
//				c[k] = a[i][j];
//				k++;
//				printf("Gia tri xuat hien nhieu nhat(%d lan) trong mang 2 chieu: %d\n", max, a[i][j]);
//			}
//		}
//	}
//}
//void getMinPrimeArray2D(int** a, int& m, int& n)
//{
//	int* b = new int[m * n];
//	int k = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (checkPrime(a[i][j]))
//			{
//				b[k] = a[i][j];
//				k++;
//			}
//		}
//	}
//	int min = findMin(b, k);
//	printf("So nguyen to nho nhat trong mang 2 chieu la : %d\n", min);
//}
//int getMaxNumberRowK(int** a, int& m, int& n, int k)
//{
//	return findMax(a[k], n);
//}
//int getMinNumberRowK(int** a, int& m, int& n, int k)
//{
//	return findMin(a[k], n);
//}
//int getMaxNumberColK(int** a, int& m, int& n, int k)
//{
//	int max = a[0][k];
//	for (int i = 1; i < m; i++)
//	{
//		if (max < a[i][k])
//		{
//			max = a[i][k];
//		}
//	}
//	return max;
//}
//int getMinNumberColK(int** a, int& m, int& n, int k)
//{
//	int min = a[0][k];
//	for (int i = 1; i < m; i++)
//	{
//		if (min > a[i][k])
//		{
//			min = a[i][k];
//		}
//	}
//	return min;
//}
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void interchangeSortMax(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//void interchangeSortMin(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] < a[j])
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//void evenIncreaseOddDecreaseRow(int** a, int& m, int& n)
//{
//	for (int i = 0; i < m; i++)
//	{
//		if (i % 2 == 0)
//		{
//			interchangeSortMax(a[i], n);
//		}
//		else
//		{
//			interchangeSortMin(a[i], n);
//		}
//	}
//}
//void evenIncreaseOddDecreaseCol(int** a, int& m, int& n)
//{
//	for (int k = 0; k < n; k++)
//	{
//		for (int i = 0; i < m - 1; i++)
//		{
//			for (int j = i + 1; j < m; j++)
//			{
//				if (k % 2 == 0 && a[i][k] > a[j][k])
//				{
//					swap(a[i][k], a[j][k]);
//				}
//				else if (k % 2 != 0 && a[i][k] < a[j][k])
//				{
//					swap(a[i][k], a[j][k]);
//				}
//			}
//		}
//	}
//}
//
//void sortZicZac(int** a, int& m, int& n)
//{
//	int* b = new int[m * n];
//	int k = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			b[k] = a[i][j];
//			k++;
//		}
//	}
//	interchangeSortMax(b, k);
//	k = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			a[i][j] = b[k];
//			k++;
//		}
//	}
//	evenIncreaseOddDecreaseRow(a, m, n);
//}
//void deleteRow(int** a, int& m, int& n, int k)
//{
//	for (int i = k; i < m - 1; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			a[i][j] = a[i + 1][j];
//		}
//	}
//	m--;
//}
//void deleteCol(int** a, int& m, int& n, int k)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = k; j < n - 1; j++)
//		{
//			a[i][j] = a[i][j + 1];
//		}
//	}
//	n--;
//}
//void deleteRowWithK(int** a, int& m, int& n, int k)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == k)
//			{
//				deleteRow(a, m, n, i);
//				break;
//			}
//			else
//			{
//				count++;
//			}
//		}
//	}
//	if (count == m * n)
//	{
//		printf("Khong co so %d trong mang nen mang khong thay doi!!\n", k);
//	}
//}
//void deleteColWithK(int** a, int& m, int& n, int k)
//{
//	int count = 0;
//
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			if (a[i][j] == k)
//			{
//				deleteCol(a, m, n, j);
//				break;
//			}
//			else
//			{
//				count++;
//			}
//		}
//	}if (count == m * n)
//	{
//		printf("Khong co so %d trong mang nen mang khong thay doi!!\n", k);
//	}
//}
//void swapRow(int** a, int& m, int& n, int row1, int row2)
//{
//	for (int i = 0; i < n; i++)
//	{
//		swap(a[row1][i], a[row2][i]);
//	}
//}
//void swapCol(int** a, int& m, int& n, int col1, int col2)
//{
//	for (int i = 0; i < m; i++)
//	{
//		swap(a[i][col1], a[i][col2]);
//	}
//}
//void readArray2DSquareFile(const char* filename, int**& a, int& m)
//{
//	FILE* fi = fopen(filename, "rt");
//	if (!fi)
//	{
//		printf("Loi mo File!!\n");
//		getch();
//	}
//	fscanf(fi, "%d\n", &m);
//	init(a, m, m);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			fscanf(fi, "%d", &a[i][j]);
//		}
//	}
//	fclose(fi);
//}
//void deleteArray(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		delete a[i];
//	}
//	delete a;
//}
