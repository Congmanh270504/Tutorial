//#include"Mang1Chieu_SV.h"
//
//int main()
//{
//	const char* fi = "input-DanhSachSV.txt";
//	const char* fo = "output-DanhSachSV.txt";
//	SinhVien* a = NULL;
//	int n, luachon, result;
//	char pMSSV[15], pten[10];
//	//option(filename, a, n, luachon);
//	menu();
//	do
//	{
//		printf("Nhap lua chon bai muon lam: ");
//		scanf("%d", &luachon);
//		fixScanf();
//		if (luachon < 0 || luachon>10)
//		{
//			printf("Khong co bai muon lam!!\n");
//		}
//		switch (luachon)
//		{
//		case 1:
//			nhapMang1C_SV(a, n);
//			xuatMang1Chieu_SV(a, n);
//			break;
//		case 2:
//			docMang1ChieuSoNguyen(fi, a, n);
//			printf("Danh sach cac sinh vien vua load tu FILE: \n");
//			xuatMang1Chieu_SV(a, n);
//			break;
//		case 3:
//			printf("Danh sach cac sinh vien:\n");
//			xuatMang1Chieu_SV(a, n);
//			break;
//		case 4:
//			if (a == NULL)
//			{
//				printf("Mang SV chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");
//
//			}
//			else
//			{
//				intertchangeSortWithName(a, n);
//				xuatMang1Chieu_SV(a, n);
//				ghiMang1ChieuSoNguyen(fo, a, n);
//			}
//			break;
//		case 5:
//			if (a == NULL)
//			{
//				printf("Mang SV chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");
//			}
//			else {
//				printf("Nhap MSSV muon tim: ");
//				fflush(stdin);
//				gets_s(pMSSV);
//				printf("Danh sach cac sinh vien co MSSS:%s la:\n", pMSSV);
//				result = findMSSV_InterchangeSort(a, n, pMSSV);
//				if (result != -1)
//				{
//					xuatTTSV(a[result]);
//				}
//				else
//				{
//					printf("Khong co thong tin Sv!! ");
//				}
//			}
//			break;
//		case 6:
//			if (a == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");
//			}
//			else {
//
//				printf("Nhap ten Sv muon tim: ");
//				fflush(stdin);
//				gets_s(pten);
//				printf("Danh sach cac sinh vien co ten %s la:\n", pten);
//				result = findName_InterchangeSort(a, n, pten);
//				if (result != -1)
//				{
//					xuatTTSV(a[result]);
//				}
//				else
//				{
//					printf("Khong co thong tin Sv!! ");
//				}
//			}
//			break;
//
//		case 7:
//			if (a == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");
//			}
//			else
//			{
//				intertchangeSortWithName(a, n);
//				xuatMang1Chieu_SV(a, n);
//				printf("Nhap ten muon tim: ");
//				fflush(stdin);
//				gets_s(pMSSV);
//				result = findName_BinarySort(a, n, pten);
//				if (result != -1)
//				{
//					xuatTTSV(a[result]);
//				}
//				else
//				{
//					printf("Khong co thong tin Sv!! ");
//				}
//			}
//			break;
//		case 0:
//			delete a;
//			return 0;
//		}
//	} while (luachon >= 0 && luachon <= 10);
//	_getch();
//}
