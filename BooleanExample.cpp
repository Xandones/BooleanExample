#include <iostream>

int main()
{
	bool bActive; // It is used to add a 'b' to help identify a boolean variable.

	bActive = 1; 
	std::cout << "bActive value (Setting boolean varible using 1 as true): " << bActive << "\n";
	bActive = 0;
	std::cout << "bActive value (Setting boolean varible using 0 as false): " << bActive << "\n";
	bActive = true; 
	std::cout << "bActive value (Setting boolean varible using true): " << bActive << "\n";
	bActive = false; 
	std::cout << "bActive value (Setting boolean varible using false): " << bActive << "\n";
	bActive = 'd'; // Anything different from zero is considered true as default in boolean.
	std::cout << "bActive value (Setting boolean varible using a character as true): " << bActive << "\n";
	bActive = "10101ABCD";
	std::cout << "bActive value (Setting boolean varible using hexadecimal value as true): " << bActive << "\n";
	system("PAUSE");
}