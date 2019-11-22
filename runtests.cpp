#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{	
	srand(time(NULL));

	int test[10][10] = {0};	
	
	test[0][0] = 50;
	test[0][1] = 50;

	test[1][0] = 50;
	test[1][3] = 50;
	
	test[2][1] = 50;
	test[2][4] = 50;
	
	test[3][2] = 50;
	test[3][5] = 50;
	
	test[4][3] = 50;
	test[4][6] = 50;
	
	test[5][4] = 50;
	test[5][7] = 50;
	
	test[6][5] = 50;
	test[6][8] = 50;
	
	test[7][6] = 50;
	test[7][8] = 50;
	
	test[8][7] = 50;
	test[8][9] = 50;
	
	test[9][8] = 50;
	test[9][10] = 50;
	
	int node = 0;
	int sim = 10000;
	size_t steps = 0;
	int results[sim] = {0};

	for (int n = 0; n < sim; n++) 
	{
		while(node != 9)
		{
			int tPercent = 0;
			int Dice = rand() % 100;
		
			for(int next = 0; next < 10; next++)
			{
				tPercent += test[node][next];
				if(Dice < tPercent)
				{
					node = next;
					steps++; 
					break;
				}
				steps++;
			}
		}
		results[n] = steps;
		node = 0;
		steps = 0;
	}
	
	int resultsMax = 0;
	int resultsMin = results[0];
	int mean = 0;

	for (int n = 0; (n + 1) <= sim; n++)
	{
		int ind = results[n];
                mean += results[n];
 
                if(ind > resultsMax)
                {
                        resultsMax = ind;
                }
 
                if(ind < resultsMin)
                {
                        resultsMin = ind;
                }
	}

	int resultsMean = (mean/sim);
 
        std::cout << "Max: " << resultsMax << std::endl;
        std::cout << "Min: " << resultsMin << std::endl;
        std::cout << "Mean: " << resultsMean << std::endl;

	return 0;
}

