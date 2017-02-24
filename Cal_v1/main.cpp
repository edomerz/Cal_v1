#include "std_lib_facilities.h"



int main()
{
	std::cout << "Please enter expression (we can handle +, -, *, /): ";
	std::cout << "add an x to end expression (e.g. 1+2*3x): \n";

	int lval = 0;
	int rval;
	std::cin >> lval;						// read left most
	if (!cin)
		error("no first operand\n");

	for (char op; cin >> op; )
	{
		if(op != 'x')
			std::cin >> rval
	}
	char op;
	int res;

	// read something like 1+3
	std::cin >> lval >> op >> rval;

	if (op == '+')
	{
		res = lval + rval;
	}
	else if (op == '-')
	{
		res = lval - rval;	
	}
	else
	{
		std::cout << "input error\n";
	}

	std::cout << "Result: " << res << "\n";
	
	return 0;
}