// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "windows.h"

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "a = ";
	cin >> a;
	b = static_cast<int>(a) / 10;
	c = static_cast<int>(a) % 10;
	cout << c << b << endl;
	system("pause");
	return 0;
}