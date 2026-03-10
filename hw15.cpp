//№1
//Обробити інформацію про групу студентів, що містить прізвища, стать та середній бал успішності.
//Вивести повідомлення, чий підсумковий середній бал вище – юнаків чи дівчат.
//У структурі використовувати ключове слово typedef.
#include <iostream>
#include <iomanip>
#include <string>

//using namespace std;
//
//typedef struct
//{
//	string n;
//	char s;
//	float m;
//} Student;
//
//void info(Student& st)
//{
//	cout << "Surname: ";
//	getline(cin, st.n);
//	cout << "Sex(m/f): ";
//	cin >> st.s;
//	cout << "Avg mark: ";
//	cin >> st.m;
//	cin.ignore();
//}
//
//void show(Student& st)
//{
//	cout << left << setw(15) << st.n << setw(10) << st.s << setw(10) << st.m << endl;
//}
//
//int main()
//{
//	int n;
//	cout << "Count: ";
//	cin >> n;
//	cin.ignore();
//
//	Student* a = new Student[n];
//
//	for (int i = 0; i < n; i++) info(a[i]);
//
//	float sm = 0, sf = 0;
//	int cm = 0, cf = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i].s == 'm')
//		{
//			sm += a[i].m;
//			cm++;
//		}
//		else
//		{
//			sf += a[i].m;
//			cf++;
//		}
//	}
//
//	cout << endl;
//	cout << left << setw(15) << "Name" << setw(10) << "Sex" << setw(10) << "Mark" << endl;
//
//	for (int i = 0; i < n; i++) show(a[i]);
//
//	float am = cm ? sm / cm : 0;
//	float af = cf ? sf / cf : 0;
//
//	if (am > af) cout << "Boys have higher avg" << endl;
//	else if (af > am) cout << "Girls have higher avg" << endl;
//	else cout << "Equal" << endl;
//
//	delete[] a;
//
//	return 0;
//}

//№2
//Авторинок : Марка, Модель, Рік випуску, Ціна, Торг, Дані авто(двигун / колір / кількість власників).
//Вимоги : Використовувати вкладені структури, масив(так як авто може бути декілька) та прототипи функцій.
//Вивести інформацію про автомобілі у вигляді таблиці
//struct Data
//{
//	string eng;
//	string col;
//	int own;
//};
//
//struct Car
//{
//	string mark;
//	string mod;
//	int year;
//	float price;
//	bool trade;
//	Data d;
//};
//
//void info(Car& c)
//{
//	cout << "Mark: ";
//	getline(cin, c.mark);
//
//	cout << "Model: ";
//	getline(cin, c.mod);
//
//	cout << "Year: ";
//	cin >> c.year;
//
//	cout << "Price: ";
//	cin >> c.price;
//
//	cout << "Trade(1/0): ";
//	cin >> c.trade;
//
//	cin.ignore();
//
//	cout << "Engine: ";
//	getline(cin, c.d.eng);
//
//	cout << "Color: ";
//	getline(cin, c.d.col);
//
//	cout << "Owners: ";
//	cin >> c.d.own;
//
//	cin.ignore();
//}
//
//void show(Car& c)
//{
//	cout << left
//		<< setw(10) << c.mark
//		<< setw(10) << c.mod
//		<< setw(10) << c.year
//		<< setw(10) << c.price
//		<< setw(10) << c.trade
//		<< setw(10) << c.d.eng
//		<< setw(10) << c.d.col
//		<< setw(10) << c.d.own
//		<< endl;
//}
//
//int main()
//{
//	int n;
//	cout << "Cars count: ";
//	cin >> n;
//	cin.ignore();
//
//	Car* a = new Car[n];
//
//	for (int i = 0; i < n; i++) info(a[i]);
//
//	cout << endl;
//	cout << left
//		<< setw(10) << "Mark"
//		<< setw(10) << "Model"
//		<< setw(10) << "Year"
//		<< setw(10) << "Price"
//		<< setw(10) << "Trade"
//		<< setw(10) << "Engine"
//		<< setw(10) << "Color"
//		<< setw(10) << "Own"
//		<< endl;
//
//	for (int i = 0; i < n; i++) show(a[i]);
//
//	delete[] a;
//
//	return 0;
//}

//№3
//Описати структуру Student(прізвище, група, успішність(масив із 5 int)).Створити масив студентів і написати програму, що дозволяє :
//Динамічно змінювати розмір масиву;
//Виводити список відмінників(> 75 % відмінних оцінок);
//Виводити список двієчників(> 50 % оцінок 2 і 3).
// от тут я не пон правильно сделал или нет
struct Student
{
	string n;
	string g;
	int m[5];
};

void info(Student& s)
{
	cout << "Name: ";
	getline(cin, s.n);

	cout << "Group: ";
	getline(cin, s.g);

	cout << "Marks: ";
	for (int i = 0; i < 5; i++) cin >> s.m[i];

	cin.ignore();
}

void show(Student& s)
{
	cout << left << setw(15) << s.n << setw(10) << s.g;

	for (int i = 0; i < 5; i++) cout << setw(5) << s.m[i];

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

		for (int j = 0; j < 5; j++)
		{
			if (a[i].m[j] >= 10) c++;
		}

		if (c >= 4) show(a[i]);
	}
}

void bad(Student* a, int n)
{
	cout << "Bad students" << endl;

	for (int i = 0; i < n; i++)
	{
		int c = 0;

		for (int j = 0; j < 5; j++)
		{
			if (a[i].m[j] <= 3) c++;
		}

		if (c >= 3) show(a[i]);
	}
}

int main()
{
	Student* a = nullptr;
	int n = 0;

	int c;

	while (true)
	{
		cout << "1-add 2-excellent 3-bad 0-exit" << endl;
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