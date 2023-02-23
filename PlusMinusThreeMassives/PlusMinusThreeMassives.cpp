#include <iostream>

using namespace std;

void CreateMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 50 - 40;
	}
}
void PrintMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << ' ';
	}
	cout << endl;
}

void PlusMinusMassives(int* arr, int size, int* arr1, int* arr2)
{
	cout << "Массив положительных чисел: " << endl;

	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 0)
		{
			*(arr1 + i) = *(arr + i);
			cout << *(arr1 + i) << ' ';
		}
	}
	cout << endl;

	cout << "Массив отрицательных чисел: " << endl;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 0)
		{
			*(arr2 + i) = *(arr + i);
			cout << *(arr2 + i) << ' ';
		}
	}
}

int GetValue()
{
	int value;
	cin >> value;
	return value;
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));

	cout << "Введите длину массива: " << endl;
	int size = GetValue();

	int* arr = new int[size];
	int* arr1 = new int[size];
	int* arr2 = new int[size];

	CreateMassive(arr, size);
	PrintMassive(arr, size);

	PlusMinusMassives(arr, size, arr1, arr2);

	delete[] arr;
	delete[] arr1;
	delete[] arr2;

	return 0;
}