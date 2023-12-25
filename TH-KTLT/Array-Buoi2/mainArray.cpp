//#include"Array.h"
//
//int main()
//{
//	const char* fi = "input-Array_Buoi2.txt";
//	const char* fo = "output-Array_Buoi2.txt";
//	int* a = NULL;
//	int n, choose, x, result, y;
//	do
//	{
//		menu();
//		printf("Nhap bai muon lam: ");
//		scanf("%d", &choose);
//		switch (choose)
//		{
//		case 1:
//			elementArray(n);
//			createRandomArray(a, n);
//			output(a, n);
//			break;
//		case 2:
//			elementArray(n);
//			createRandomArrayEven(a, n);
//			output(a, n);
//			break;
//		case 3:
//			readFileArray(fi, a, n);
//			output(a, n);
//			break;
//		case 4:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Nhap phan tu muon tim: ");
//				scanf("%d", &x);
//				LinearSearch(a, n, x);
//			}
//			break;
//		case 5:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				interchangeSortDecrease(a, n);
//				output(a, n);
//				writeFileArray(fo, a, n);
//				/*interchangeSortMin(a, n);
//				output(a, n);*/
//			}
//			break;
//		case 6:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				interchangeSortDecrease(a, n);
//				output(a, n);
//				printf("Nhap phan tu muon tim: ");
//				scanf("%d", &x);
//				result = binarySortSearchRecursive(a, 0, n - 1, n, x);
//				if (result != -1)
//				{
//					printf("Co phan tu %d o vi tri %d trong mang .\n", x, result);
//				}
//				else
//				{
//					printf("Khong co %d trong mang!!\n", x);
//				}
//			}
//			break;
//		case 7:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Nhap phan tu X : ");
//				scanf("%d", &x);
//				printf("Cac so nguyen to nho hon %d la: ", x);
//				getPrimeLessNumberX(a, n, x);
//				printf("\n");
//			}
//			break;
//		case 8:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				result = getSumFirstDigit(a, n);
//				if (result)
//				{
//					printf("Tong cac phan tu co chu so dau la le: %d\n", result);
//				}
//				else
//				{
//					printf("Khong co tong cac so co chu so dau la le!!\n");
//				}
//			}
//			break;
//		case 9:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				getNumberAppeartime(a, n);
//			}
//			break;
//		case 10:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Day so chan tang dan: ");
//				SortEvenIncrease(a, n);
//				output(a, n);
//			}
//			break;
//		case 11:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Day so le giam dan: ");
//				SortOddDecrease(a, n);
//				output(a, n);
//			}
//			break;
//		case 12:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//
//				findLongestDecrease(a, n);
//			}
//			break;
//		case 13:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				findSecondMin(a, n);
//			}
//			break;
//		case 14:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap phan tu X : ");
//					scanf("%d", &x);
//					if ((x < 10))
//					{
//						printf("Khong the nhap nho hon 10!! Vui long nhap lai\n");
//					}
//				} while (x < 10);
//				printf("Cac so co so %d la:\n", x);
//				find2NumberXY(a, n, x);
//			}
//			break;
//		case 15:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Sau khi sap xep: ");
//				justSortEvenIncrease(a, n);
//				output(a, n);
//			}
//			break;
//		case 16:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Sau khi sap xep: ");
//				sortOddFistEvenSecond(a, n);
//			}
//			break;
//		case 0:
//			delete a;
//			printf("HAVE A NICE DAY SIR!!\n");
//			break;
//		default:
//			printf("Khong co su lua chon so %d\n", choose);
//			break;
//		}
//	} while (choose != 0);
//
//
//	getch();
//}