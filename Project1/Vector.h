#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // ������������� ���� �������
	void Print();// ����� �� �������

	void PushBack(int a);
	int PopBack();
	 
	void AddStart(int a);
	void DelStart();
	void AddIndex(int a, int index);
	void DelIndex(int index);

	void AddArr(int* mas, int N);

};

/*
��������� ��������� ������:
��������� 1 �������� �� ������ �������
���������� �� �������, ������ � �������� �������� ��� ��������
�������� �� �������
�������� ������� ��������

���������� ������� � ����� �������� �������!


*/