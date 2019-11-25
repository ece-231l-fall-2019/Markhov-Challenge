//Group: Hieu Quang, Nigel Reyes, Kevin Henry

#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{	
	
	int test[10][10] = {0};	//ten node array
	
	test[0][0] = 50;
	test[0][1] = 50;

	test[1][0] = 50;
	test[1][2] = 50;
	
	test[2][1] = 50;
	test[2][3] = 50;
	
	test[3][2] = 50;
	test[3][4] = 50;
	
	test[4][3] = 50;
	test[4][5] = 50;
	
	test[5][4] = 50;
	test[5][6] = 50;
	
	test[6][5] = 50;
	test[6][7] = 50;
	
	test[7][6] = 50;
	test[7][8] = 50;
	
	test[8][7] = 50;
	test[8][9] = 50;
	
	
	srand(time(NULL)); //randomizer
	int node = 0; //columns
	int sim = 10000; //10,000 simulations
	size_t steps = 0; //steps
	int results[sim] = {0};
	int Dice = rand() % 100;
	
	for (int n = 0; n < sim; n++) //for loop simulation 
	{
		while(node != 9) //the test
		{
			int tPercent = 0; //total percentage
			Dice = rand() % 100; //randomizer
			for(int next = 0; next < 10; next++) //row
			{
				tPercent += test[node][next]; //total percentage <---- current percentage @ node.
				if(Dice < tPercent) //checks, total percentage with randomizer
				{
					node = next; //moves either backwards or forwards depending on row position
					steps++; 
					break;
				}
			}
		}
		
		results[n] = steps; //results array
		node = 0; //resetting for another test
		steps = 0;
	}
	
	int resultsMax = 0;
	int resultsMin = results[0];
	int mean = 0;
	
	//determining mean, max, and min
	for (int n = 0; n < sim; n++)
	{
		int ind = results[n];
                mean += results[n]; //loads in all value
 
                if(ind > resultsMax)
                {
                        resultsMax = ind;
                }
 
                if(ind < resultsMin)
                {
                        resultsMin = ind;
                }
	}

	int resultsMean = (mean/sim); //all value / simulations(10,000)
  	
	std::cout << "Max: " << resultsMax << std::endl;
        std::cout << "Min: " << resultsMin << std::endl;
        std::cout << "Mean: " << resultsMean << std::endl;

	return 0;
}

