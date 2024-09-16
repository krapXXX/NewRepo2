#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	obj1.PushBack(100);
	obj1.Print();
	obj1.PushBack(200);
	obj1.Print();
	obj1.PopBack();
	obj1.Print();
	obj1.AddStart(0);
	obj1.Print();
	obj1.DelStart();
	obj1.Print();
	obj1.AddIndex(8, 0);
	obj1.Print();
	obj1.DelIndex(3);
	obj1.Print();
	int const N = 4;
	int mas[N] = { 1,2,3,4 };
	obj1.AddArr(mas, N);
	obj1.Print();

	/*int last = obj1.PopBack();
	obj1.Print();
	cout << "Last = " << last << endl;
	last = obj1.PopBack();
	obj1.Print();
	cout << "Last = " << last << endl;*/

}