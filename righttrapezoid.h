#ifndef RIGHTTRAP__
#define RIGHTTRAP__

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


#include "polygon.h"

/// @class Right Trapezoid
/// @brief To manage an object with the shape of a right trapezoid
class RightTrap :public Polygon
{
private:
	

protected:
	float height;
	float topSide;
	float bottomSide;

/// @brief Defines the value of oblique side
/// @return Returns the value of oblique side
	double ObliqueSide();

/// @brief Defines the value of right trapezoid's area
/// @return Returns the value of right trapezoid's area
	float Area();

/// @brief Defines the value of right trapezoid's perimeter
/// @return Returns the value of right trapezoid's perimeter
	float Perimeter();

	


public:
	//Default Constructor
	RightTrap();

	//Copy Constructor
	RightTrap(const RightTrap& X);

	//Destructor
	~RightTrap();






	//Assignment overloading
	RightTrap& operator = (RightTrap& X);

	//Comparison overloading
	bool operator==(RightTrap& X);

	/// @name Setters
	/// @{
	void SetHeight(float h);
	void SetTopSide(float ts);
	void SetBottomSide(float bs);
	
	void SetDim(float h, float ts, float bs);
	/// @} 



	float GetHeight();
	float GetTopSide();
	float GetBottomSide();
	float GetObliqueSide();

	void GetDim(float &h, float &ts, float &bs, float& os);
	float GetArea();
	float GetPerimeter();




	//Default initialization
	void Init();

	//Copy initialization
	void Init(const RightTrap& X);

	//Delete object
	void Reset();

	//Object printout for diagnostic
	void Dump();


	
	void Draw();

	
};





#endif
