#include "add.h"

void add_if_valid(vector<int> &numbers, string number_string) 
{
	int number = stoi(number_string);
	if (number <= 1000)
		numbers.push_back(number);
}
