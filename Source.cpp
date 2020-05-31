#include<iostream>
#include "Array.h"

using namespace std;

int main() {

	Array myArr = 3;
	myArr.FillArr();
	cout << "Max element: " << myArr.GetMaxElement() << endl;
	myArr.Print();

	Array arr2 = myArr;

	myArr.AddElement(25);
	myArr.DeleteElement(2);
	myArr.Print();
	myArr.AddElement(5);
	myArr.SortArr();
	myArr.Print();
	
	arr2.Print();

	system("pause");
	return 0;
}