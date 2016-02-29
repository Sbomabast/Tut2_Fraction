#ifndef FRACTION_H
#define FRACTION_H
class Fraction{
private:
	int num;
	int denom;
public:
	Fraction(); // costructor
	Fraction(); // destructor
	int getNum(); // accesor for numerator
	int getDenom(); // accesor for denominator
	void setNum(int); // mutator for numerator
	void setDenom(int); // mutator for denominator
	int add(int, int, int, int);
	int subtract(int, int, int, int);
	int multiply(int, int, int, int);
	int divide(int, int, int, int);
	void print();
};
#endif
