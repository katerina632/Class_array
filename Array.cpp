#include "Array.h"

inline bool Array::IsValidPosition(int pos)
{
	return pos >= 0 && pos < size;
}

Array::Array()
{
	arr = nullptr;
	size = 0;
}

Array::Array(int size)
{
	this->size = size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

Array::~Array()
{
	if (arr != nullptr) {
		delete[] arr;
	}
}

Array::Array(const Array& other)
{
	this->size = other.size;
	this->arr = new int[size];
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = other.arr[i];
	}
}

void Array::FillArr()
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
	}
}

void Array::AddElement(int value)
{
	int* newArr = new int[size + 1];

	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}
	newArr[size] = value;

	delete[] arr;
	arr = newArr;
	++size;
}

void Array::DeleteElement(int pos)
{
	if (IsValidPosition(pos) == 1 && arr != nullptr) {

		--size;
		int* newArr = new int[size];
		for (int i = 0; i < size; i++) {
			if (i < pos - 1)
				newArr[i] = arr[i];
			else
				newArr[i] = arr[i + 1];
		}
		delete[] arr;
		arr = newArr;
	}
	else {
		cout << "Enter correct number!" << endl;
	}
}

int Array::GetMaxElement()
{
	int maxElement = 0;
	if (arr != nullptr) {
		maxElement = arr[0];
		for (int i = 0; i < size; i++) {
			if (arr[i] > maxElement) {
				maxElement = arr[i];
			}
		}
		return maxElement;
	}
	else
	{
		return 0;
	}
}

void Array::SortArr()
{
	if (arr != nullptr) {
		for (int i = 0; i < size - 1; i++)
			for (int j = 0; j < size - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
	}
}

void Array::Print() const
{
	cout << "Array (size=" << size << "): ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
