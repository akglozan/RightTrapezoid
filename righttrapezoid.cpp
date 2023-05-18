

#include "polygon.h"
#include "righttrapezoid.h"


/// @brief Defines the value of oblique side
/// @return Returns the value of oblique side
double RightTrap::ObliqueSide()
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
	return height+bottomSide+topSide+ObliqueSide();
}












RightTrap::RightTrap()
{
	height = 0.0f;
	topSide = 0.0f;
	bottomSide = 0.0f;
	ObliqueSide();

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




void RightTrap::SetHeight(float h)
{
	if (h < 0.)
	{
		cout << "Warning: Right Trapezoid - SetHeight\nHeight should be >0" << endl;
		return;
	}

	height = h;
}

void RightTrap::SetTopSide(float ts)
{
	if (ts < 0.)
	{
		cout << "Warning: Right Trapezoid - SetTopSide\nTop side should be >0" << endl;
		return;
	}

	topSide = ts;
}

void RightTrap::SetBottomSide(float bs)
{
	if (bs < 0.)
	{
		cout << "Warning: Right Trapezoid - SetBottomSide\nBottom side should be >0" << endl;
		return;
	}

	bottomSide = bs;

}


void RightTrap::SetDim(float h, float ts, float bs)
{
	SetHeight(h);
	SetTopSide(ts);
	SetBottomSide(bs);

}

float RightTrap::GetHeight()
{
	return height;
}

float RightTrap::GetTopSide()
{
	return topSide;
}

float RightTrap::GetBottomSide()
{
	return bottomSide;
}

float RightTrap::GetObliqueSide()
{
	return ObliqueSide();
}

float RightTrap::GetDim(float& h, float& ts, float& bs,float &os)
{
	h = height;
	ts = topSide;
	bs = bottomSide;
	os = ObliqueSide();
	
}

float RightTrap::GetArea()
{
	return (height * (topSide + bottomSide)) / 2;
}

float RightTrap::GetPerimeter()
{
	return height + topSide + bottomSide + ObliqueSide();
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
	ObliqueSide();

}

void RightTrap::Dump()
{
	Polygon::Dump();

	cout << "Height = " << height << endl;
	cout << "Top Side = " << topSide << endl;
	cout << "Bottom Side = " << bottomSide << endl;
	cout << "Oblique Side = " << ObliqueSide() << "\n\n";


}

void RightTrap::Draw()
{
	cout << "A drawing of a right trapezoid" << endl;
}
