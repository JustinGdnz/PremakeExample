#include <iostream>
#include "Class/Class.h"

int main()
{
	std::cout << "Hello World!\n";

	Class A(25);
	Class B(75);

	A.showProp();
	B.showProp();

	Class C = A + B;

	C.showProp();
}