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
	// Overloading�� �Լ�
	MyFunction(0);

	// ambiguous error (��ȣ�� ����) �� �߻��� ���� �ִ�

	MyFunction(nullptr);
	// Null Pointer
}