#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{	
	size_t steps;
	
	int test[10][10];	
	
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
	
	int node = 0;
	int dice = 0;

	while (node != 9)
	{
		tPerc = 0;
		dice = rand() % 100;
		for (int n = 0; n < 10; n++)
		{
			tPerc += test[n][node];
			node = n;
			steps++;
			break;
		}
	}

	return 0;
}

