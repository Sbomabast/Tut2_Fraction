#include<iostream>
#include'Fraction.h'
using namespace std;

int main()
{
	int numerator;
	int denominator;
	Fraction Frac_1;
	Fraction Frac_2;
	Fraction ResultingFrac;
	cout << "Please enter the fractions you need to manipulate\n" << endl;
	cin >> Frac_1.setNum(numerator)
	cin >> Frac_1.setDenom(denominator);
	cin >> Frac_2.setNum(numerator);
	cin >> Frac_2.setDenom(denominator);
	ResultingFrac.add(Frac_1.getNum(), Frac_1.getDenom(), Frac_2.getNum(), Frac_2.getDenom());
	ResultingFrac.subtract(Frac_1.getNum(), Frac_1.getDenom(), Frac_2.getNum(), Frac_2.getDenom());
	ResultingFrac.mutliply(Frac_1.getNum(), Frac_1.getDenom(), Frac_2.getNum(), Frac_2.getDenom());
	ResultingFrac.divide(Frac_1.getNum(), Frac_1.getDenom(), Frac_2.getNum(), Frac_2.getDenom());
	ResultingFrac.print();
	return 0;
}
