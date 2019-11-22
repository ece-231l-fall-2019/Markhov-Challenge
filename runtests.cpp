#include <iostream>
#include <cstdlib>
#include <ctime>
int main ()
{	
	srand(time(NULL));
#if 0
	int row = 9;
	int column = 10;
	int test2[row][column] = {
	          { 50, 30, 0, 0, 20, 0, 0, 0, 0, 0 }
	        , { 50, 0, 50, 0, 0, 0, 0, 0, 0, 0 }
	        , { 0, 50, 0, 40, 10, 0, 0 , 0, 0, 0 }
	        , { 0, 0, 50, 0, 50, 0, 0, 0, 0, 0 }
	        , { 0, 20, 0, 30, 0, 50, 0, 0, 0, 0 }
	        , { 0, 0, 40, 0, 10, 0, 50, 0, 0, 0 }
	        , { 0, 0, 25, 0, 0, 25, 0, 50, 0, 0 }
	        , { 0, 0, 0, 20, 0, 30, 0, 0, 50, 0 }
	        , { 50, 0, 10, 0, 0, 0, 0, 50, 0, 50 }};
#endif
#if 0
	int row = 9;
	int column = 10;
	int test2[row][column] = {
	          { 50, 50, 0, 0, 0, 0, 0, 0, 0, 0 }
	        , { 50, 0, 50, 0, 0, 0, 0, 0, 0, 0 }
	        , { 0, 50, 0, 50, 0, 0, 0, 0, 0, 0 }
	        , { 0, 0, 50, 0, 50, 0, 0, 0, 0, 0 }
	        , { 0, 0, 0, 50, 0, 50, 0, 0, 0, 0 }
	        , { 0, 0, 0, 0, 50, 0, 50, 0, 0, 0 }
	        , { 0, 0, 0, 0, 0, 50, 0, 50, 0, 0 }
	        , { 0, 0, 0, 0, 0, 0, 50, 0, 50, 0 }
	        , { 0, 0, 0, 0, 0, 0, 0, 50, 0, 50 }};
#endif

#if 1
	int test[10][10] {};	

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
#endif	
	int results[SIM] = {0};
	for(int n; n < SIM; n++)
	{
		int node = 0;
		int SIM = 9;
		int Steps = 0;
		while(node != 9)
		{
			srand(time(NULL));
			int TotPercent = 0;
			int Dice = rand() % 100;
			for(int next = 0; next < 10; next ++)
			{
				TotPercent += test[node][next];
				if(Dice < TotPercent)
				{
					Steps ++; 
					node = next;
					break;
				}
				Steps ++;
			}
		}
		results[n] = Steps;
	}

	for (auto n : results)
	{
		std::cout<< n << std::endl;
	}
		//std::cout << Steps << std::endl;	
	return 0;
}

