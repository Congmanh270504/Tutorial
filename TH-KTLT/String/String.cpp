#include"string.h"

void menu()
{
	printf("=============================Menu================================\n");
	printf("|| **************************Init***************************** ||\n");
	printf("|| * 1.Nhap S1,S2 va xuat ra man hinh                        * ||\n");
	printf("|| * 2.Doc S1,S2 tu File va xuat ra man hinh                 * ||\n");
	printf("|| **************************Sum***************************  * ||\n");
	printf("|| * 3.Xem chuoi S1 co chua so khong                         * ||\n");
	printf("|| * 4.Xoa chuoi s1 trong s2                                 * ||\n");
	printf("|| * 5.Tong cac so co chu so dau la chu so le                * ||\n");

	printf("|| **************************WriteFile************************ ||\n");
	printf("|| * 30.Ghi mang so phan so tu File                          * ||\n");
	printf("|| * 0.Thoat chuong trinh			             * ||\n");
	printf("|| ***************************End***************************** ||\n");
	printf("=================================================================\n");
}
void deleteEndline(char*& s)
{
	int len = strlen(s);
	if (s[len - 1] == '\n')
	{
		s[len - 1] = '\0';
	}
}
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void Input(char*& s1, char*& s2)
{
	printf("Nhap ten cho Character 1: ");
	fgets(s1, MaxSize, stdin);
	fflush(stdin);
	deleteEndline(s1);
	printf("Nhap ten cho Character 2: ");
	fgets(s2, MaxSize, stdin);
	fflush(stdin);
	deleteEndline(s2);
}
void Output(char* s1, char* s2)
{
	printf("Character 1 is: %s\n", s1);
	printf("Character 2 is: %s\n", s2);
}
void getvalueindex(char*& s, int& n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c\n", s[i]);
	}
}
void upper(char*& s, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= 97)
		{
			s[i] -= 32;
		}
	}
}
void uppername(char*& s, int& n)
{
	if (s[0] >= 97)
	{
		s[0] -= 32;
	}
	for (int i = 1; i < n; i++)
	{
		if (s[i - 1] == ' ' && s[i] >= 97)
		{
			s[i] -= 32;
		}

	}
}
void insertFirstName(char* s1, char* s2, int startPos)
{
	int lenFirstName = strlen(s1), lenSecondName = strlen(s2);
	if (lenFirstName + lenSecondName > MaxSize) return;
	if (startPos > lenFirstName)	startPos = lenFirstName;

	if (startPos < lenFirstName)
	{
		char* temp = new char[lenFirstName - startPos + 1];
		strcpy(temp, s1 + startPos);
		puts(temp);

		strcpy(s1 + startPos, s2);
		puts(s1);

		strcpy(s1 + startPos + lenSecondName, temp);
		puts(s1);
	}
	else
	{
		strcpy(s1 + startPos, s2);
		puts(s1);
	}
}
void readFile(const char* filename, char* s1, char* s2)
{
	FILE* fi = fopen(filename, "rt");
	if (!fi)
	{
		printf("Loi mo File!!\n");
		return;
	}

	fgets(s1, MaxSize, fi);
	fgets(s2, MaxSize, fi);
	fclose(fi);
}
void writeFile(const char* filename, char* s1, char* s2)
{
	FILE* fo = fopen(filename, "wt");
	if (!fo)
	{
		printf("Loi mo File!!\n");
		return;
	}
	/*fprintf(fo, "%s", s1);
	fprintf(fo, "%s", s2);*/
	fputs(s1, fo);
	fputs(s2, fo);
	fclose(fo);
}
int checkS1String(char*& s1)
{
	int len = strlen(s1);
	for (int i = 0; i < len; i++)
	{
		if (s1[i] >= '1' && s1[i] <= '9')
		{
			return 0;
		}
	}
	return 1;
}
void deleteString(char*& s, char*& subs)
{
	int len = strlen(s);
	int len2 = strlen(subs);

	if (!strstr(s, subs))
	{
		printf("Khong co chuoi %s trong %s\n", subs, s); return;
	}
	char* p = strstr(s, subs);
	int start = p - s;
	for (int i = start; i < len; i++)
	{
		s[i] = s[i + len2];
	}
	s[len - 1] = '\0';
	puts(s);
}
int isMatch(char* s, char* s2, int k)
{
	int len2 = strlen(s2);
	for (int i = 0; i < len2; i++)
	{
		if (s2[i] != s[k + i])
		{
			return 0;
		}
	}
	return 1;
}