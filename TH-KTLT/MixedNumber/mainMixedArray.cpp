//#include"MixedArray.h"
//
//
//int main()
//{
//	HS* b = NULL;
//	PhanSo* c = NULL;
//	HS findHS, answer;
//	const char* fi = "input-MixedArray.txt";
//	const char* fo = "output-MixedArray.txt";
//	int n, x, y, choose, secondChoose, check, checkresult;
//	float result;
//	menu();
//	do
//	{
//		printf("Nhap lua chon bai muon lam: ");
//		scanf("%d", &choose);
//
//		switch (choose)
//		{
//
//		case 1:
//			Input(b, n);
//			Output(b, n);
//			break;
//		case 2:
//			readMixedFile(fi, b, n);
//			Output(b, n);
//			break;
//		case 3:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 )\n");
//			}
//			else
//			{
//				printf("Nhap vi tri muon so sanh: ");
//				scanf("%d %d", &x, &y);
//				compareMixedNumber(b, n, x, y);
//			}
//			break;
//		case 4:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 )\n");
//			}
//			else
//			{
//				PhanSo* c = new PhanSo[n];
//				printf("Mang Hon so sau khi chuyen thanh Phan so: ");
//				convertMixedBToFracC(b, c, n);
//				getFracArray(c, n);
//			}
//			break;
//		case 5:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 )\n");
//			}
//			else
//			{
//				printf("Mang Phan so sau khi chuyen thanh Hon so: ");
//				getConvertFracToMixArray(b, n);
//				Output(b, n);
//			}
//			break;
//		case 6:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 )\n");
//			}
//			else
//			{
//				printf("Cac tong hieu tich thuong cua 2 hon so: ");
//				printf("\nChon vi tri: ");
//				scanf("%d %d", &x, &y);
//				if (check == 1)
//				{
//					getAllResultMixedNumber(b, x, y);
//				}
//				else
//				{
//
//					printf("Cac tong hieu tich thuong cua 2 hon so: \n");
//					getConvertMixToFrac(b[x]);
//					getEasyFrac(b[x]);
//					getConvertMixToFrac(b[y]);
//					getEasyFrac(b[y]);
//					getAllResultMixedNumber(b, x, y);
//				}
//			}
//			break;
//		case 7:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				printf("Mang sau khi duoc sap xep: ");
//				interchangeSortIncrease(b, n);
//				printf("\n");
//				Output(b, n);
//			}
//			break;
//		case 8:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				printf("Mang sau khi duoc sap xep: ");
//				interchangeSortDecrease(b, n);
//				printf("\n");
//				Output(b, n);
//			}
//			break;
//		case 9:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//
//				printf("Nhap Hon so muon tim: \n");
//				printf("Nhap so nguyen: \n");
//				scanf("%d", &findHS.nguyen);
//
//				printf("Nhap tu so: \n");
//				scanf("%d", &findHS.ps.tu);
//
//				printf("Nhap mau so: \n");
//				scanf("%d", &findHS.ps.mau);
//
//				findMixedNumber(b, n, findHS);
//			}
//			break;
//
//		case 10:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				sortEvenFirstOddSecond(b, n);
//			}
//			break;
//		case 11:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				interchangeSortIncrease(b, n);
//				Output(b, n);
//				printf("Nhap Hon so muon tim: \n");
//				printf("Nhap so nguyen: ");
//				scanf("%d", &findHS.nguyen);
//
//				printf("Nhap tu so: ");
//				scanf("%d", &findHS.ps.tu);
//
//				printf("Nhap mau so: ");
//				scanf("%d", &findHS.ps.mau);
//				result = mixToFracNumber(findHS);
//				checkresult = findWithBinarySearchIncrease(b, n, result);
//				if (checkresult != -1)
//				{
//					printf("Co HS %d*%d/%d tai vi tri thu %d\n", findHS.nguyen, findHS.ps.tu, findHS.ps.mau, checkresult);
//				}
//				else
//				{
//					printf("Khong co HS %d*%d/%d trong mang!!\n", findHS.nguyen, findHS.ps.tu, findHS.ps.mau);
//				}
//			}
//			break;
//		case 12:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				interchangeSortDecrease(b, n);
//				Output(b, n);
//				printf("Nhap Hon so muon tim: \n");
//				printf("Nhap so nguyen: ");
//				scanf("%d", &findHS.nguyen);
//
//				printf("Nhap tu so: ");
//				scanf("%d", &findHS.ps.tu);
//
//				printf("Nhap mau so: ");
//				scanf("%d", &findHS.ps.mau);
//				result = mixToFracNumber(findHS);
//				checkresult = findWithBinarySearchDecrease(b, n, result);
//				if (checkresult != -1)
//				{
//					printf("Co HS %d*%d/%d tai vi tri thu %d\n", findHS.nguyen, findHS.ps.tu, findHS.ps.mau, checkresult);
//				}
//				else
//				{
//					printf("Khong co HS %d*%d/%d trong mang!!\n", findHS.nguyen, findHS.ps.tu, findHS.ps.mau);
//				}
//			}
//			break;
//		case 13:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				devideMixedArray(b, n);
//			}
//			break;
//		case 14:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//
//				printf("Nhap phan tu muon xoa: ");
//				scanf("%d", &x);
//				deleteIndex(b, n, x);
//				Output(b, n);
//			}
//			break;
//		case 15:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				printf("Nhap vi tri can them : ");
//				scanf("%d", &x);
//				if (x<0 || x>n)
//				{
//					printf("Khong the chen tai vi tri %d !!\n", x);
//					break;
//				}
//				printf("Nhap Hon so muon them: \n");
//				printf("Nhap so nguyen: ");
//				scanf("%d", &answer.nguyen);
//
//				printf("Nhap tu so: ");
//				scanf("%d", &answer.ps.tu);
//
//				printf("Nhap mau so: ");
//				scanf("%d", &answer.ps.mau);
//
//				insertMixedNumber(b, n, answer, x);
//				Output(b, n);
//			}
//			break;
//		case 16:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				PhanSo* c = new PhanSo[n];
//				printf("Mang C: ");
//				convertMixedBToFracC(b, c, n);
//				getFracArray(c, n);
//			}
//			break;
//		case 17:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				result = getSumMixedArray(b, n);
//				printf("Tong cac phan tu cua mang HS la: %.2f\n", result);
//			}
//			break;
//		case 18:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				x = findMax(b, n);
//				printf("Max cua mang HS la: %.d*%d/%d\n", b[x].nguyen, b[x].ps.tu, b[x].ps.mau);
//			}
//			break;
//		case 19:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				x = findMin(b, n);
//				printf("Min cua mang HS la: %.d*%d/%d\n", b[x].nguyen, b[x].ps.tu, b[x].ps.mau);
//			}
//			break;
//		case 20:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				getMixedNumberEven(b, n);
//			}
//			break;
//		case 21:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				getIndexMaxMinMixedArray(b, n);
//			}
//			break;
//		case 22:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				do
//				{
//					menu2();
//					printf("Chon kieu ghi File: ");
//					scanf("%d", &secondChoose);
//					switch (secondChoose)
//					{
//					case 1:
//						getConvertMixToFracArray(b, n);
//						writeFileFracArray(fo, b, n);
//						printf("Ghi File than cong!!\n");
//						break;
//					case 2:
//						writeFileMixedArray(fo, b, n);
//						printf("Ghi File than cong!!\n");
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
//		case 0:
//			delete b;
//			delete c;
//			printf("\tHave a nice day sir!!");
//			return 0;
//		default:
//			printf("Khong co su lua chon do!!\n ");
//			break;
//		}
//	} while (choose != 0);
//	getch();
//}
