
#include "polygon.h"
#include "righttrapezoid.h"
#include "rectangle.h"


int main()
{

	float array[100] = { };

	while (1)
	{
		int option;
		int control = 0;

		RightTrap test;

		cout << "Choose one of the following options" << endl;
		cout << " 1 - Rectangle\n 2 - Rhombus\n 3 - Right Trapezoid\n 4 - Draw\n 5-Exit" << endl;
	
		cin >> option;

		switch (option)
		{
		case 1:
		//	Rectangle esempio;

			control++;
			break;
		case 2:

			control++;
			break;
		case 3:
			

			control++;
			break;
		case 4:

			break;
		case 5:
			exit;
			break;

		default:
			cout << "Please enter a valid option" << endl;

		}
	
	}
	

}

/*array di 100 poligoni,
when you choose a new object it will be assigned to the most top memory available
with draw dump the information of the object


*/