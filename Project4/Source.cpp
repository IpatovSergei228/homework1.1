/*���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d. ��������� ������� q � ������� r ��� �������, � �� d*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int y, z, a = 5, b = 10;
	y = a / b;
	z = a % b;
	printf("����� �����: %d \n�������: %d\n", y, z);
	system("pause");
}*/
/*�������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int sum, x, y;
	printf("������� �:");
	scanf_s("%d", &x);
	printf("������� y:");
	scanf_s("%d", &y);
	if (x > y) {
		sum = x - y;
		printf("%d\n", sum);
	}
	else { printf("y > x\n"); }
	system("pause");
}*/
/*�������� ������� double f(double x, double y), ������� ���������� x/y, ���� x ������ y, ����� ���������� y/x. ��������������, ��� �������� ���������� ������ ����.  */
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	float sum, x, y;
	printf("������� �:");
	scanf_s("%f", &x);
	printf("������� y:");
	scanf_s("%f", &y);
	if (x > y) {
		sum = x / y;
		printf("%f\n", sum);
	}
	else {
		sum = y / x;
		printf("%f\n", sum);
	}
	system("pause");
}*/
/*�������� ������� double f(double x, double y, double z), ������� ���������� m*n/k, ��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ����*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	float  x, y, z, k, n, m, a;
	printf("������� �:");
	scanf_s("%f", &x);
	printf("������� y:");
	scanf_s("%f", &y);
	printf("������� z:");
	scanf_s("%f", &z);
	if (y < x && y < z) { k = y; }
	if (z < x && z < y) { k = z; }
	if (x < z && x < y) { k = x; }

	if (y > x && y > z) { n = y; }
	if (z > x && z > y) { n = z; }
	if (x > z && x > y) { n = x; }

	if (x <= y && y <= z) { m = y; }
	if (x <= z && z <= y) { m = z; }
	if (z <= x && x <= y) { m = x; }
	a = m * (n / k);
	printf("%f\n", a);
	system("pause");
}*/
/*�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.
*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int  a, b, c, min;
	printf("������� a:");
	scanf_s("%d", &a);
	printf("������� b:");
	scanf_s("%d", &b);
	printf("������� c:");
	scanf_s("%d", &c);
	if (a < b && a < c) { min = a; }
	if (b < a && b < c) { min = b; }
	if (c < a && c < b) { min = c; }
	printf("%d\n", min);
	system("pause");
}*/
/*�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int  a, b, c, min;
	printf("������� a:");
	scanf_s("%d", &a);
	printf("������� b:");
	scanf_s("%d", &b);
	printf("������� c:");
	scanf_s("%d", &c);
	if (a > b && a > c) { min = a; }
	if (b > a && b > c) { min = b; }
	if (c > a && c > b) { min = c; }
	printf("%d\n", min);
	system("pause");
}*/
/*
�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2+�2= z2, ����� ���������� false.
*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	float  x = 3, y = 4;
	bool z = 7;
	x = pow(x, 2);
	y = pow(y, 2);
	z = pow(z, 2);
	if (x + y == z)
	{
		z = true;
		printf("%f\n", z);
	}
	else { z = false;
	printf("%f\n", z);
	}
	system("pause");
}*/