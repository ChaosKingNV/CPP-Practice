// C++ program to sizes of data types
#include<iostream>

double power(double base, int exponent)
{
	double result = 1;
	while (exponent > 0 )
	{
		result = result * base;

		exponent--;
	}
	
	return result;
}


void print_power(double base, int exponent)
{
	double solution = power(base , exponent);
	std::cout << solution;
}

int main()
{
	// we will do x raised to the power y
	int x, y;
	std::cout << "Base:";
	std:::wqcin >> x;
	std::cout << "Power:";
	std::cin >> y;
	print_power(x,y);
	return 0;
}
