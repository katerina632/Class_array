#pragma once
#include<iostream>
using namespace std;

class Array
{
	int* arr;
	int size;

	inline bool IsValidPosition(int pos);	

public:
	Array();
	
	Array(int size);	

	~Array();	

	Array(const Array& other);
	
	void FillArr();	

	void AddElement(int value);
	
	void DeleteElement(int pos);	

	int GetMaxElement();	

	void SortArr();
	
	void Print() const;	
};

