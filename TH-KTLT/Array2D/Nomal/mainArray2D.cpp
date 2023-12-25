//#include"Array2D.h"
//int main()
//{
//	int** a = NULL;
//	int m, n, choose, sum, k, checkReturn, secondChoose;
//	const char* fi = "input-Array2D.txt";
//	const char* squarefi = "input-Array2D-square.txt";
//
//	const char* fo = "output-Array2D.txt";
//
//	int i, j;
//
//	menu();
//	do
//	{
//		printf("Nhap bai muon lam: ");
//		scanf("%d", &choose);
//		switch (choose)
//		{
//		case 1:
//			printf("Nhap so dong t: ");
//			scanf("%d", &m);
//			printf("Nhap so cot: ");
//			scanf("%d", &n);
//			Input(a, m, n);
//			Output(a, m, n);
//			break;
//		case 2:
//			printf("Nhap so dong t: ");
//			scanf("%d", &m);
//			printf("Nhap so cot: ");
//			scanf("%d", &n);
//			createRandomArray2D(a, m, n);
//			Output(a, m, n);
//			break;
//		case 3:
//			readArray2DFile(fi, a, m, n);
//			Output(a, m, n);
//			break;
//		case 4:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Cac so hoan hao trong mang 2 chieu la:\n");
//				getPrefectNumberArray2D(a, m, n);
//			}
//			break;
//		case 5:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				sum = getSumFirstUnitOdd(a, m, n);
//				printf("Tong cac phan tu co so dau la so le la: %d\n", sum);
//			}
//			break;
//		case 6:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				sum = getSumAllGreater(a, m, n);
//				printf("Tong cac so lon hon tri tuyet doi cac so sau no: %d\n", sum);
//			}
//			break;
//		case 7:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap dong k: ");
//					scanf("%d", &k);
//					if (k > m || k < 0)
//					{
//						printf("Khong co dong ma ban chon!!\n");
//					}
//				} while (k > m || k < 0);
//				sum = getSumRowK(a, k, n);
//				printf("Tong cac phan tu o dong %d la: %d\n", k, sum);
//			}
//			break;
//		case 8:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				sum = getSumBoundary(a, m, n);
//				printf("Tong cac phan tu o vi tri bien cua mang 2 chieu la: %d\n", sum);
//			}
//			break;
//		case 9:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Nhap gia tri can dem: ");
//				scanf("%d", &k);
//				checkReturn = getCountNumberX(a, m, n, k);
//				if (checkReturn)
//				{
//					printf("So lan xuat hien cua gia tri %d trong mang 2 chieu la: %d\n", k, checkReturn);
//				}
//				else
//				{
//					printf("Khong co gia tri %d trong mang 2 chieu!! \n", k);
//				}
//			}
//			break;
//		case 10:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				menu2();
//				do
//				{
//					printf("Chon bai muon lam: ");
//					scanf("%d", &secondChoose);
//					switch (secondChoose)
//					{
//					case 1:
//						checkReturn = getEvenNumber(a, m, n);
//						if (checkReturn)
//						{
//							printf("Cac so chan trong mang 2 chieu la: %d\n", checkReturn);
//						}
//						else
//						{
//							printf("Mang 2 chieu khong co so chan!! \n");
//						}
//						break;
//					case 2:
//						checkReturn = getOddNumber(a, m, n);
//						if (checkReturn)
//						{
//							printf("Cac so le trong mang 2 chieu la: %d\n", checkReturn);
//						}
//						else
//						{
//							printf("Mang 2 chieu khong co so le!! \n");
//						}
//						break;
//					case 3:
//						checkReturn = getNegativeNumber(a, m, n);
//						if (checkReturn)
//						{
//							printf("Cac so duong trong mang 2 chieu la: %d\n", checkReturn);
//						}
//						else
//						{
//							printf("Mang 2 chieu khong co so duong!! \n");
//						}
//						break;
//					case 4:
//						checkReturn = getPositiveNumber(a, m, n);
//						if (checkReturn)
//						{
//							printf("Cac so am trong mang 2 chieu la: %d\n", checkReturn);
//						}
//						else
//						{
//							printf("Mang 2 chieu khong co so am!! \n");
//						}
//						break;
//					case 5:
//						checkReturn = getPrimeNumber(a, m, n);
//						if (checkReturn)
//						{
//							printf("Cac so nguyen to trong mang 2 chieu la: %d\n", checkReturn);
//						}
//						else
//						{
//							printf("Mang 2 chieu khong co so nguyen to!! \n");
//						}
//						break;
//					case 0:
//						break;
//					default:
//						printf("Khong co su lua chon do!!\n ");
//						break;
//					}
//				} while (secondChoose != 0);
//			}
//			break;
//		case 11:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				getSumColMin(a, m, n);
//			}
//			break;
//		case 12:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				getRowPrefectNumberMax(a, m, n);
//			}
//			break;
//		case 13:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				getRowOnlyEven(a, m, n);
//			}
//			break;
//		case 14:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				getNumberMostAppearTime(a, m, n);
//
//
//			}
//			break;
//		case 15:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				getMinPrimeArray2D(a, m, n);
//			}
//			break;
//		case 16:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap dong can tim: ");
//					scanf("%d", &k);
//					if (k<0 || k>m)
//					{
//						printf("Khong the tim o vi tri do!!\n");
//					}
//				} while (k<0 || k>m);
//				int max = getMaxNumberRowK(a, m, n, k);
//				printf("Dong %d co gia tri lon nhat la : %d\n", k, max);
//			}
//			break;
//		case 17:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap dong can tim: ");
//					scanf("%d", &k);
//					if (k<0 || k>m)
//					{
//						printf("Khong the tim o vi tri do!!\n");
//					}
//				} while (k<0 || k>m);
//				int min = getMinNumberRowK(a, m, n, k);
//				printf("Dong %d co gia tri lon nhat la : %d\n", k, min);
//			}
//			break;
//		case 18:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap dong can tim: ");
//					scanf("%d", &k);
//					if (k<0 || k>m)
//					{
//						printf("Khong the tim o vi tri do!!\n");
//					}
//				} while (k<0 || k>m);
//				int max = getMaxNumberColK(a, m, n, k);
//				printf("Dong %d co gia tri lon nhat la : %d\n", k, max);
//			}
//			break;
//		case 19:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap dong can tim: ");
//					scanf("%d", &k);
//					if (k<0 || k>m)
//					{
//						printf("Khong the tim o vi tri do!!\n");
//					}
//				} while (k<0 || k>m);
//				int min = getMinNumberColK(a, m, n, k);
//				printf("Dong %d co gia tri lon nhat la : %d\n", k, min);
//			}
//			break;
//		case 20:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				evenIncreaseOddDecreaseRow(a, m, n);
//				Output(a, m, n);
//			}
//			break;
//		case 21:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				evenIncreaseOddDecreaseCol(a, m, n);
//				Output(a, m, n);
//			}
//			break;
//		case 22:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				sortZicZac(a, m, n);
//				Output(a, m, n);
//			}
//			break;
//		case 23:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Nhap dong can xoa: ");
//				scanf("%d", &k);
//				if (k<0 || k>m)
//				{
//					printf("Khong the xoa o vi tri do!!\n");
//				}
//				deleteRow(a, m, n, k);
//				Output(a, m, n);
//			}
//			break;
//		case 24:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Nhap cot can xoa: ");
//				scanf("%d", &k);
//				if (k<0 || k>m)
//				{
//					printf("Khong the xoa o vi tri do!!\n");
//				}
//				deleteCol(a, m, n, k);
//				Output(a, m, n);
//			}
//			break;
//		case 25:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Nhap so can xoa: ");
//				scanf("%d", &k);
//
//				deleteRowWithK(a, m, n, k);
//				Output(a, m, n);
//			}
//			break;
//		case 26:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Nhap so can xoa: ");
//				scanf("%d", &k);
//
//				deleteColWithK(a, m, n, k);
//				Output(a, m, n);
//			}
//			break;
//		case 27:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap vi tri cua dong: ");
//					scanf("%d", &i);
//					printf("Nhap vi tri cua cot: ");
//					scanf("%d", &j);
//					if (i<0 || i>m || j<0 || j>n)
//					{
//						printf("Khong the doi vi tri vi sai gia tri!!\n");
//					}
//				} while (i<0 || i>m || j<0 || j>n);
//				swapRow(a, m, n,i, j);
//				Output(a, m, n);
//			}
//			break;
//		case 28:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap vi tri cua dong: ");
//					scanf("%d", &i);
//					printf("Nhap vi tri cua cot: ");
//					scanf("%d", &j);
//					if (i<0 || i>m || j<0 || j>n)
//					{
//						printf("Khong the doi vi tri vi sai gia tri!!\n");
//					}
//				} while (i<0 || i>m || j<0 || j>n);
//				swapCol(a, m, n,i, j);
//				Output(a, m, n);
//			}
//			break;
//		case 30:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				writeFileArray2D(fo, a, m, n);
//				printf("Ghi File thanh cong!!\n");
//			}
//			break;
//		case 0:
//			deleteArray(a, m, n);
//			printf("HAVE A NICE DAY SIR!!\n");
//			break;
//		default:
//			printf("Khong co su lua chon so %d!!\n", choose);
//			break;
//		}
//	} while (choose != 0);
//
//	getch();
//}
