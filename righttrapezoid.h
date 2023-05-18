#ifndef RIGHTTRAP__
#define RIGHTTRAP__

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


#include "polygon.h"


class RightTrap :public Polygon
{
private:
	

protected:
	float height;
	float topSide;
	float bottomSide;
	double ObliqueSide();

	float Area();
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

	/// @name Getters
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

	float GetDim(float &h, float &ts, float &bs, float& os);
	float GetArea();
	float GetPerimeter();




	//Default initialization
	//void Init();

	//Copy initialization
	void Init(RightTrap& X);

	//Delete object
	void Reset();

	//Object printout for diagnostic
	void Dump();


	
	void Draw();

	
};





#endif
