#include <iostream>
#include <time.h>
#include <cstdlib>


class Dice{
	
	
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
	
		return
	};

	float Average(int DiceArray[], int rolls)
	{
		int sum;
		for (int i = 0; i < rolls; i++)
		{
			sum += DiceArray[i];
		}
		return sum/rolls;
	};

	

};

int main()
{
	
	return 0;
};