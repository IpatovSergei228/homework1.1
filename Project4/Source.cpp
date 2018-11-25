/*Дано натуральное (целое неотрицательное) число, а и целое положительное число d. Вычислить частное q и остаток r при делении, а на d*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int y, z, a = 5, b = 10;
	y = a / b;
	z = a % b;
	printf("целое число: %d \nостаток: %d\n", y, z);
	system("pause");
}*/
/*Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y, иначе возвращает y-x*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int sum, x, y;
	printf("введите х:");
	scanf_s("%d", &x);
	printf("введите y:");
	scanf_s("%d", &y);
	if (x > y) {
		sum = x - y;
		printf("%d\n", sum);
	}
	else { printf("y > x\n"); }
	system("pause");
}*/
/*Напишите функцию double f(double x, double y), которая возвращает x/y, если x больше y, иначе возвращает y/x. Предполагается, что значения параметров больше нуля.  */
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	float sum, x, y;
	printf("введите х:");
	scanf_s("%f", &x);
	printf("введите y:");
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
/*Напишите функцию double f(double x, double y, double z), которая возвращает m*n/k, где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел. Предполагается, что значения параметров больше нуля*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	float  x, y, z, k, n, m, a;
	printf("введите х:");
	scanf_s("%f", &x);
	printf("введите y:");
	scanf_s("%f", &y);
	printf("введите z:");
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
/*Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c.
*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int  a, b, c, min;
	printf("введите a:");
	scanf_s("%d", &a);
	printf("введите b:");
	scanf_s("%d", &b);
	printf("введите c:");
	scanf_s("%d", &c);
	if (a < b && a < c) { min = a; }
	if (b < a && b < c) { min = b; }
	if (c < a && c < b) { min = c; }
	printf("%d\n", min);
	system("pause");
}*/
/*Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c.*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int  a, b, c, min;
	printf("введите a:");
	scanf_s("%d", &a);
	printf("введите b:");
	scanf_s("%d", &b);
	printf("введите c:");
	scanf_s("%d", &c);
	if (a > b && a > c) { min = a; }
	if (b > a && b > c) { min = b; }
	if (c > a && c > b) { min = c; }
	printf("%d\n", min);
	system("pause");
}*/
/*
Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2+у2= z2, иначе возвращает false.
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