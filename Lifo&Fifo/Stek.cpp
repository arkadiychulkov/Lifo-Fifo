#include "Stek.h"
#include<iostream>

Stek::Stek(int len) :arr(len), len(len) {
	for (size_t i = 0; i < len; i++)
	{
		int a;
		std::cin >> a;
		this->arr.Append(a);
	}
}

void Stek::Clear() {
	this->arr.Clear();
}

int Stek::Top() {
    return this->arr.Top();
}

void Stek::Pop() {
	this->arr.Pop();
}

void Stek::Push(int val) {
	this->arr.Append(val);
    len++;
}