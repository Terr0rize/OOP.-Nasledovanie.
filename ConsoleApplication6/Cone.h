#pragma once
#include "Body.h"

class Cone
	: public Body
{
public:
	Cone(double x, double y, double z);
	virtual double SurfaceArea() const override;
	virtual double Volume() const override;
	virtual std::ostream &Print(std::ostream &out) const;

public:
	double r;
	double l;
	double h;
};