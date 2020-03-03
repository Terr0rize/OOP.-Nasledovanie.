#include "pch.h"
#include "Body.h"
#include <iostream>
#include "Ball.h"
using namespace std;
Ball::Ball(double x)
	: r(x)
	
{
}
void vvod(double x)
{
	cout << "Введите радиус Шара" << endl;
	cin >> x;
}

double Ball::SurfaceArea() const
{
	return 3,14*r*r;
}
double Ball::Volume() const
{
	return 3,14*1,3*r*r;
}

std::ostream& Ball::Print(std::ostream& out) const
{
	return out << "Ball: r=" << r;
}
