#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    double a = 10.0;
    double b = 5.0;

    int add = calculator.Add(a, b);
    int sub = calculator.Sub(a, b);
		int mul = calculator.Mul(a, b);
		int div = calculator.Div(a, b);

    std::cout << a << " + "<< b <<" = " << add << std::endl;
    std::cout << a << " - "<< b <<" = " << sub << std::endl;
	std::cout << a << " * "<< b <<" = " << mul << std::endl;
    std::cout << a << " / "<< b <<" = " << div << std::endl;

    return 0;
}