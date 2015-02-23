#include "randomOrg.h"
#include  <stdlib.h>
void randomOrg(int org, int h, int w)
 {

	srand(time(NULL));
	int xs,ys,i,randNum;
	for(i=1;i<=org-1;i++)
	{
		xs=(h-1)*(rand()/(RAND_MAX + 1.0));
	        ys=(w-1)*(rand()/(RAND_MAX + 1.0));
		table[xs][ys] = 1;
	}
}
