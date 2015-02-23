thegameoflife: badNeighbor.o calculateRules.o getValue.o orgAlive.o printTable.o randomOrg.o thegameoflife.o
	gcc badNeighbor.o calculateRules.o getValue.o orgAlive.o printTable.o randomOrg.o thegameoflife.o -o thegameoflife

badNeighbor.o: badNeighbor.c badNeighbor.h
	gcc -g -c badNeighbor.c -o badNeighbor.o

calculateRules.o: calculateRules.c calculateRules.h
	gcc -g -c calculateRules.c -o calculateRules.o

getValue.o: getValue.c getValue.h
	gcc -g -c getValue.c -o getValue.o

orgAlive.o: orgAlive.c orgAlive.h
	gcc -g -c orgAlive.c -o orgAlive.o

printTable.o: printTable.c printTable.h
	gcc -g -c printTable.c -o printTable.o

randomOrg.o: randomOrg.c randomOrg.h
	gcc -g -c randomOrg.c -o randomOrg.o

thegameoflife.o: thegameoflife.c badNeighbor.h calculateRules.h getValue.h orgAlive.h printTable.h randomOrg.h
	gcc -g -c thegameoflife.c -o thegameoflife.o

