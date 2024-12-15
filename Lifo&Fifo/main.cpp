#include "Stek.h"
#include "FIFO.h"
#include<iostream>

int main() {
	//Stek stek1(5);
	//std::cout << stek1.Top() << "\n";
	//stek1.Pop();
	//std::cout << stek1.Top() << "\n";
	//stek1.Push(5);
	//std::cout << stek1.Top() << "\n";
	//stek1.Clear();
	//std::cout << stek1.Top() << "\n";

	FIFO stek2(5);
	std::cout << stek2.Top() << "\n";
	stek2.Pop();
	std::cout << stek2.Top() << "\n";
	stek2.Push(5);
	std::cout << stek2.Top() << "\n";
	stek2.Clear();
	std::cout << stek2.Top() << "\n";

	return 0;
}