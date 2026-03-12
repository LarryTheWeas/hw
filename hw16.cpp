//СТРУКТУРА.ПРЕПРОЦЕСОР
//======================
//
//Завдання:
//Описати структуру Student(прізвище, група, успішність(масив із 5 int)).Створити масив студентів і написати програму, що дозволяє :
//Динамічно змінювати розмір масиву;
//Виводити список відмінників(> 75 % відмінних оцінок);
//Виводити список двієчників(> 50 % оцінок 2 і 3).
#include <iostream>
#include <iomanip>
using namespace std;

#define MARKS 5
#define EXCELLENT 4
#define BAD 3

struct Student
{
	string p;
	int g;
	int m[MARKS];
};

void info(Student& s)
{
	cout << "Surname: ";
	getline(cin, s.p);

	cout << "Group: ";
	cin >> s.g;

	cout << "Marks: ";
	for (int i = 0; i < MARKS; i++) cin >> s.m[i];

	cin.ignore();
}

void show(Student& s)
{
	cout << left << setw(15) << s.p << setw(10) << s.g;

	for (int i = 0; i < MARKS; i++) cout << setw(5) << s.m[i];

	cout << endl;
}

void add(Student*& a, int& n)
{
	Student* b = new Student[n + 1];

	for (int i = 0; i < n; i++) b[i] = a[i];

	info(b[n]);

	delete[] a;
	a = b;
	n++;
}

void ex(Student* a, int n)
{
	cout << "Excellent students" << endl;

	for (int i = 0; i < n; i++)
	{
		int c = 0;

		for (int j = 0; j < MARKS; j++)
		{
			if (a[i].m[j] >= 10) c++;
		}

		if (c >= EXCELLENT) show(a[i]);
	}
}

void bad(Student* a, int n)
{
	cout << "Bad students" << endl;

	for (int i = 0; i < n; i++)
	{
		int c = 0;

		for (int j = 0; j < MARKS; j++)
		{
			if (a[i].m[j] <= 3) c++;
		}

		if (c >= BAD) show(a[i]);
	}
}

int main()
{
	Student* a = nullptr;
	int n = 0;
	int c;

	while (true)
	{
		cout << "1-add" << endl;
		cout << "2-excellent" << endl;
		cout << "3-bad" << endl;
		cout << "0-exit" << endl;

		cin >> c;
		cin.ignore();

		if (c == 1) add(a, n);
		if (c == 2) ex(a, n);
		if (c == 3) bad(a, n);
		if (c == 0) break;
	}

	delete[] a;

	return 0;
}