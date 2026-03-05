//№1
//Створити програму, у якій користувач задає розмір масивів, після чого формуються два одновимірні динамічні масиви,
//заповнені випадковими цілими числами в діапазоні від - 10 до 10; масиви необхідно відсортувати за зростанням,
//а потім реалізувати функцію, яка об’єднує ці два впорядковані масиви в один новий динамічний масив, упорядкований за спаданням;
//Усі операції(створення, сортування, об’єднання та вивід) обов’язково виконувати через окремі функції з використанням посилань для передачі масивів і зміни їхніх значень без копіювання.
#include <iostream>
using namespace std;

//void cr(int*& a, int n)
//{
//	a = new int[n];
//}
//
//void fl(int*& a, int n)
//{
//	for (int i = 0; i < n; i++) a[i] = rand() % 21 - 10;
//}
//
//void sa(int*& a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				int t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//}
//
//void pr(int*& a, int n)
//{
//	for (int i = 0; i < n; i++) cout << a[i] << " ";
//	cout << endl;
//}
//
//void mg(int*& a, int n, int*& b, int m, int*& c, int& k)
//{
//	k = n + m;
//	c = new int[k];
//
//	for (int i = 0; i < n; i++) c[i] = a[i];
//	for (int i = 0; i < m; i++) c[n + i] = b[i];
//
//	for (int i = 0; i < k - 1; i++)
//	{
//		for (int j = i + 1; j < k; j++)
//		{
//			if (c[i] < c[j])
//			{
//				int t = c[i];
//				c[i] = c[j];
//				c[j] = t;
//			}
//		}
//	}
//}
//
//int main()
//{
//	srand(time(0));
//
//	int n, m;
//	cin >> n >> m;
//
//	int* a;
//	int* b;
//
//	cr(a, n);
//	cr(b, m);
//
//	fl(a, n);
//	fl(b, m);
//
//	sa(a, n);
//	sa(b, m);
//
//	pr(a, n);
//	pr(b, m);
//
//	int* c;
//	int k;
//
//	mg(a, n, b, m, c, k);
//
//	pr(c, k);
//
//	delete[] a;
//	delete[] b;
//	delete[] c;
//
//	return 0;
//}

//№2
//Реалізувати функцію перетворення двовимірного динамічного масиву в одновимірний(лінійне розміщення елементів у пам’яті)

//void ln(int**& a, int r, int c, int*& b)
//{
//	b = new int[r * c];
//	int k = 0;
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			b[k] = a[i][j];
//			k++;
//		}
//	}
//}
//
//int main()
//{
//	int r, c;
//	cin >> r >> c;
//
//	int** a = new int* [r];
//	for (int i = 0; i < r; i++)
//	{
//		a[i] = new int[c];
//		for (int j = 0; j < c; j++) cin >> a[i][j];
//	}
//
//	int* b;
//
//	ln(a, r, c, b);
//
//	for (int i = 0; i < r * c; i++) cout << b[i] << " ";
//
//	for (int i = 0; i < r; i++) delete[] a[i];
//	delete[] a;
//	delete[] b;
//
//	return 0;
//}
//№3
//Генерація надійного пароля через динамічний масив.
//Розробити програму, в якій користувач вводить бажану довжину пароля, після чого виконується перевірка коректності введення
//(мінімальна довжина — 8 символів); реалізувати генерацію пароля за допомогою динамічного масиву символів із використанням
//великих і малих літер латинського алфавіту, цифр та спеціальних символів, забезпечивши наявність принаймні одного символу кожного типу та
//вивести згенерований пароль на екран.Усю логіку перевірки, генерації, заповнення та виводу реалізувати через окремі функції з
//використанням посилань для передачі масиву та параметрів, щоб уникнути копіювання даних.

using namespace std;

bool ck(int n)
{
	if (n >= 8) return true;
	return false;
}

void gn(char*& p, int n)
{
	p = new char[n];

	char l[] = "abcdefghijklmnopqrstuvwxyz";
	char u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char d[] = "0123456789";
	char s[] = "!@#$%^&*";

	p[0] = l[rand() % 26];
	p[1] = u[rand() % 26];
	p[2] = d[rand() % 10];
	p[3] = s[rand() % 8];

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
	int t = 70;

	for (int i = 4; i < n; i++)
	{
		p[i] = a[rand() % t];
	}

	for (int i = 0; i < n - 1; i++)
	{
		int j = rand() % n;
		char x = p[i];
		p[i] = p[j];
		p[j] = x;
	}
}

void pr(char*& p, int n)
{
	for (int i = 0; i < n; i++) cout << p[i];
	cout << endl;
}

int main()
{
	srand(time(0));

	int n;
	cin >> n;

	if (!ck(n))
	{
		cout << "Error";
		return 0;
	}

	char* p;

	gn(p, n);

	pr(p, n);

	delete[] p;

	return 0;
}