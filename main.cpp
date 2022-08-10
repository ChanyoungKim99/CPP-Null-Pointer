#include <iostream>

void MyFunction(int* p)
{
	std::cout << "Pointer" << std::endl;
}

void MyFunction(int x)
{
	std::cout << "Integer" << std::endl;
}

int main()
{
	// Overloading된 함수
	MyFunction(0);

	// ambiguous error (모호한 에러) 가 발생할 수도 있다

	MyFunction(nullptr);
	// Null Pointer
}