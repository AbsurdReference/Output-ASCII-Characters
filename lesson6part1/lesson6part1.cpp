// program displays the ascii characters for every value (inclusive) of a range, but only if values are between 32 and 126 (inclusive)
// uses while loops to accomplish this as well as using or statements within those while loops and iterations
#include <iostream>

using namespace std;

int main()
{
	//declares needed variables
	unsigned int lower, upper;
	double lineCount;
	unsigned char ascii;
	
	//takes in user input
	cout << "Enter lower and upper values" << endl;
	cin >> lower >> upper;

	// if any of the values is out of bounds statement will keep running until it is within the parameters using or statements 
	while(lower < 32 || lower > 126 || upper < 32 || upper > 126 || lower > upper)
	{
		cout << "Values must be in range 32 to 126 inclusive" << endl;
		cout << "Enter lower and upper values" << endl;
		cin >> lower >> upper;
	}

	// sets ascii to be the minimum value entered and line count to be 1 so that line count can keep track of whitespace
	ascii = lower;
	lineCount = 1;

	cout << "Characters for ASCII values between " << lower << " and " << upper << endl;
	cout << "----+----+----+----+" << endl;
	
	// creates a loop that only stops when ascii is greater than upper so that the loop will keep adding until every ascii character within
	// the range isi displayed
	while(ascii <= upper)
	{
		//checks if line couont is greater than 20 and if it is, starts a new line and lowers the linecount variable back to what it should be
		if (lineCount > 20)
		{
			cout << endl;
			lineCount = 1;
		}
		lineCount += 1;

		cout << ascii;
		ascii = ascii + 1;
	}
	cout << "\n----+----+----+----+" << endl;
}