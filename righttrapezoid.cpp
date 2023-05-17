

#include "polygon.h"
#include "righttrapezoid.h"


/// @brief Defines the value of oblique side
/// @return Returns the value of oblique side
double RightTrap::Side()
{
	return sqrt(pow(height,2)*pow(bottomSide-topSide,2));
}

/// @brief Defines the value of right trapezoid's area
/// @return Returns the value of right trapezoid's area
float RightTrap::Area()
{
	return (height*(topSide+bottomSide))/2;
}

/// @brief Defines the value of right trapezoid's perimeter
/// @return Returns the value of right trapezoid's perimeter
float RightTrap::Perimeter()
{
	return height+bottomSide+topSide+Side();
}



RightTrap::RightTrap()
{
	height = 0.0f;
	topSide = 0.0f;
	bottomSide = 0.0f;
	Side();

	cout << "Default - Right Trapezoid " << endl;

}

RightTrap::RightTrap(RightTrap& X)
{
	cout << "Copy - Right Trapezoid" << endl;
	Init(X);
}

RightTrap::~RightTrap()
{
	cout << "Destructor - Right Trapezoid " << endl;
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
	return false;
}

void RightTrap::Init()
{
	Reset();
	perimeter = 0.;
	area = 0.;
}

void RightTrap::Init(RightTrap& X)
{
	Reset();

}

void RightTrap::Reset()
{
	cout << "Reset - Right Trapezoid" << endl;
	height = 0.;
	topSide = 0.;
	bottomSide = 0.;
	Side();

}

void RightTrap::Dump()
{
	Polygon::Dump();

	cout << "Height = " << height << endl;
	cout << "Top Side = " << topSide << endl;
	cout << "Bottom Side = " << bottomSide << endl;
	cout << "Oblique Side = " << Side() << "\n\n";


}

void RightTrap::Draw()
{
	cout << "A drawing of a right trapezoid" << endl;
}
