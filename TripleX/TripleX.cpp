#include <iostream>
using namespace std;

void PrintIntroduction()
{
	cout << "You have found a large chest with a lock on it.\n";
	cout << "Decipher the clues to find the prize inside...\n\n";
}

void PlayGame()
{
	PrintIntroduction();

	int CodeA = 4;
	int CodeB = 3;
	int CodeC = 2;
	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;


	cout << "* There are three numbers";
	cout << "\n* The numbers add up to: " << CodeSum;
	cout << "\n* The numbers multiply to give: " << CodeProduct;

	int GuessA, GuessB, GuessC;
	cout << "\n Please enter three numbers: \n";
	cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		cout << "You win!";
	}
	else
	{
		cout << "You lose :( ";
	}
}

int main()
{
	PlayGame();
	return 0;
}