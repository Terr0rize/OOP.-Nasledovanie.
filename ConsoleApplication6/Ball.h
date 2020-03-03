#include "Body.h"
#pragma once

class Ball
	: public Body
{
public:
	Ball(double x);
	virtual double SurfaceArea() const override;
	virtual double Volume() const override;
	virtual std::ostream &Print(std::ostream &out) const;
	void vvod(double x);
public:
	double r;
};