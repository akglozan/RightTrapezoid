#include "rhombus.h"
#include<iostream>

float Rhombus::Side()
{
	return (float)(sqrt(diagH*diagH+diagV*diagV)/2);
}

Rhombus::Rhombus()
{

	cout << "Rhombus - constructor - default" << endl;

	diagH = 0.;
	diagV = 0.;

}

Rhombus::Rhombus(float dH, float dV)
{

	diagH = 0.;
	diagV = 0.;

	cout << "Rhombus - constructor" << endl;

	if (dH <= 0.)
		cout << "WARNING: Rhombus - constructor: diagH should be >0" << endl;
	else diagH = dH;

	if (dV <= 0.)
		cout << "WARNING: Rhombus - constructor: diagV should be >0" << endl;
	else diagV = dV;

}

Rhombus:: Rhombus(const Rhombus& r)
{

	cout << "Rhombus - copy constructor" << endl;

	diagH = r.diagH;
	diagV = r.diagV;

}

Rhombus::~Rhombus()
{

	cout << "Rhombus - destructor" << endl;
	Reset();
}






Rhombus& Rhombus::operator=(const Rhombus& r) 
{
	cout << "Rhombus - operator=" << endl;

	diagH = r.diagH;
	diagV = r.diagV;

	return *this;
}


bool Rhombus::operator==(const Rhombus& r)
{
	if (r.diagH == diagH && r.diagV == diagV)
		return true;


	return false;

}

void Rhombus::Init()
{
	Reset();
	cout << " - Rhombus initialized - " << endl;

}

void Rhombus::Init(const Rhombus& r)
{
	Reset();

	diagH = r.diagH;
	diagV = r.diagV;
}

void Rhombus::Reset()
{
	diagH = (float)0;
	diagV = (float)0;

}

float Rhombus::Area()
{
	return (float)((diagH*diagV)/2);
}

float Rhombus::Perimeter()
{
	return (float)4 *(Side());
}


void Rhombus:: SetDiagH(float dH)
{
	if (dH < 0.) {
		cout << "WARNING: Rhombus - SetDiagH: DiagH should be > 0" << endl;
		return;
	}

	diagH = dH;
}

void Rhombus:: SetDiagV(float dV)
{
	if (dV < 0.) {
		cout << "WARNING: Rhombus - SetDiagV: DiagV should be > 0" << endl;
		return;
	}

	diagV = dV;
}

void Rhombus::SetDim(float dH, float dV)
{
	SetDiagH(dH);
	SetDiagV(dV);
}



void Rhombus::GetDiagonals(float& dH, float& dV)
{
	dH = diagH;
	dV = diagV;
	return;
}

float Rhombus:: GetDiagH()
{
	return diagH;
}


float Rhombus::GetDiagV()
{
	return diagV;
}





void Rhombus::ErrorMessage(const char* string) {

	cout << "ERROR -- Rhombus --" << endl;
	cout << string << endl;

}

void Rhombus::WarningMessage(const char* string)
{
	cout << "Warning -- Rhombus --" << endl;
	cout << string << endl;
}

void Rhombus::Dump()
{

	cout << "Rhombus -- Dump" << endl;

	cout << "Horizontal Diagonal: " << diagH << endl;
	cout << "Vertical Diagonal: " << diagV << endl;

	Polygon::Dump();


}



