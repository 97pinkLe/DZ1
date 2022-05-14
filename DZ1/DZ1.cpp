#include <iostream>
#include "Complex.h"

int main()
{
	Complex a{ 8, 17 };
	Complex b{ 11, 5 };
	//Complex c{ 3, 9 };
	Complex::print(a.div(b));
	//a.print(a);

}