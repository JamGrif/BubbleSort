#include <iostream>
using namespace std;

int const ArraySize = 30;
int Sort[ArraySize] = {8234,33564,1422,29,1440,35644,72325,22,934,113,342,654,5423,547,4235,5647,354,1342,1,543,67,3543564,87,0,23,987654,23,5647,3564,123};

void PrintSort()
{
	for (int i = 0; i < ArraySize; i++)
	{
		cout << "Position " << i << " in the array is " << Sort[i] << "!" << endl;
	}
}

void BubbleSort()
{
	int x = 0, y = 1;
	int firstnum = 0, secondnum = 0;
	for (int j = 0; j < ArraySize * ArraySize; j++)
	{
		x = 0;
		y = 1;
		for (int i = 1; i < ArraySize; i++)
		{
			if (Sort[x] > Sort[y])
			{
				firstnum = Sort[x];
				secondnum = Sort[y];
				Sort[x] = secondnum;
				Sort[y] = firstnum;
			}
			x++;
			y++;
		}
	}
}

int main()
{
	BubbleSort();
	PrintSort();
}


