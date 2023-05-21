
#include "polygon.h"
#include "righttrapezoid.h"
#include "rectangle.h"
#include "rhombus.h"


int main()
{
	bool exit = false;
	int option = -1;

	Polygon *polygons[100] = { };

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
			Rectangle* X = new Rectangle;

			cout << "Enter basic values for your rectangle such as width and length in order" << endl;

			float w, l;
			scanf_s("%f", &w);
			scanf_s("%f", &l);

			X->SetDim(w, l);

			polygons[control] = X;

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
			RightTrap* X = new RightTrap;

			cout << "Enter basic values for your rectangle such as height, bottom side and top side in order" << endl;
			float h, bs, ts;
			scanf_s("%f",&h);
			scanf_s("%f",&bs);
			scanf_s("%f",&ts);


			X->SetDim(h, ts, bs);

			polygons[control] = X;


			control++;
			break;
		}
		case 4:
		{
		

			for (int i = 0; i < 10; i++)
			{
				polygons[i]->Draw();
			}

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