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
	int sim = 100;
	size_t steps = 0;
	int results[sim] = {0};

	for (int n = 0; n < sim; n++) 
	{
		int Dice = 0;
		while(node != 9)
		{
			int TotPercent = 0;
			Dice = rand() % 100;
		
			for(int next = 0; next < 10; next++)
			{
				TotPercent += test[node][next];
				if(Dice <= TotPercent)
				{
					node = next;
					steps++; 
					break;
				}
				steps++;
			}
		}
		results[n] = steps;
	}
	for (int i = 0; i != sim; i++)
	{
		std::cout << "Steps: " << results[i] << std::endl;
	}
	return 0;
}

