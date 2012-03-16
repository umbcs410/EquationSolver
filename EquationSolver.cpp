#include "Reader.h"
#include <iostream>
#include <string>

int main()
{

	std::string input;

	std::cout << "Equation Calculator V0.10" << std::endl;
	std::cout << "Created on March 16, 2012 by JC, LD, RL, VM, YN" << std::endl;
	std::cout << "Please input an equation to solve" << std::endl;
	std::cout << "If you need help, type 'help'" << std::endl;
	std::cout << "Input: ";
	std::getline(std::cin, input);

	Reader read(input);

	std::cout << "Here is your output: " << read.getExpressionString() << std::endl;

	return 0;

}

