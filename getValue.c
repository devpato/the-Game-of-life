#include "getValue.h"
int getValue(int row, int col, int h, int w) 
{
	if(row >= h || row < 0){

		return 0;
	}
	else if(col >= w|| col < 0){

		return 0;
	}
	else if(table[row][col] != 1)
	{
		return 0;

	} else {
		return 1;
	}
}
