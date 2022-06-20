
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE han = GetStdHandle(STD_OUTPUT_HANDLE);
	int height = 13;
	int width = 38;
	int stars = 0;
	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			if (h < 9 && w < 18)
			{
				if ((h - 1) % 2 == 0 && w % 2 == 0 && h < 17 && w > 0 && stars < 50 || h > 0 && h % 2 == 0 && h < 16 && w > 1 && w % 3 == 0 && stars < 50)
				{
					SetConsoleTextAttribute(han, 151);
					cout << "*";
					SetConsoleTextAttribute(han, 153);
					cout << (char)178;
					stars++;
				}
				else if (w < 18)
				{
					SetConsoleTextAttribute(han, 153);
					cout << (char)178 << (char)178;
				}
			}
			else if (h % 2 == 0)
			{
				SetConsoleTextAttribute(han, 12 * 15 + 24);
				cout << (char)178 << (char)178;
			}
			else
			{
				SetConsoleTextAttribute(han, 119);
				cout << (char)178 << (char)178;
			}
		}
		cout << "\n";
	}
	SetConsoleTextAttribute(han, 0);
}