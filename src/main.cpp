#include <iostream>
#include "calculator.h"

#include "number.h"

int main(int argc, char* argv[])
{
	auto& calculator = Calculator::getInstance();  

	int i = 1;
	while (i != argc)
	{
		calculator.makeEntryString(calculator.makeString(argv[i]));
		i++;
	}

	if (argc > 1)
		calculator.printResult();

	return 0;
}