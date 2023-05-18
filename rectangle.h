/*! \file rectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/


#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle
{
private:
	float length;
	float width;

public:

	Rectangle();
	Rectangle(float w, float l);
	Rectangle(const Rectangle &r);
	
	~Rectangle();
	
	Rectangle& operator=(const Rectangle &r); 
	bool operator==(const Rectangle &r);

	
	void SetDim(float w, float l);
	void SetLength(float l);
	void SetWidth(float w);
	
	void GetDim(float &w, float &l);
	float GetLength();
	float GetWidth();
	
	float GetArea();
	float GetPerimeter();
	

};

#endif