#include "calculateRules.h"
#include "printTable.h"
#include "getValue.h"
#include "badNeighbor.h"
#include "randomOrg.h"
#include "orgAlive.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#define LIFE_YES true
#define LIFE_NO false

int  h,w,org,o, surface;
int table[100][100];
int tempTable[100][100];
int main(int argc, char *argv[]) 
{
	
	int randOrg, sf,o;
	int generation = 0;
		if(argc == 1)
		{
			h=30;
			w=30;
			sf=30*30;
			org=orgAlive(10,30,30);
			randomOrg(org,h,w);
			while(1)
			{
				system("clear");
				calculateRules(h,w);
				printTable(h,w);
				printf("Generation #%d\n", generation++);
				fflush(stdout);
				usleep(200000);
			}
		}
		if(argc == 2)
		{
			o = atoi(argv[1]);
			org=orgAlive(o,30,30);
			h=30;
			w=30;
			randomOrg(org,h,w);
			while(1)
			{
				system("clear");
				calculateRules(h,w);
				printTable(h,w);
				printf("Generation #%d\n", generation++);
				fflush(stdout);
				usleep(200000);
			}
		}
		if(argc == 3)
		{
			h = atoi(argv[1]);
			w = atoi(argv[2]);
			org=orgAlive(10,h,w);
			randomOrg(org,h,w);
			while(1)
			{
				system("clear");
				calculateRules(h,w);
				printTable(h,w);
				printf("Generation #%d\n", generation++);
				fflush(stdout);
				usleep(200000);
			}

		}
		if(argc == 4){
			o = atoi(argv[1]);
			h = atoi(argv[2]);
			w = atoi(argv[3]);
			org=orgAlive(o,h,w);
			randomOrg(org,h,w);
			while(1)
			{
				system("clear");
				calculateRules(h,w);
				printTable(h,w);
				printf("Generation %d\n", generation++);
				fflush(stdout);
				usleep(200000);
			}

		}

	return 0;
}

