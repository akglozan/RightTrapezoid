/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/

#include "polygon.h"
#include <math.h>


#ifndef RHOMBUS_H
#define RHOMBUS_H

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus:public Polygon
{
private:
	float diagH;
	float diagV;
	
	float Side();

public:

	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus &r);
	
	~Rhombus();
	
	Rhombus& operator=(const Rhombus &r); 
	bool operator==(const Rhombus &r);


	void Init();
	void Init(const Rhombus& r);
	void Reset();

	float Area();
	float Perimeter();

	
	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);
	
	void GetDiagonals(float &dH, float &dV);
	float GetDiagH();
	float GetDiagV();


	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	

};

#endif