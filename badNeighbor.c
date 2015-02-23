#include "badNeighbor"
int badNeighbor(int row, int col,int h, int w)
 {
	int devilNext = 0;

	devilNext = devilNext +  getValue(row - 1, col - 1,h,w);
	devilNext = devilNext +  getValue(row - 1, col,h,w);
	devilNext = devilNext +  getValue( row - 1, col + 1,h,w);
	devilNext = devilNext +  getValue( row, col - 1,h,w);
	devilNext = devilNext +  getValue(row, col + 1,h,w);
	devilNext = devilNext +  getValue( row + 1, col - 1,h,w);
	devilNext = devilNext +  getValue(row + 1, col,h,w);
	devilNext = devilNext +  getValue( row + 1, col + 1,h,w);

	return devilNext;
}
