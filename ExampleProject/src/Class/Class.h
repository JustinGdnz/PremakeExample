#pragma once

class Class
{
public:
	Class(int prop);
	~Class() = default;

	void showProp();

	Class operator+(Class& other);

private:
	int m_Property;
};

