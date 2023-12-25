//#include"CustomerList.h"
//
//int main() {
//	const char* fi = "input-CustomerList.txt";
//	const char *fo = "output-CustomerList.txt";
//
//	KhachHang* a = NULL;
//	int luachon, n;
//	long int result;
//	char watchroom[10], showtime[10], hoten[30];
//	getMoneyCustomer(a, n);
//	readFileCustomer(fi, a, n);
//	printf("\nDanh sach khach hang vua load tu FILE: \n");
//	prinfCustomerArray(a, n);
//	do
//	{
//		menu();
//		printf("\t\tNhap lua chon bai muon lam: ");
//		scanf("%d", &luachon);
//		fixScanf();
//		if (luachon < 0 || luachon>10)
//		{
//			printf("Khong co bai muon lam!!\n");
//		}
//		switch (luachon)
//		{
//		case 1:
//
//			printf("Khoan thanh toan cua khach hang: \n");
//			getMoneyCustomer(a, n);
//			prinfCustomerArray(a, n);
//
//			break;
//		case 2:
//			/*if (a == NULL)
//			{
//				printf("\t\tChua mo dan sach !! (Hay chon option 1 )\n");
//
//			}
//		else
//		{
//
//		}*/
//			if (!checkMoneyTheater(a, n))
//			{
//				printf("Vui long tinh tien cho moi khach hang!! (*Choose option 1)");
//			}
//			else
//			{
//				result = getRevenue(a, n);
//				printf("\t\tTong tien cua rap phim: %ld VND\n", result);
//			}
//			break;
//		case 3:
//			if (!checkMoneyTheater(a, n))
//			{
//				printf("Vui long tinh tien cho moi khach hang!! (*Choose option 1)");
//			}
//			else
//			{
//				getSumMoneyMovie(a, n);
//			}
//			break;
//		case 4:
//			printf("Nhap thong tin khach hang dat ve cua phong chieu: ");
//			gets_s(watchroom);
//			printf("Nhap thong tin khach hang dat ve cua  xuat chieu: ");
//			gets_s(showtime);
//			getInformationCustomer(a, n, watchroom, showtime);
//			break;
//		case 5:
//			if (!checkMoneyTheater(a, n))
//			{
//				printf("\nVui long tinh tien cho moi khach hang de sap xep!! (*Choose option 1)");
//			}
//			else
//			{
//				interchangeSortMoney(a, n);
//				prinfCustomerArray(a, n);
//			}
//			break;
//		case 6:
//			interchangeSortName(a, n);
//			prinfCustomerArray(a, n);
//			break;
//		case 7:
//			printf("Nhap ten khach hang can tim: ");
//			gets_s(hoten);
//			if (findNameInterchangeSort(a, n, hoten) != -1)
//			{
//				result = findNameInterchangeSort(a, n, hoten);
//				printf("Khach hang can tim: \n");
//				getTTKH(a[result]);
//			}
//			else
//			{
//				printf("Khong co ten khach hang: %s\n", hoten);
//			}
//			break;
//		case 0:
//			delete a;
//			return 0;
//		}
//	} while (luachon >= 0 && luachon <= 8);
//
//
//
//	_getch();
//}