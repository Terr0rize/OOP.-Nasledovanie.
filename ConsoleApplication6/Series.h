#pragma once
#include "pch.h"
#include <vector>
#include <iostream>
#include "Body.h"
using namespace std;
class Series:public Body
{
public:	
	int size;
	Body *b;
	vector<Body *> bodies;
public:
	Series(int size);
	~Series();
};
