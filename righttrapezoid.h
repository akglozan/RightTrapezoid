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
	double Side();

	float Area();
	float Perimeter();

	


public:
	//Default Constructor
	RightTrap();

	//Copy Constructor
	RightTrap(RightTrap& X);

	//Destructor
	~RightTrap();

	//Assignment overloading
	RightTrap& operator = (RightTrap& X);

	//Comparison overloading
	bool operator==(RightTrap& X);

	//Default initialization
	void Init();

	//Copy initialization
	void Init(RightTrap& X);

	//Delete object
	void Reset();

	//Object printout for diagnostic
	void Dump();

	void Draw();

	
};





#endif
