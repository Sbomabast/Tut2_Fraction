#ifndef FRACTION_H
#define FRACTION_H
class Fraction{
private:
	int num;
	int denom;
public:
	Fraction(); 
	~Fraction();
	int getNumDenom(int &, int &); 
	void setNumDenom(int, int);
	void add(Fraction);
	int multiply(int, int, int, int);
	int divide(int, int, int, int);
	void print();
	Fraction& operator+(Fraction & Frac_2);
	Fraction& operator-(Fraction & Frac_2);
	Fraction& operator*(Fraction & Frac_2);
	Fraction& operator/(Fraction & Frac_2);
};
#endif
