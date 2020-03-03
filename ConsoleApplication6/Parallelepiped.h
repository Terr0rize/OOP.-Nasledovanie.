#pragma once
#include "Body.h"

class Parallelepiped
	: public Body
{
public:
	Parallelepiped(double x, double y, double z);
	virtual double SurfaceArea() const override;
	virtual double Volume() const override;
	virtual std::ostream &Print(std::ostream &out) const;

public:
	double m_x;
	double m_y;
	double m_z;
};