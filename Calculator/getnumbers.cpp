#include "getnumbers.h"
#include "add.h"

vector<int> get_numbers(const string &input) 
{
	regex numbers_only("(-?\\d+)+");
	vector<int> numbers;
	for_each(sregex_token_iterator(input.begin(), input.end(), numbers_only),
				sregex_token_iterator(),
				[&numbers](string s) { add_if_valid(numbers, s); });

	return numbers;
}