#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100
void deleteIndex(char s[], int index)// xoa phan tu o vi tri nao do
{
	int len = strlen(s);// lm 1 bien tam 
	for (int i = index; i < len; i++)
	{
		s[i] = s[i + 1];// cho chay vong for neu ma tim thay thi cai phan tu tiep theo ghi de len
	}
	s[len - 1] = '\0';// phan tu cuoi =NULL
}
void deleteExtraSpace(char s[])// Xoa khoang trang thua
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] == ' ' && s[i + 1] == ' ')// neu ma co 2 vi tri lien tiep nhau ma la khoang trang 
		{
			deleteIndex(s, i);// xoa o cai vi tri thu i di
			i--;// pai co i-- boi vi sau khi ghi de ki tu truoc len ki tu sau thi cai phan tu cuoi no se ve null va luc do vong for chay lai i sẽ 
			// ko đc tăng lên bởi vì nếu nó tăng lên thì nó tạo ra khoảng trắng dư ở cuối mà lúc cái đk 2 khoảng trắng liên tiếp sẽ ko chạy 
			// nếu rùa thì nó còn dư 1 khoảng trắng sẽ chạy xuống dòng xóa trắng cuối nếu mà xui ở cuối có số khoảng trắng >=2 thì sai 
		}
	}
	if (s[0] == ' ')
	{
		deleteIndex(s, 0);// nếu có khoảng trắng ở đầu thì xóa nó đi, truyền vào là cái idex nhá chứ ko pải s[i] vì truyền vậy sẽ là truyền cái giá trị nó vô cái hàm deleteIndex nó 
		// sẽ ko chạy vòng for mà dẫn đến sai kq
	}
	if (s[strlen(s) - 1] == ' ')
	{
		deleteIndex(s, strlen(s) - 1);// tương tự là xóa cuối nhớ là truyền vào index 
	}
}
//================================================= Doi chu dau thanh in va chu trong cau thanh thuong //=================================================
void LowerUper(char s[])
{
	int len = strlen(s);
	if (s[0] >= 97)
	{
		s[0] -= 32;
	}
	for (int i = 1; i < len; i++)
	{
		if (s[i - 1] == ' ' && s[i] >= 97)
		{
			s[i] -= 32;
			i++;
		}
		if (s[i - 1] == ' ' && s[i] <= 97)
		{
			continue;
		}
		else if (s[i] != ' ' && s[i] <= 90)
		{
			s[i] += 32;
		}

	}
}
int findName(char s[], char myString[])
{
	int len = strlen(s);
	int len2 = strlen(myString);
	int count = 0;
	for (int i = 0; i < len - len2; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (s[i + j] != myString[j])
			{
				i++;
				j = 0;
			}
			else
			{
				j++;
				i--;
			}
			if (j==len2)
			{
				return i;
			}
		}
	}
	return -1;
	/*for (int i = 0; i < len - len2; i++)
	{
		if (s[i + j] == myString[j])
		{
			j++;
			i--;
		}
		else
		{
			j = 0;
		}
	}
	return j;*/
}
int main()
{
	char string[MAX] = "  trAn ConG maNH ";
	char myString[MAX];

	deleteExtraSpace(string);
	LowerUper(string);
	puts(string);

	printf("Nhap ten muon tim: ");
	gets_s(myString);
	printf("%d", findName(string, myString));

	_getch();
}