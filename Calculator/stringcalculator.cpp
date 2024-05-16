#include "stringcalculator.h"
#include "getnumbers.h"

int StringCalculator::add(string input)
{
        if (input.empty())
		return 0;

	vector<int> numbers = get_numbers(input);

	check_for_negatives(numbers);

	return accumulate(numbers.begin(), numbers.end(), 0);
}