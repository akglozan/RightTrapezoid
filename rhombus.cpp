#include "rhombus.h"
#include<iostream>

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

	if (diagH <= 0.)
		cout << "WARNING: Rhombus - constructor: diagH should be >0" << endl;
	else diagH = dH;

	if (diagV <= 0.)
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

//void GetDiagonals(float& dH, float& dV); to do

float Rhombus:: GetDiagH()
{
	return diagH;
}


float Rhombus::GetDiagV()
{
	return diagV;
}


//float GetSide();
//
//float GetArea();
//float GetPerimeter();  to do 
