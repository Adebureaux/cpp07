#include "../includes/Array.hpp"
#define MAX_VAL 750

int main(void)
{
	int * a = new int();
	std::cout << *a << std::endl;

	Array<int> numbers(MAX_VAL);
	delete a;

	return (0);	
}
