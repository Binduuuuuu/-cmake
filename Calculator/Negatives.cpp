#include "Negatives.h"

class GetNegatives {
private:
    string negatives;
public:
	void operator()(int i) {
        if (i < 0)
            negatives.append(std::to_string(i) + ",");
    }

    operator string() {
        if (negatives.length() > 0)
            negatives.pop_back();

        return negatives;
	}
};

void check_for_negatives(const vector<int> &numbers) 
{
	string negatives = for_each(numbers.begin(), numbers.end(), GetNegatives());
	if (negatives.size() > 0) {
		throw invalid_argument("Negatives not allowed: " + negatives);
	}
}



















   