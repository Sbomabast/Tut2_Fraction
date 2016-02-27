#include'Fratction.h'
#include<iostream>
using namespace std;

Fraction :: Fraction()
{

}

int Fraction::getNum()
{
	return this.num;
}

int Fraction::getDenom()
{
	return this.denom;
}

void Fraction::setNum(int Num)
{
	this.num = Num;
}

void Fraction::setDenom(int Denom)
{
	this.denom = Denom;
}

void Fraction :: add(int &a, int &b, int &c, int &d)
{
	if (b = d)
	{
		this.num = a + c;
		this.denom = b;
	}
	else
	{
		this.num = a*d + c*b;
		this.denom = b * d;
	}

}

void Fraction::subtract(int &a, int &b, int &c, int &d)
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

}

void Fraction::multiply(int &a, int &b, int &c, int &d)
{
	this.num = a * c;
	this.denom b * d;
}

void Fraction::divide(int &a, int &b, int &c, int &d)
{
	this.num = a * d;
	this.denom = b * c;
}

void Fraction::print(int &a, int &b)
{
	cout << "The resulting fraction after execution is:\n" << this.num << / << this.denom << endl;
}