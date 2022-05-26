#include "Class.h"
#include <iostream>

Class::Class(int prop)
{
	m_Property = prop;
}

void Class::showProp()
{
	printf("Property: %d\n", m_Property);
}

Class Class::operator+(Class& other)
{
	return Class(m_Property + other.m_Property);
}
