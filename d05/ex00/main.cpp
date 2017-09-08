#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat b1;

		b1.gradePlus();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
