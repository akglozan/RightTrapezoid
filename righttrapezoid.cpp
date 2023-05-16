

#include "polygon.h"
#include "righttrapezoid.h"

float RightTrap::Side()
{
	return 0.0f;
}

RightTrap::RightTrap()
{
	height = 0.0f;
	topSide = 0.0f;
	bottomSide = 0.0f;

	cout << "Default Right Trapezoid" << endl;

}

RightTrap::RightTrap(RightTrap& X)
{
	cout << "Copy Right Trapezoid" << endl;
	Init(X);
}

RightTrap::~RightTrap()
{
	cout << "Right Trapezoid Destructor" << endl;
	Reset();
}

RightTrap& RightTrap::operator=(RightTrap& X)
{
	Reset();
	Init(X);
	cout << "Operator = Right Trapezoid" << endl;
	
	return *this;
}

bool RightTrap::operator==(RightTrap& X)
{
	return false;// da guardare
}

void RightTrap::Init()
{
}

void RightTrap::Init(RightTrap& X)
{
	Reset();
	//da finire
}

void RightTrap::Reset()
{
	cout << "Reset Right Trapezoid" << endl;
	height = 0.;
	topSide = 0.;
	bottomSide = 0.;

}

void RightTrap::Dump()
{
	Polygon::Dump();

	cout << "Height = " << height << endl;
	cout << "Top Side = " << topSide << endl;
	cout << "Bottom Side = " << bottomSide << endl;
	//need to output oblique side
	

}
