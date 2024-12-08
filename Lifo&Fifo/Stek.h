#pragma once
#include "Array.h"
class Stek
{
private:
	size_t len;
	Array<int> arr;
public:
	Stek(int len);
	void Clear();
	int Top();
	void Pop();
	void Push(int val);
};

