//#include"CustomerList.h"
//void deleteEndLine(char s[])
//{
//	size_t len = strlen(s);
//	if (s[len - 1] == '\n')
//	{
//		s[len - 1] = '\0';
//	}
//}
//void fixScanf()
//{
//	char c;
//	while ((c = getchar()) != '\n' && c != EOF);
//}
//void menu()
//{
//	printf("\n");
//	printf("\t\t\t\t\t\t\t\t\t\t***************************Menu****************************\n");
//	//printf("\t\t\t\t\t\t\t\t\t\t* 1.         Load danh sach khach hang                    *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t* 1.      Khoan thanh toan cua khach hang                 *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t* 2.      Xem doanh thu cua rap phim                      *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t* 3.      Xuat ra doanh thu cua tung phim                 *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t* 4.      Xuat khach hang o phong chieu X va xuat chieu y *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t* 5.      Sap xep khach hang theo so tien phai tra        *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t* 6.      Sap xep khach hang theo ten				      *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t* 7.      Tim khach hang theo ten                         *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t* 0.Thoat chuong trinh			                  *\n");
//	printf("\t\t\t\t\t\t\t\t\t\t***************************End*****************************\n");
//}
//void setTTSV(Kh& a)// nhap TTKH
//{
//	printf("Nhap Ho va ten khach hang : "); fflush(stdin); fgets(a.name, sizeof(a.name), stdin); deleteEndLine(a.name);
//	do
//	{
//		printf("Nhap SDT: "); fflush(stdin); fgets(a.phoneNum, sizeof(a.phoneNum), stdin); deleteEndLine(a.phoneNum);
//		if (strlen(a.phoneNum) > 11)
//		{
//			printf("Sdt khong dung vui long nhap lai!!\n");
//		}
//	} while (strlen(a.phoneNum) > 11);
//	printf("Nhap ten phim: "); fflush(stdin); fgets(a.movieName, sizeof(a.movieName), stdin); deleteEndLine(a.movieName);
//
//	printf("\nNhap phong chieu: "); fflush(stdin); fgets(a.watchRoom, sizeof(a.watchRoom), stdin); deleteEndLine(a.watchRoom);
//
//	printf("\nNhap xuat chieu: "); fflush(stdin); fgets(a.showTime, sizeof(a.showTime), stdin); deleteEndLine(a.showTime);
//
//	printf("\nNhap so ve nguoi lon: "); fflush(stdin); scanf("%d", &a.adultTicket); fixScanf();
//
//	printf("\nNhap so ve tre em: "); fflush(stdin); scanf("%d", &a.kidTicket); fixScanf();
//
//	printf("\nNhap tong tien: "); fflush(stdin); scanf("%ld", &a.money); fixScanf();
//
//}
//void getTTKH(Kh& a)// xuat TTKH
//{
//	printf(" %-12s			%-11s	   %-18s %-19s                  %s                %-10.2d         %-10.2d        %-10.2ldVND", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//	//printf("    %s\t\t %s\t     %s\t %s\t\t      %s\t\t \t%d\t     %d\t\t %ld", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//}
//
//void getTTSVFile(FILE* fi, Kh& a)// doc TTKH
//{
//	fscanf(fi, "%[^#]%*c %[^#]%*c %[^#]%*c %[^#]%*c %[^#]%*c %d /%d /%ld \n", &a.name, &a.phoneNum, &a.watchRoom, &a.movieName, &a.showTime, &a.adultTicket, &a.kidTicket, &a.money);
//
//}
//void updateTTSVFile(FILE* fo, Kh& a)// ghi THKH
//{
//	fprintf(fo, "%-12s %-11s %-18s %-19s %-10.2d %-10.2d %-10.2d %-10.2ld\n", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//}
//void fixTTSVLongName(Kh& a)// xuat TTKH vs ten dai hon 17
//{
//	printf("     %-12s		%-11s	   %-18s %-19s                  %s	        %-10.2d         %-10.2d        %-10.2ldVND", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//
//	//printf("    %s\t %s\t     %s\t %s\t  \t %s\t\t \t%d\t     %d\t\t %ld", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//}
//void fixTTSVLongMoiveName(Kh& a)
//{
//	printf("     %-12s			%-11s	   %-18s %-19s            %s                %-10.2d         %-10.2d        %-10.2ldVND", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//}
//void fixSon(Kh& a)
//{
//	printf("     %-12s			%-11s	   %-18s %-19s               %s                 %-10.2d         %-10.2d        %-10.2ldVND", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//}
//void fixTan(Kh& a)
//{
//	printf("     %-12s			%-11s	   %-18s %-19s       %s                %-10.2d         %-10.2d        %-10.2ldVND", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//}
//void fixQuy(Kh& a)
//{
//	printf("     %-12s			%-11s	   %-18s %-19s                  %s                 %-10.2d         %-10.2d        %-10.2ldVND", a.name, a.phoneNum, a.watchRoom, a.movieName, a.showTime, a.adultTicket, a.kidTicket, a.money);
//}
//void readFileCustomer(const char* filename, Kh*& a, int& n)
//{
//	FILE* fi = fopen(filename, "rt");
//	if (!fi)
//	{
//		printf("Khong mo dc file!!");
//		return;
//	}
//	fscanf(fi, "%d\n", &n);
//
//	a = new Kh[n];
//	for (int i = 0; i < n; i++)
//	{
//		Kh temp;
//		getTTSVFile(fi, temp);
//		a[i] = temp;
//	}
//}
//void writeFileCustomer(const char* filename, Kh*& a, int& n)
//{
//	// nho la mo cai file dang moi no ko ghi de ma ghi ra 1 file khac 
//	FILE* fo = fopen(filename, "wt");// write text
//	if (!fo)
//	{
//		printf("Khong mo dc file!!");
//		return;
//	}
//	fprintf(fo, "%-12s %-11s %-18s %-19s %-10.2d %-10.2d %-10.2d %-10.2ld\n", "STT", "HO TEN KH", "SDT", "PHONG CHIEU", "TEN PHIM", "XUAT CHIEU", "VE NGUOI LON", "VE TRE EM", "THANH TIEN");
//	for (int i = 0; i < n; i++)
//	{// no se ghi theo dang dong 
//
//		fprintf(fo, "%-5d", i + 1);// thu tu
//		updateTTSVFile(fo, a[i]);//ghi vo thoi
//
//	}
//	fclose(fo);
//}
//
//void prinfCustomerArray(Kh* a, int& n)
//{
//	printf("%-2s    %-11s                      %-18s %-19s%-12s                         %-11s     %-18s %-19s %s", "STT", "HO TEN KH", "SDT", "PHONG CHIEU", "TEN PHIM", "XUAT CHIEU", "VE NGUOI LON", "VE TRE EM", "THANH TIEN");
//	//printf("%s   %s\t\t\t %s\t\t %s\t %s\t\t \t  %s \t %s\t %s\t %s ", "STT", "HO TEN KH", "SDT", "PHONG CHIEU", "TEN PHIM", "XUAT CHIEU", "VE NGUOI LON", "VE TRE EM", "THANH TIEN");
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 4)
//		{
//			printf("\n%d ", i + 1);
//			fixQuy(a[i]);
//		}
//		else if (i == 7)
//		{
//			printf("\n%d ", i + 1);
//			fixSon(a[i]);
//		}
//		else if (i == 8)
//		{
//			printf("\n%d ", i + 1);
//			fixTan(a[i]);
//
//		}
//		else if (strlen(a[i].name) > 17)
//		{
//			printf("\n%d ", i + 1);
//			fixTTSVLongName(a[i]);
//		}
//		else if (strlen(a[i].movieName) >= 22)
//		{
//			printf("\n%d ", i + 1);
//			fixTTSVLongMoiveName(a[i]);
//		}
//		else
//		{
//			printf("\n%-5d ", i + 1);
//			getTTKH(a[i]);
//
//		}
//
//	}
//	printf("\n");
//}
//int checkMoneyTheater(Kh*& a, int& n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i].money == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int getMoney(Kh& a)
//{
//
//	return a.kidTicket * 20000 + a.adultTicket * 40000;
//}
//void getMoneyCustomer(Kh*& a, int& n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		a[i].money = getMoney(a[i]);
//	}
//}
//int getRevenue(Kh*& a, int& n)
//{
//	long int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[i].money;
//	}
//	return sum;
//}
//int checkMoneyMovieName(Kh*& a, int& n, char* movieName)// cung ten thi cong tien -> tra ve tien 
//{
//	long int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (strstr(a[i].movieName, movieName))
//		{
//			sum += a[i].money;
//		}
//	}
//	return sum;
//}
//int getMovieNameTime(Kh*& a, int& n, char* movieName)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (strstr(a[i].movieName, movieName))
//		{
//			count++;
//		}
//	}
//	if (count > 1)
//	{
//		return 0;
//	}
//	return 1;
//}
//void getSumMoneyMovie(Kh*& a, int& n)
//{
//	long int sum = 0;
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (!getMovieNameTime(a, n, a[i].movieName))
//		{
//			if (j == 1)
//			{
//				continue;
//			}
//			sum = checkMoneyMovieName(a, n, a[i].movieName);
//			printf("Tong doanh thu cua phim '%s': % ld VND\n", a[i].movieName, sum);// loi neu cung ten phim 
//			j++;
//		}
//		else
//		{
//			printf("Tong doanh thu cua phim '%s': % ld VND\n", a[i].movieName, a[i].money);
//		}
//	}
//}
//void getInformationCustomer(Kh*& a, int& n, char* watchroom, char* showtime)
//{
//	int* b = new int[n];
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (strstr(a[i].watchRoom, watchroom) && strstr(a[i].showTime, showtime))
//		{
//			b[j] = i;
//			j++;
//		}
//	}
//	printf("Thong tin khach hang can tim:\n ");
//	for (int i = 0; i < j; i++)
//	{
//		getTTKH(a[b[i]]);
//		printf("\n");
//	}
//	if (j == 0)
//	{
//		printf("Khong co khach hang cua phong chieu %s va xuat chieu %s !!\n", watchroom, showtime);
//	}
//}
//void swap(Kh& a, Kh& b)
//{
//	Kh temp = a;
//	a = b;
//	b = temp;
//}
//void interchangeSortMoney(Kh*& a, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++) {
//			if (a[i].money < a[j].money)
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//void interchangeSortName(Kh*& a, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++) {
//			if (stricmp(a[i].name, a[j].name) > 0)
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//int findNameInterchangeSort(Kh*& a, int& n, char* name)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (stricmp(a[i].name, name) == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}