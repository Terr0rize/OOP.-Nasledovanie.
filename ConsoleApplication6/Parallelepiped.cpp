#include "pch.h"
#include "Parallelepiped.h"
#include "Body.h"
#include <iostream>

 Parallelepiped::Parallelepiped(double x, double y, double z)
	: m_x(x)
	, m_y(y)
	, m_z(z)
{
}

double Parallelepiped::SurfaceArea() const
{
	return 2*(m_x + m_y + m_z);
}
double Parallelepiped::Volume() const
{
	return m_x * m_y * m_z;
}

std::ostream& Parallelepiped::Print(std::ostream& out) const
{
	return out << "Parallelepiped: x=" << m_x << ", y=" << m_y << ", z=" << m_z;
}
