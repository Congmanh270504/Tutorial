#include<stdio.h>
#include<conio.h>
#include<string.h>

int getNumberAppearString(const char*& s, char b)
{
	int len = strlen(s);
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == b)
		{
			count++;
		}
	}
	return count;
}
void getALLNumberAppearString(const char*& s)
{
	int tmp;
	const char *c;
	for (int i = 0; i < 10; i++)
	{
		tmp = getNumberAppearString(s, i);
		printf("%d ", tmp);
	}
}

int main()
{
	const char* s = "lw4n88j12n1";
	puts(s);

	getALLNumberAppearString(s);
	//printf("%d", (int)s[0]);
	_getch();
}