#include "poly2.h"
#include <cmath>

Poly2::Poly2(float a, float b, float c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

float Poly2::eval(float x)
{
    float rVal;
		rVal = ((a*pow(x,2)) + (b*x) + c);
		return rVal;
    // todo

}

void Poly2::findRoots()
{
	float d = calculateDisc();

	if(d == 0)
	{
		cout << "Double root: " << (negativeB() / (2*a)) << endl;
	}else if(d > 0)
	{
		cout << "root 1: " << (negativeB() + sqrt(calculateDisc())) / (2.0 * a) << endl;
		cout << "root 2: " << (negativeB() - sqrt(calculateDisc())) / (2.0 * a) << endl;
	}

}

float Poly2::negativeB() {
	return (b * -1.0);
}

float Poly2::calculateDisc() {
	return (pow(b,2) - (4*a*c));
}
