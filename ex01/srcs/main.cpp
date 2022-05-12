#include "../includes/iter.hpp"

void divide_int(int & n)
{
	n /= 10;
}

void divide_double(double & d)
{
	d /= 10;
}

int main(void)
{
	{
		int a[5] = { 10, 50, 30, 40, 20 };

		std::cout << a[0] << std::endl;
		iter<int>(a, 5, &divide_int);
		std::cout << a[0] << std::endl;
	}
	{
		double a[5] = { 25.5, 31.0, 12, 14, 17 };

		std::cout << a[0] << std::endl;
		iter<double>(a, 5, &divide_double);
		std::cout << a[0] << std::endl;
	}
	return (0);	
}
