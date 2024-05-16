#include "add.h"
#include "getnumbers.h"
#include "Negatives.h"
#include "stringcalculator.h"

using namespace std;

int main()
{
    StringCalculator Calculator;
    cout <<Calculator.add("1,10,3,4\r\n");
    return 0;

}