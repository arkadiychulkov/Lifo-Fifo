#include "Stek.h"
#include<iostream>

int main() {
	Stek stek1(5);
	std::cout << stek1.Top() << "\n";
	stek1.Pop();
	std::cout << stek1.Top() << "\n";
	stek1.Push(5);
	std::cout << stek1.Top() << "\n";
	stek1.Clear();
	std::cout << stek1.Top() << "\n";

	return 0;
}