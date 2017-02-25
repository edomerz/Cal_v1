#include "std_lib_facilities.h"

class Token
{
public:
	char op;
	double value;
};


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
		if (op != 'x')
			std::cin >> rval;
		if (!cin)
			error("no second operand");

		switch (op)
		{
		case '+':
			lval += rval;				// add: lval + rval
			break;
		case '-':
			lval -= rval;				//subtrack: lval -rval
			break;
		case '*':
			lval *= rval;				//multiply: lval -rval
			break;
		case '/':
			lval /= rval;				//dvide: lval -rval
			break;
		default:
			std::cout << "Result: " << lval << '\n';
			keep_window_open();
			return 0;
		}
	}
	error("bad exception\n");
}
