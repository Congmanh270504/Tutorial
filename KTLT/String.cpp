//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#define MAX 100
//// scanf neu la dang chuoi thi no chi lay toi ki tu khoang trang thoi 
//int countSpace(char s[])// Dem khoang trang trong chuoi 
//{
//	int count = 0;
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (s[i] == ' ')// neu ma vi tri do no bang space
//		{
//			count++;// tang bien dem
//		}
//	}
//	return count;
//}
//// *Luu y: khoang trang ki hieu la ' '
//void deleteIndex(char s[], int index)// xoa phan tu o vi tri nao do
//{
//	int len = strlen(s);// lm 1 bien tam 
//	for (int i = index; i < len; i++)
//	{
//		s[i] = s[i + 1];// cho chay vong for neu ma tim thay thi cai phan tu tiep theo ghi de len
//	}
//	s[len - 1] = '\0';// phan tu cuoi =NULL
//}
//void deleteExtraSpace(char s[])// Xoa khoang trang thua
//{
//	int len = strlen(s);
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == ' ' && s[i + 1] == ' ')// neu ma co 2 vi tri lien tiep nhau ma la khoang trang 
//		{
//			deleteIndex(s, i);// xoa o cai vi tri thu i di
//			i--;// pai co i-- boi vi sau khi ghi de ki tu truoc len ki tu sau thi cai phan tu cuoi no se ve null va luc do vong for chay lai i sẽ 
//			// ko đc tăng lên bởi vì nếu nó tăng lên thì nó tạo ra khoảng trắng dư ở cuối mà lúc cái đk 2 khoảng trắng liên tiếp sẽ ko chạy 
//			// nếu rùa thì nó còn dư 1 khoảng trắng sẽ chạy xuống dòng xóa trắng cuối nếu mà xui ở cuối có số khoảng trắng >=2 thì sai 
//		}
//	}
//	if (s[0] == ' ')
//	{
//		deleteIndex(s, 0);// nếu có khoảng trắng ở đầu thì xóa nó đi, truyền vào là cái idex nhá chứ ko pải s[i] vì truyền vậy sẽ là truyền cái giá trị nó vô cái hàm deleteIndex nó 
//		// sẽ ko chạy vòng for mà dẫn đến sai kq
//	}
//	if (s[strlen(s) - 1] == ' ')
//	{
//		deleteIndex(s, strlen(s) - 1);// tương tự là xóa cuối nhớ là truyền vào index 
//	}
//}
////================================================= Doi chu dau thanh in va chu trong cau thanh thuong //=================================================
//void LowerUper(char s[])
//{
//	int len = strlen(s);
//	if (s[0] >= 97)
//	{
//		s[0] -= 32;
//	}
//	for (int i = 1; i < len; i++)
//	{
//		if (s[i - 1] == ' ' && s[i] >= 97)
//		{
//			s[i] -= 32;
//			i++;
//		}
//		if (s[i - 1] == ' ' && s[i] <= 97)
//		{
//			continue;
//		}
//		else if (s[i] != ' ' && s[i] <= 90)
//		{
//			s[i] += 32;
//		}
//
//	}
//}
////================================================= Tim chuoi con trong chuoi cha =================================================
//int findName(char s[], char name[])
//{
//	if (strstr(s, name))
//	{
//		return 1;
//	}
//	return 0;
//}
////================================================= Tach chuoi ten ra khoi chuoi ho ten =================================================
//int findLastSpace(char s[])// lay ra dau cach cuoi cung
//{
//	int len = strlen(s);
//	for (int i = len; i >= 0; i--)
//	{
//		if (s[i] == ' ')
//		{
//			return i;
//		}
//	}
//}
//void getName(char name[], int lenName)
//{
//	printf("Ten nhan vat: ");
//	for (int i = 0; i < lenName; i++)
//	{
//		printf("%c", name[i]);
//	}
//}
//void detachedName(char s[], char name[MAX])// ham lay ra ten trong chuoi cha
//{
//	int len = strlen(s), j = 0;
//	int lastSpace = findLastSpace(s) + 1;
//	for (int i = lastSpace; i < len; i++)
//	{
//		name[j] = s[i];
//		j++;
//	}
//
//	//printf("%d\n", strlen(name));
//	int lenName = len - lastSpace;
//	getName(name, lenName);
//
//}
////================================================= Chen chuoi o vi tri x =================================================
//void insertString(char s[], char string2[], int x)
//{
//	int len = strlen(s) + strlen(string2), j = 0;// len= 16 la do dai cua 2 chuoi
//	s[len + 1] = '\0';// cai phan tu thu len+1 cho no la null
//	int place = strlen(string2);// do dai string 2 
//	/*if (x == strlen(s) )
//	{
//		for (int i = x + 1; i < len; i++) {
//			s[i] = string2[j];
//			j++;
//		}
//	}*/
//	for (int i = len; i >= x; i--)
//	{
//		s[i + place] = s[i];
//	}
//	for (int i = x; i < len; i++)
//	{
//		s[i] = string2[j];
//		j++;
//		if (j == place)
//		{
//			break;
//		}
//	}
//	puts(s);
//}
////================================================= Xoa 1 tu o vi tri X =================================================
//int checkString(char s[], char string2[])
//{
//	int len = strlen(s), j = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == string2[j])
//		{
//
//		}
//	}
//	return len;
//}
//void deleteString(char s[], char string2[])
//{
//	int len = strlen(s), j = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == string2[j])
//		{
//			s[i] = s[i + 1];
//			j++;
//		}
//	}
//	len = len - strlen(string2);
//	puts(s);
//}
////================================================= Nhap chuoi bat ki, liet ke moi ki tu xuat hien may lan =================================================
//int countChar(char s[], char a)// truyen cai chuoi va cai ki tu muon dem
//{
//	int count = 0, len = strlen(s);
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == a)
//		{
//			count++;// tim so lan ki tu do co trong chuoi 
//		}
//	}
//	return count;
//}
//void printfCountChar(char s[], char string2[])
//{
//	int len = strlen(string2);
//	for (int i = 0; i < len; i++)
//	{
//		if (string2[i] == ' ')
//		{
//			continue;// neu ma no la dau cach thi khoai dem 
//		}
//		if (countChar(string2, string2[i]) >= 2)
//		{
//			deleteIndex(string2, i);// de xem la cai chuoi co(Chuoi ma minh can so sanh) co ki tu nao trung nhau ko -> co thi delete no di 
//		}
//		if (string2[i] == '\0')// vi neu ko no in ra cai vi tri cuoi trong chuoi vi` vi tri cuoi cung cua chuoi~ la \0
//		{
//			break;
//		}
//		printf("So lan ki tu '%c' xuat hien trong chuoi %s: %d\n", string2[i], s, countChar(s, string2[i]));
//
//	}
//}
//
//int main()
//{
//	char string[MAX] = "  trAn ConG maNH ";
//	//=============================================================== Xoa khoang trang du trong chuoi ===========================================================================================
//	char myString[MAX];
//	int x;
//	/*printf("So luong khoang trang trong chuoi: %d\n", countSpace(string));
//		deleteExtraSpace(string);
//		printf("Sau khi xoa khoang trang %s\n", string);
//		printf("So luong khoang trang trong chuoi: %d\n", countSpace(string));*/
//
//		//=============================================================== Doi chu dau thanh in va chu trong cau thanh thuong =======================================================================
//	deleteExtraSpace(string);
//	LowerUper(string);
//	puts(string);
//	//=================================================================== Tim chuoi con trong chuoi cha =========================================================================================
//
//	printf("Nhap ten muon tim: ");
//	gets_s(myString);
//	if (findName(string, myString))
//	{
//		printf("Co ten %s trong chuoi %s !!", myString, string);
//	}
//	else
//	{
//		printf("Deo co ");
//	}
//	//=================================================================== Tach chuoi ten ra khoi chuoi ho ten =========================================================================================
//
//	//detachedName(string, myString);
//	//printf("%s", myString);
//	//========================================================================== Chen chuoi o vi tri x ===============================================================================================
//	/*printf("Nhap vi tri muon chen: ");
//	scanf("%d", &x);
//	getchar();*/
//	/*printf("Nhap chuoi muon chen: ");
//	gets_s(myString);*/
//
//	/*insertString(string, myString, x);*/
//
////================================================= Xoa 1 tu trong chuoi~ =================================================
//	/*printf("Nhap vi tri muon xoa: ");
//	scanf("%d", &x);
//	getchar();*/
//	/*printf("Nhap tu muon xoa: ");
//	gets_s(myString);
//
//	deleteString(string, myString);*/
//	//================================================= Nhap chuoi bat ki, liet ke moi ki tu xuat hien may lan =================================================
//	/*printf("Nhap chuoi: ");
//	gets_s(myString);
//	puts(myString);
//	printfCountChar(string, myString);*/
//
//
//
//
//	_getch();
//}