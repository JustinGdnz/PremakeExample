#include "Vector2.h"

Vector2::Vector2(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector2::Vector2()
{
	x = 0;
	y = 0;
}

Vector2 Vector2::Zero()
{
	return Vector2(0, 0);
}

Vector2 Vector2::operator+(Vector2 other)
{
	return Vector2(x + other.x, y + other.y);
}
