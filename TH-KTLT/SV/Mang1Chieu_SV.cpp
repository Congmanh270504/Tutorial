//#include"Mang1Chieu_SV.h"
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
//	while ((c = getchar()) != '\n' &&c != EOF);
//}
//void menu() {
//	printf("\n");
//	printf("***************************Menu****************************\n");
//	printf("* 1.Nhap danh sach sinh vien                              *\n");
//	printf("* 2.Load danh sach sinh vien                              *\n");
//	printf("* 3.Xem danh sach sinh vien                               *\n");
//	printf("* 4.Sap xep SV theo ten                                   *\n");
//	printf("* 5.Tim SV theo MSSV (Tuyen tinh)                         *\n");
//	printf("* 6.Tim SV theo ten (Tuyen tinh)                          *\n");
//	printf("* 7.Tim SV theo ten (Nhi phan)                            *\n");
//	printf("* 0.Thoat chuong trinh			                  *\n");
//	printf("***************************End*****************************\n");
//}
//void nhapSoLuongSv(int &n)
//{
//	do
//	{
//		printf("\nNhap so luong sinh vien : ");
//		scanf("%d", &n);
//		fixScanf();
//		if (n <= 0)
//		{
//			printf("Moi ban nha lai! ");
//		}
//	} while (n <= 0);
//}
//void nhapTTSV(SinhVien &a)
//{
//	printf("Nhap MSSV: "); fflush(stdin); fgets(a.MSSV, sizeof(a.MSSV), stdin); deleteEndLine(a.MSSV);
//	printf("Nhap ho: "); fflush(stdin); fgets(a.ho, sizeof(a.ho), stdin); deleteEndLine(a.ho);
//	printf("Nhap ten lot: "); fflush(stdin); fgets(a.tenlot, sizeof(a.tenlot), stdin); deleteEndLine(a.tenlot);
//	printf("Nhap ten: "); fflush(stdin); fgets(a.ten, sizeof(a.ten), stdin); deleteEndLine(a.ten);
//	printf("Nhap DiemTB: "); fflush(stdin); scanf("%f", &a.diemTB); fixScanf();
//}
//void nhapMang1C_SV(SinhVien *&a, int &n)
//{
//	nhapSoLuongSv(n);
//	a = new SinhVien[n];
//	for (int i = 0; i < n; i++)
//	{
//		SinhVien temp;
//		nhapTTSV(temp);
//		a[i] = temp;
//	}
//}
//void docTTSV(FILE *fi, SinhVien &a)
//{
//	fscanf(fi, "%[^#]%*c%[^#]%*c%[^#]%*c%[^#]%*c%f\n", &a.MSSV, &a.ho, &a.tenlot, &a.ten, &a.diemTB);
//}
//void ghiTTSV(FILE *fo, SinhVien &a)// fo=file output
//{
//	fprintf(fo,"%-12s%-11s%-18s%-19s%-10.2f\n", a.MSSV, a.ho, a.tenlot, a.ten, a.diemTB);
//}
//void docMang1ChieuSoNguyen(const char*filename, SinhVien *&a, int &n)
//{
//	FILE *fi = fopen(filename, "rt");
//	if (!fi)
//	{
//		printf("Khong mo dc file!!");
//		return;
//	}
//	fscanf(fi, "%d\n", &n);
//	a = new SinhVien[n];
//	for (int i = 0; i < n; i++)
//	{
//		SinhVien temp;
//		docTTSV(fi, temp);
//		a[i] = temp;
//	}
//}
//void ghiMang1ChieuSoNguyen(const char*filename, SinhVien *&a, int &n)
//{
//	// nho la mo cai file dang moi no ko ghi de ma ghi ra 1 file khac 
//	FILE *fo = fopen(filename, "wt");// write text
//	if (!fo)
//	{
//		printf("Khong mo dc file!!");
//		return;
//	}
//	fprintf(fo,"%-5s%-13s%-11s%-21s%-11s%-10s\n", "STT", "MSSV", "HO", "TEN LOT", "TEN", "DIEM TB");
//	for (int i = 0; i < n; i++)
//	{// no se ghi theo dang dong 
//		fprintf(fo, "%-5d", i + 1);// thu tu
//		ghiTTSV(fo, a[i]);//ghi vo thoi
//	}
//	fclose(fo);
//}
//void xuatTTSV(SinhVien a)
//{
//	printf("%-12s %-11s %-18s %-19s %-10.2f", a.MSSV, a.ho, a.tenlot, a.ten, a.diemTB);
//}
//void xuatMang1Chieu_SV(SinhVien *a, int &n)
//{
//	printf("Danh sach sinh vien: \n");
//	printf("%-5s%-13s%-11s%-21s%-11s%-10s","STT","MSSV","HO","TEN LOT","TEN","DIEM TB");
//	for (int i = 0; i < n; i++)
//	{
//		printf("\n%-5d", i + 1);
//		xuatTTSV(a[i]);
//	}
//	printf("\n");
//}
//
//int findMSSV_InterchangeSort(SinhVien *a, int &n, char *pMSSV) {
//	for (int i = 0; i < n; i++)
//	{
//		if (strcmp(a[i].MSSV, pMSSV) == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int findName_InterchangeSort(SinhVien *a, int &n, char *pten) {
//	for (int i = 0; i < n; i++)
//	{
//		if (stricmp(a[i].ten, pten) == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int findName_BinarySort(SinhVien *a, int &n, char *pten)
//{
//	int left = 0, right = n - 1, mid;
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//		if (stricmp(a[mid].ten, pten) == 0)
//		{
//			return mid;
//		}
//		else if (stricmp(a[mid].ten, pten) > 0)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//}
//void swap(SinhVien &a, SinhVien &b)
//{
//	SinhVien temp = a;
//	a = b;
//	b = temp;
//}
//void intertchangeSortWithName(SinhVien *&a, int &n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (strcmp(a[i].ten, a[j].ten) == 0 && a[i].diemTB < a[j].diemTB)// neu cung ten thi xet den diem
//			{
//				swap(a[i], a[j]);
//			}
//			else if (strcmp(a[i].ten, a[j].ten) > 0)
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//	
//}
