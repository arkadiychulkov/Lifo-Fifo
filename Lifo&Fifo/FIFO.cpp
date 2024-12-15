#include "FIFO.h"
#include<iostream>

FIFO::FIFO(int len) :arr(len), len(len) {
	for (size_t i = 0; i < len; i++)
	{
		int a;
		std::cin >> a;
		this->arr.Append(a);
	}
}

void FIFO::Clear() {
	this->arr.Clear();//
}

int FIFO::Top() {
	return this->arr.Topfifo();
}

void FIFO::Pop() {
	this->arr.Popfifo();
}

void FIFO::Push(int val) {
	this->arr.Append(val);
	len++;
}