#include "pch.h"
#include "Body.h"
#include <iostream>
#include "Cone.h"

Cone::Cone(double x, double y, double z)
	: r(x) ,
	  l(z) ,
	  h(z)

{
}

double Cone::SurfaceArea() const
{
	return 3, 14 * r*(r+l);
}
double Cone::Volume() const
{
	return 0,3*3,14*r*r*h;
}

std::ostream& Cone::Print(std::ostream& out) const
{
	return out << "Cone: r=" << r << ", l=" << l << ", h=" << h;
}
