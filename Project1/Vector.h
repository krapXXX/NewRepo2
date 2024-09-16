#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // инициализаци€ случ числами
	void Print();// вывод на консоль

	void PushBack(int a);
	int PopBack();
	 
	void AddStart(int a);
	void DelStart();
	void AddIndex(int a, int index);
	void DelIndex(int index);

	void AddArr(int* mas, int N);

};

/*
ƒобавл€ем следующие методы:
ƒобаление 1 значени€ на начало массива
ƒобавление по индексу, индекс и значение передаем как параметр
”даление по индексу
удаление первого элемента

ƒобавление массива в конец текущего массива!


*/