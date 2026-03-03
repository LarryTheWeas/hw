
//¹1
//Äàíî äâà ìàñèâè : À[M] ³ B[N](M ³ N ââîäÿòüñÿ ç êëàâ³àòóðè).
//Íåîáõ³äíî ñòâîðèòè òðåò³é ìàñèâ ì³í³ìàëüíî ìîæëèâîãî ðîçì³ðó,
//ó ÿêîìó ïîòð³áíî ç³áðàòè åëåìåíòè ìàñèâ³â A ³ B, ÿê³ íå º çàãàëüíèìè äëÿ íèõ, áåç ïîâòîðåíü.
//Òîáòî ïîòð³áíî ñôîðìóâàòè òðåò³é ìàñèâ, ùî ì³ñòèòü ò³ëüêè ò³ åëåìåíòè, ÿê³ óí³êàëüí³ äëÿ êîæíîãî ç äâîõ ìàñèâ³â, áåç äóáëþâàííÿ.
//
//Ïðèêëàä :
//	A = [1, 2, 3, 4]
//	B = [3, 4, 5, 6]
//	Ðåçóëüòàò : [1, 2, 5, 6]

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
//	¹2
//	Íàïèñàòè ôóíêö³þ, ÿêà îòðèìóº âêàç³âíèê íà äèíàì³÷íèé ìàñèâ ³ éîãî ðîçì³ð.
//	Ôóíêö³ÿ ïîâèííà âèäàëèòè ç ìàñèâó âñ³ ïàðí³ ÷èñëà ³ ïîâåðíóòè âêàç³âíèê íà íîâèé äèíàì³÷íèé ìàñèâ.

// int* removeEven(int* arr, int size, int& newSize)
// {
// 	newSize = 0;
// 	for (int i = 0; i < size; i++)
// 	{
// 		if (arr[i] % 2 != 0) newSize++;
// 	}

// 	int* newArr = new int[newSize];
// 	int j = 0;

// 	for (int i = 0; i < size; i++)
// 	{
// 		if (arr[i] % 2 != 0)
// 		{
// 			newArr[j] = arr[i];
// 			j++;
// 		}
// 	}

// 	return newArr;
// }

// int main()
// {
// 	int size;
// 	cin >> size;

// 	int* arr = new int[size];
// 	for (int i = 0; i < size; i++) cin >> arr[i];

// 	int newSize;
// 	int* result = removeEven(arr, size, newSize);

// 	for (int i = 0; i < newSize; i++) cout << result[i] << " ";

// 	delete[] arr;
// 	delete[] result;

// 	return 0;
// }
//	¹3
//	Ñòâîðèòè ôóíêö³þ äëÿ îäíîâèì³ðíîãî äèíàì³÷íîãî ìàñèâó, ùî äîçâîëÿº âñòàâëÿòè áëîê åëåìåíò³â(ö³ ÷èñëà âêàçóþòüñÿ êîðèñòóâà÷åì),
//	ïî÷èíàþ÷è ç ³íäåêñó ìàñèâó, ÿêèé âêàæå êîðèñòóâà÷.

// int* insertBlock(int* arr, int size, int index, int* block, int blockSize)
// {
// 	int* newArr = new int[size + blockSize];

// 	for (int i = 0; i < index; i++)
// 	{
// 		newArr[i] = arr[i];
// 	}

// 	for (int i = 0; i < blockSize; i++)
// 	{
// 		newArr[index + i] = block[i];
// 	}

// 	for (int i = index; i < size; i++)
// 	{
// 		newArr[i + blockSize] = arr[i];
// 	}

// 	return newArr;
// }

// int main()
// {
// 	int size;
// 	cin >> size;

// 	int* arr = new int[size];
// 	for (int i = 0; i < size; i++) cin >> arr[i];

// 	int index;
// 	cin >> index;

// 	int blockSize;
// 	cin >> blockSize;

// 	int* block = new int[blockSize];
// 	for (int i = 0; i < blockSize; i++) cin >> block[i];

// 	int* result = insertBlock(arr, size, index, block, blockSize);

// 	for (int i = 0; i < size + blockSize; i++) cout << result[i] << " ";

// 	delete[] arr;
// 	delete[] block;
// 	delete[] result;

// 	return 0;
// }
//	¹4
//	Íàïèñàòè ôóíêö³þ, ùî äîäàº ñòîâï÷èê äâîâèì³ðíîìó ìàñèâó â çàçíà÷åíó ïîçèö³þ.

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
