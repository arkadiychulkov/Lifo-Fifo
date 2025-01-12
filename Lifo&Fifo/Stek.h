#pragma once
#include "Array.h"

template<typename T>
class Stek
{
private:
	size_t len;
	Array<T> arr;
public:
	Stek(int len);
	void Clear();
	T Top();
	void Pop();
	void Push(T val);
};

template<typename T>
Stek<T>::Stek(int len) :arr(len), len(len) {
	try
	{
		for (size_t i = 0; i < len; i++)
		{
			T a;
			std::cin >> a;
			this->arr.Append(a);
		}
	}
	catch (const std::exception&)
	{
		throw std::invalid_argument("Invalid arg");
	}
}

template<typename T>
void Stek<T>::Clear() {
	arr.Clear();
}

template<typename T>
T Stek<T>::Top() {
	if (arr.Sizeoff() < 0) {
		throw std::underflow_error("empty");
	}
	return arr.Top();
}

template<typename T>
void Stek<T>::Pop() {
	if (arr.Sizeoff() < 0) {
		throw std::underflow_error("empty");
	}
	arr.Pop();
}

template<typename T>
void Stek<T>::Push(T val) {
	arr.Append(val);
}