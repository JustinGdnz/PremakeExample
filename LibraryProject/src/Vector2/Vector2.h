#pragma once


class Vector2
{
public:
	Vector2(double x, double y);
	Vector2();

	~Vector2() = default;

public:
	static Vector2 Zero();
public:
	Vector2 operator+(Vector2 other);
public:
	double x, y;
};

