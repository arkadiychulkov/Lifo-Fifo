#include "Stek.h"
#include "FIFO.h"
#include<iostream>


int main() {
	try
	{
		Stek<int> stek1(0);
		std::cout << stek1.Top() << "\n";
		stek1.Pop();
		std::cout << stek1.Top() << "\n";
		stek1.Push(5);
		std::cout << stek1.Top() << "\n";
		stek1.Clear();
		std::cout << stek1.Top() << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}

	/*FIFO stek2(5);
	std::cout << stek2.getSize() << "\n";
	std::cout << stek2.Top() << "\n";
	stek2.Pop();
	std::cout << stek2.Top() << "\n";
	stek2.Push(5);
	std::cout << stek2.Top() << "\n";
	stek2.Clear();
	std::cout << stek2.Top() << "\n";*/

	return 0;
}