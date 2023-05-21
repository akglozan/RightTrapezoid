

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










/// @name Default Constuctor
/// @brief Creates a default constructor of right trapezoid
RightTrap::RightTrap()
{
	height = 0.0f;
	topSide = 0.0f;
	bottomSide = 0.0f;
	

	cout << "Default - Right Trapezoid " << endl;

}

/// @name Copy Constuctor
/// @brief Creates a copy constructor of right trapezoid
/// @param X A right trapezoid object
RightTrap::RightTrap(const RightTrap& X)
{
	cout << "Copy Constuctor - Right Trapezoid" << endl;
	Init(X);
}


/// @brief Creates a standard constructor of right trapezoid
/// @param h height
/// @param ts top side
/// @param bs bottom side
RightTrap::RightTrap(float h, float ts, float bs)
{
	cout << "Constructor with parameters - Right Trapezoid" << endl;

	if (h <= .0)
		WarningMessage("Height should be bigger than 0");
	else
		height = h;
	if (ts <= .0)
		WarningMessage("Top side should be bigger than 0");
	else
		topSide = ts;
	if (bs <= .0)
		WarningMessage("Bottom side should be bigger than 0");
	else
		bottomSide = bs;

}

/// @name Destructor of Right Trapezoid
RightTrap::~RightTrap()
{
	cout << "Destructor - Right Trapezoid " << endl;
	Reset();
}

/// @brief overload of operator =
/// @param X 
/// @return 
RightTrap& RightTrap::operator=(const RightTrap& X)
{
	Reset();
	Init(X);
	cout << "Operator = Right Trapezoid" << endl;
	
	return *this;
}

bool RightTrap::operator==(const RightTrap& X)
{
	return ((X.bottomSide == bottomSide && X.height == height && X.topSide == topSide) ? true : false);
}


/// @name Height setter
/// @brief Sets height of right trapezoid
/// @param h Height
void RightTrap::SetHeight(float h)
{
	if (h < 0.)
	{
		cout << "Warning: Right Trapezoid - SetHeight\nHeight should be >0" << endl;
		return;
	}

	height = h;
}

/// @name Top Side Setter
/// @brief Sets top side of right trapezoid
/// @param ts Top Side
void RightTrap::SetTopSide(float ts)
{
	if (ts < 0.)
	{
		cout << "Warning: Right Trapezoid - SetTopSide\nTop side should be >0" << endl;
		return;
	}

	topSide = ts;
}

/// @name Bottom Side Setter
/// @brief Sets bottom side of right trapezoid
/// @param bs Bottom Side
void RightTrap::SetBottomSide(float bs)
{
	if (bs < 0.)
	{
		cout << "Warning: Right Trapezoid - SetBottomSide\nBottom side should be >0" << endl;
		return;
	}

	bottomSide = bs;

}

/// @name Dimension Setter
/// @brief Sets the dimensions of right trapezoid
/// @param h Height
/// @param ts Top Side
/// @param bs Bottom Side
void RightTrap::SetDim(float h, float ts, float bs)
{
	SetHeight(h);
	SetTopSide(ts);
	SetBottomSide(bs);

}


/// @name Height Getter
/// @brief Gets the height of right trapezoid
/// @return Height
float RightTrap::GetHeight()
{
	return height;
}

/// @name Top Side Getter
/// @brief Gets the top side of right trapezoid
/// @return Top Side
float RightTrap::GetTopSide()
{
	return topSide;
}

/// @name Bottom Side Getter
/// @brief Gets the bottom side of right trapezoid
/// @return Bottom Side
float RightTrap::GetBottomSide()
{
	return bottomSide;
}

/// @name Oblique Side Getter
/// @brief Gets the oblique side of right trapezoid
/// @return Oblique Side
float RightTrap::GetObliqueSide()
{
	return ObliqueSide();
}

/// @name Dimension Getter
/// @brief Gets the dimensions of right trapezoid
/// @param h Height
/// @param ts Top Side
/// @param bs Bottom Side
/// @param os Oblique Side
void RightTrap::GetDim(float& h, float& ts, float& bs,float &os)
{
	h = height;
	ts = topSide;
	bs = bottomSide;
	os = ObliqueSide();
	
	return;
}

float RightTrap::GetArea()
{
	return Area();
}

float RightTrap::GetPerimeter()
{
	return Perimeter();
}
















void RightTrap::Init()//devo fare una modifica
{
	Reset();
	
}

void RightTrap::Init(const RightTrap& X)
{
	height = X.height;
	topSide = X.topSide;
	bottomSide = X.bottomSide;

	area = X.area;
	perimeter = X.perimeter;

}

void RightTrap::Reset()
{
	cout << "Reset - Right Trapezoid" << endl;

	height = 0.;
	topSide = 0.;
	bottomSide = 0.;
	ObliqueSide();

	perimeter = 0.;
	area = 0.;
}

void RightTrap::Dump()
{
	Polygon::Dump();


	Draw();


}



void RightTrap::Draw()
{
	cout << "A drawing of a right trapezoid" << endl;

	cout << "Height: " << GetHeight() << endl;
	cout << "Top Side: " <<  GetTopSide()<< endl;
	cout << "Bottom Side: " << GetBottomSide() << endl;
	cout << "Oblique Side: " << ObliqueSide() << endl;

	cout << "Area: " << Area() << endl;
	cout << "Perimeter: " << Perimeter() << endl;
}

void RightTrap::ErrorMessage(const char* string)
{
	cout <<"Error -- Right Trapezoid -- ";
	cout << string << endl;
}

void RightTrap::WarningMessage(const char* string)
{
	cout << endl << "WARNING -- Right Trapezoid --";
	cout << string << endl;
}
