
#include "polygon.h"
#include "righttrapezoid.h"
#include "rectangle.h"
#include "rhombus.h"


int main()
{
	bool exit = false;
	int option = -1;

	float polygons[100] = { };

	while (!exit)
	{
		
		int control = 0;
	
	
	
		cout << "Choose one of the following options" << endl;
		cout << " 1 - Rectangle\n 2 - Rhombus\n 3 - Right Trapezoid\n 4 - Draw\n 5-Exit" << endl;
	
		scanf_s("%d", &option);

	/*	if (!isdigit(option))
			option = 6;

		if (option > 0)
		{ }
		else {
			option = 6;
		}*/
		switch (option)
		{
		case 1:
		{
			Rectangle test;

			control++;
			break;
		}
		case 2:
		{
		//	Rhombus test;

			control++;

			break;
		}
		case 3:
		{
			RightTrap test;

			control++;
			break;
		}
		case 4:
		{
		//	Polygon::Draw; polygons[control];

			break;
		}
		case 5:
		{	
			cout << "-- The End --" << endl;
			exit = true;
			break;
		break;
		}
		default:
			cout << "Please enter a valid option" << endl;

		}
	
	}
	

}

/*array di 100 poligoni,
when you choose a new object it will be assigned to the most top memory available
with draw dump the information of the object


*/