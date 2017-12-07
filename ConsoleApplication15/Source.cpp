#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
using namespace std;



void main()
{	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "VVedite zadanie = " << endl;
	cin >> nz;
	if (nz == 1)
	{
		enum week { p, v, c, ch, pt };
		enum week w;



	
		int a;
		cout << "¬ведите число от 1 до 365 =" << endl;
		a = 365 % 7;
		cin >> a;
		if (1>a && a < 365)
		{
			int b = 0;

			b = a % 7;
			w = (week)b;
			switch (w)
			{
			case p:
			{
				cout << "Pond";
			}
			break;
			case v:
			{
				cout << "Vtornik";
			}
			break;
			case c:
			{
				cout << "creda";
			}
			break;
			case ch:
			{
				cout << "chetverg";
			}
			break;
			case pt:
			{
				cout << "Pyatncha";
			}
			break;
			default:
				break;
			}

		}
	}

	else if (nz == 2)
	{
		/*2*/
		int a,x,y,z;

		cout << "Vvedite chislo ot 100 do 999" << endl;
		cin >> a;

		if (a > 100 && a < 999)
		{
			x = a / 100;
			y = a % 100;
			z = a%10;
			if ((x + y + z) > 10 && (x+y+z)<100)
			{
				cout << "chislo dvuznachnoe" << endl;
			}
			else if ((x*y*z) > 100 && (x*y*z) < 999)
			{
				cout << "chislo trehznachnoe" << endl;
			}
					

		}


		

	}

}