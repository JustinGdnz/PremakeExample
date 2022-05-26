#include <iostream>
#include "Class/Class.h"
#include "Vector2/Vector2.h"

int main()
{
#ifdef WINDOWS
	std::cout << "Hello Windows!\n";
#else
	std::cout << "Hello World!\n";
#endif

	Class A(25);
	Class B(75);

	A.showProp();
	B.showProp();

	Class C = A + B;

	C.showProp();

	Vector2 vecA = Vector2::Zero();
	Vector2 vecB(15, 15);

	vecA.x = 20;
	vecA.y = 20;


	Vector2 vecC = vecA + vecB;

	printf("VectorA: (%f, %f)\n", vecA.x, vecA.y);
	printf("VectorB: (%f, %f)\n", vecB.x, vecB.y);
	printf("VectorB: (%f, %f)\n", vecC.x, vecC.y);
}