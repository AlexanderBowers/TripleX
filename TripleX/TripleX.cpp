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

	int GuessA, GuessB, GuessC;
	cout << "Please enter three numbers: \n";
	cin >> GuessA;
	cin >> GuessB;
	cin >> GuessC;
	
	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		cout << "You win!";
	}
	else 
	{
		cout << "You lose :( "
	}


	return 0;
}