#include <iostream>
#include <ctime>

using namespace std;

void PrintIntroduction(int Difficulty)
{
	cout << "You have found a large chest with a lock on it that says " << Difficulty << endl;
	cout << "Decipher the clues to find the prize inside...\n\n";
}

bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);

	const int CodeA = rand() % Difficulty + Difficulty;
	const int CodeB = rand() % Difficulty + Difficulty;
	const int CodeC = rand() % Difficulty + Difficulty;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;


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
		cout << "You cracked the code! Inside you find another chest...\n\n";
		return true;
	}
	else
	{
		cout << "You fumble with the lock... \n\n";
		return false;
	}
}

int main()
{
	srand(time(NULL));

	int LevelDifficulty = 1;
	int const MaxDifficulty = 5;

	while (LevelDifficulty <= MaxDifficulty)
	{
		bool bLevelComplete = PlayGame(LevelDifficulty);
		cin.clear();
		cin.ignore();

		if (bLevelComplete)
		{
			++LevelDifficulty;

		}
	}

	cout << "\nYou open the final chest. You realize the real reward was the friends you made along the way...";
	return 0;
}