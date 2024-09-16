#include "Vector.h"
#include<iostream>
#include<Windows.h>
using namespace std;

Vector::Vector()
{
	arr = nullptr;
	size = 0;
}

Vector::Vector(int s)
{
	size = s;
	arr = new int[size] {0};
}

Vector::~Vector()
{
	/*cout << "Destructor" << arr << endl;
	Sleep(3000);*/

	delete[]arr;
	size = 0;
	
}

void Vector::InputRand()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%41 - 20; // [-20 +20]
	}
}

void Vector::Print()
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n---------------------------------------------------\n";
}

void Vector::PushBack(int a)
{
	int* temp = new int[size + 1];  // содаем новый массив (тек размер +1)

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i]; // копируем текущие значени€ старого массива в новый массив
	}
	temp[size] = a; // инициализаци€ последнего элемента параметром метода

	delete[] arr; // удаление старого массива!

	arr = temp; // перенаправл€ем указатель в объекте на новый дин. массив
	size++;

}

int Vector::PopBack()
{
	int* temp = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	int el = arr[size - 1]; // достаем последний элемент старого массива ƒќ удалени€

	delete[] arr;
	arr = temp;
	size--;

	return el;
}

void Vector::AddStart(int a)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i+1] = arr[i];
	}
	temp[0] = a;
	delete[]arr;
	arr = temp;
	size++;
}

void Vector::DelStart()
{
	int* temp = new int[size - 1];
	for (int i = 0; i < size-1; i++)
	{
		temp[i] = arr[i+1];
	}
	delete[]arr;
	arr = temp;
	size--;
}

void Vector::AddIndex(int a, int index)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = index+1; i < size+1; i++)
	{
		temp[i] = arr[i-1];
	}
	temp[index] = a;
	delete[]arr;
	arr = temp;
	size++;
}

void Vector::DelIndex(int index)
{
	int* temp = new int[size - 1];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = index; i < size + 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr;
	arr = temp;
	size++;
}

void Vector::AddArr(int* mas, int N)
{
	int* temp = new int[size + N];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		temp[size+i] = mas[i];
	}
}