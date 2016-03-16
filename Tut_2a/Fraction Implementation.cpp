#include'Fratction.h'
#include<iostream>
using namespace std;

Fraction::Fraction()
{

}

Fraction::~Fraction
{
	
}

void Fraction::getNumDenom(int &numerator, int &denominator)
{
	numerator = num;
	denominator = denom;
}

void Fraction::setNumDenom(int Num, int Denom)
{
	num = Num;
	denom = Denom;
}


void Fraction :: add(Fraction Frac_2)
{
	if (denom = Frac_2.denom)
	{
	
	}
	else
	{
		this.num = a*d + c*b;
		this.denom = b * d;
	}

};

void Fraction::subtract(int a, int b, int c, int d)
{
	if (b = d)
	{
		this.num = a - c;
		this.denom = b;
	}
	else
	{
		this.num = a*d - c*b;
		this.denom = b * d;
	}

};

void Fraction::multiply(int a, int b, int c, int d)
{
	this.num = a * c;
	this.denom b * d;
};

void Fraction::divide(int a, int b, int c, int d)
{
	this.num = a * d;
	this.denom = b * c;
};

void Fraction::print()
{
	cout << "The resulting fraction after execution is:\n" << this.num << "/" << this.denom << endl;
};
