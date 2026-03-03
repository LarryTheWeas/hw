
//№1
//Дано два масиви : А[M] і B[N](M і N вводяться з клавіатури).
//Необхідно створити третій масив мінімально можливого розміру,
//у якому потрібно зібрати елементи масивів A і B, які не є загальними для них, без повторень.
//Тобто потрібно сформувати третій масив, що містить тільки ті елементи, які унікальні для кожного з двох масивів, без дублювання.
//
//Приклад :
//	A = [1, 2, 3, 4]
//	B = [3, 4, 5, 6]
//	Результат : [1, 2, 5, 6]

#include <iostream>
using namespace std;

//int main()
//{
//	int M, N;
//	cin >> M;
//	int* A = new int[M];
//	for (int i = 0; i < M; i++) cin >> A[i];
//
//	cin >> N;
//	int* B = new int[N];
//	for (int i = 0; i < N; i++) cin >> B[i];
//
//	int* C = new int[M + N];
//	int size = 0;
//
//	for (int i = 0; i < M; i++)
//	{
//		bool common = false;
//		for (int j = 0; j < N; j++)
//		{
//			if (A[i] == B[j]) common = true;
//		}
//		if (!common)
//		{
//			bool exists = false;
//			for (int k = 0; k < size; k++)
//			{
//				if (C[k] == A[i]) exists = true;
//			}
//			if (!exists)
//			{
//				C[size] = A[i];
//				size++;
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		bool common = false;
//		for (int j = 0; j < M; j++)
//		{
//			if (B[i] == A[j]) common = true;
//		}
//		if (!common)
//		{
//			bool exists = false;
//			for (int k = 0; k < size; k++)
//			{
//				if (C[k] == B[i]) exists = true;
//			}
//			if (!exists)
//			{
//				C[size] = B[i];
//				size++;
//			}
//		}
//	}
//
//	for (int i = 0; i < size; i++) cout << C[i] << " ";
//
//	delete[] A;
//	delete[] B;
//	delete[] C;
//
//	return 0;
//}
//	№2
//	Написати функцію, яка отримує вказівник на динамічний масив і його розмір.
//	Функція повинна видалити з масиву всі парні числа і повернути вказівник на новий динамічний масив.

int* removeEven(int* arr, int size, int& newSize)
{
	newSize = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) newSize++;
	}

	int* newArr = new int[newSize];
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			newArr[j] = arr[i];
			j++;
		}
	}

	return newArr;
}

int main()
{
	int size;
	cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++) cin >> arr[i];

	int newSize;
	int* result = removeEven(arr, size, newSize);

	for (int i = 0; i < newSize; i++) cout << result[i] << " ";

	delete[] arr;
	delete[] result;

	return 0;
}
//	№3
//	Створити функцію для одновимірного динамічного масиву, що дозволяє вставляти блок елементів(ці числа вказуються користувачем),
//	починаючи з індексу масиву, який вкаже користувач.

int* insertBlock(int* arr, int size, int index, int* block, int blockSize)
{
	int* newArr = new int[size + blockSize];

	for (int i = 0; i < index; i++)
	{
		newArr[i] = arr[i];
	}

	for (int i = 0; i < blockSize; i++)
	{
		newArr[index + i] = block[i];
	}

	for (int i = index; i < size; i++)
	{
		newArr[i + blockSize] = arr[i];
	}

	return newArr;
}

int main()
{
	int size;
	cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++) cin >> arr[i];

	int index;
	cin >> index;

	int blockSize;
	cin >> blockSize;

	int* block = new int[blockSize];
	for (int i = 0; i < blockSize; i++) cin >> block[i];

	int* result = insertBlock(arr, size, index, block, blockSize);

	for (int i = 0; i < size + blockSize; i++) cout << result[i] << " ";

	delete[] arr;
	delete[] block;
	delete[] result;

	return 0;
}
//	№4
//	Написати функцію, що додає стовпчик двовимірному масиву в зазначену позицію.

int** addColumn(int** arr, int rows, int cols, int position, int* column)
{
	int** newArr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		newArr[i] = new int[cols + 1];

		for (int j = 0; j < position; j++)
		{
			newArr[i][j] = arr[i][j];
		}

		newArr[i][position] = column[i];

		for (int j = position; j < cols; j++)
		{
			newArr[i][j + 1] = arr[i][j];
		}
	}

	return newArr;
}

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
		for (int j = 0; j < cols; j++) cin >> arr[i][j];
	}

	int position;
	cin >> position;

	int* column = new int[rows];
	for (int i = 0; i < rows; i++) cin >> column[i];

	int** result = addColumn(arr, rows, cols, position, column);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols + 1; j++) cout << result[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
		delete[] result[i];
	}

	delete[] arr;
	delete[] result;
	delete[] column;

	return 0;
}