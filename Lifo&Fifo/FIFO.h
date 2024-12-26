#pragma once
#include "Array.h"
class FIFO
{
private://
	size_t len;
	Array<int> arr;
public:
	FIFO(int len);
	void Clear();
	int Top();
	void Pop();
	void Push(int val);
	int getSize();
};

