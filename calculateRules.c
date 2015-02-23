#include "calculateRules.h";
void calculateRules(int h, int w) {
	int devilNext, height, width;

	for (height = 0; height < h; height++) 
	{
	    for (width = 0; width < w; width++)
		  {
		devilNext = badNeighbor(height, width, h, w);
		if (devilNext==3) 
		{
		tempTable[height][width] = 1;
		} else if (devilNext == 2 && table[height][width] == 1) 
		{
		tempTable[height][width] = 1;
		}
 		else
		 {
		tempTable[height][width] = 0;
		}
		}
	}
	for (height = 0; height < 100; height++)
	 {
		for (width = 0; width < 100; width++)
		 {
			table[height][width] = tempTable[height][width];
		}
	}
}
