#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx;
	double y; 
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << "x" << " |"
		<< "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -7)
			y = 0;
		else
			if (-7 < x && x <= -3)
				y = 4 * x + 28;
			else
				if (-3 < x && x <= -2)
					y = 4;
				else
					if (-2 < x && x <= 2)
						y = x * x;
					else
						if (2 < x && x <= 4)
							y = -2 * x + 4;
						else
							y = 0;
		cout << "|" << x
			<< " |" << y
			<< " |" << endl;
		x += dx;
	}
	cout << endl;
	cout << "y = " << y << endl;
	cout << "---------------------------" << endl;
	return 0;
}

