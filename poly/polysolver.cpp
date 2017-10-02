#include <iostream>
using namespace std;
#include "poly2.h"

int main(int argc, char** argv)
{
	float a,b,c;
	//float d,y;
	//cout << "Root-finding started..." << endl;
	while (cin >> a && cin >> b && cin >> c)
	{
		cout << "A:" << a << endl;
		cout << "B:" << b << endl;
		cout << "C:" << c << endl;

		Poly2* poly = new Poly2(a, b, c);
		poly->findRoots();
		cout << "Next" << endl;

		delete poly;
	}

	

	

  //Poly2 polyCalc = new Poly2(a,b,c);
	//cout << poly2.eval(-1);

	//d = ((b*b) - 4*a*c);


	return 0;
}
