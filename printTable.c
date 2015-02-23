#include "printTable.h"

void printTable( int h, int w)
 {
    int height, width,i;
		for (height = 0; height <= h; height++)
		 {
		for (width = 0; width <= w ; width++)
		 {
			if (table[height][width] == 1)
			 {
				printf(" X ");
			} else
			 {
				printf("   ");

			}
		}
                if(height<10){
                        printf("%d  ", height);
                }
                else if (height>=10){
                        printf("%d ", height);
                }

		printf("\n");
	}
        for(i=0; i<= w; i++)
        {
                if(i<10)
                {
                        printf("%d  ",i);
                }
                else
                        printf("%d ",i);
        }
	printf("\n");

}