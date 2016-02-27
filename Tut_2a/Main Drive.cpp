#include<iostream>
#include'Fraction.h'
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;
	cout << "Please enter the numerators and denominators of the two fractions to be manipulated\n" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	Fraction Frac_1;
	Fraction Frac_2;
	Fraction ResultingFrac;
	ResultingFrac.add(Frac_1.a, Frac_1.b, Frac_2.c, Frac_2.d);
	ResultingFrac.subtract(Frac_1.a, Frac_1.b, Frac_2.c, Frac_2.d);
	ResultingFrac.mutliply(Frac_1.a, Frac_1.b, Frac_2.c, Frac_2.d);
	ResultingFrac.divide(Frac_1.a, Frac_1.b, Frac_2.c, Frac_2.d);
	ResultingFrac.print();
	return 0;
}
