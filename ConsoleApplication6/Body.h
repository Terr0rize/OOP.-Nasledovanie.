#pragma once
#include <iostream>

class Body
{
public:
	virtual ~Body() = default;
	virtual double SurfaceArea() const = 0;
	virtual double Volume() const = 0;
	virtual std::ostream& Print(std::ostream& out) const = 0;
};

