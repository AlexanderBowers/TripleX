#include <iostream>
using namespace std;

int main()
{
	cout << "You have found a large chest with a lock on it.\n";
	cout << "Decipher the clues to find the prize inside...\n";

	int CodeA = 4;
	int CodeB = 3;
	int CodeC = 2;
	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;
	
	cout << endl;
	cout << "* There are three numbers\n";
	cout << "* The numbers add up to: " << CodeSum << endl;
	cout << "* The numbers multiply to give: " << CodeProduct << endl;

	return 0;
}