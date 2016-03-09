#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

class Dice{
private:
	int rollArray[12];
	
public:
	Dice(){
		srand(time(NULL));
	}

	int roll()
	{
		return rand() % 6 + 1;
	};


	float Average(Dice myDice, int rolls)
	{	
		int sum;
		int* myroll = myDice.getArray();
		for (int i = 0; i < rolls; i++)
		{
			sum += *myroll;
			*myroll++;
		}
	
		return sum / rolls;
	};

	float Average(int DiceArray[], int rolls)
	{
		int sum;
		for (int i = 0; i < rolls; i++)
		{
			sum += DiceArray[i];
		}
		return sum/rolls;
	}

	void setRolls(int rolls)
	{
	
		for (int i = 0; i < rolls; i++)
		{
			rollArray[i] = roll();
		}
	
	};

	int* getArray()
	{
		return rollArray;
	};

	

};

int main()
{
	Dice diceObj;
	int rolls;
	cout << "Enter Number of rolls max 12" << endl;
	cin >> rolls;

	diceObj.setRolls(rolls);
	cout << "Average Using Object " << diceObj.Average(diceObj, rolls) << endl;

	return 0;
};