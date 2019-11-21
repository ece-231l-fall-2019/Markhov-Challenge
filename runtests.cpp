#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{	
	size_t steps;
	int test[][] = {0};	
	
	int test[0][0] = 50;
	int test[0][1] = 50;

	int test[1][0] = 50;
	int test[1][3] = 50;
	
	int test[2][1] = 50;
	int test[2][4] = 50;
	
	int test[3][2] = 50;
	int test[3][5] = 50;
	
	int test[4][3] = 50;
	int test[4][6] = 50;
	
	int test[5][4] = 50;
	int test[5][7] = 50;
	
	int test[6][5] = 50;
	int test[6][8] = 50;
	
	int test[7][6] = 50;
	int test[7][8] = 50;
	
	int test[8][7] = 50;
	int test[8][9] = 50;
	
	int node = 0;
	int SIM = 10;
	int Steps = 0;
	int Results[];
	
	while(node != SIM)
	{
		int TotPercent = 0;
		int Dice = rand() % 100;
		
		for(int next = 0; next < SIM; next ++)
		{
			TotPercent += test[node][next];
			if(Dice < TotPercent)
				Steps ++; next = node;
			Steps ++;
		}
		Results.push_back(Steps);
	}
	
	return 0;
}

