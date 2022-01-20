#include <stdio.h>

#include"ColorCodes.h"
#include "GetColorNumberPair.h"
#include "TestColorNumberPair.h"

void printColorCodeManual()
{
	int i;
	ColorPair colorPairs[25];

	//print user manual
	printf("\n---------Color Codes Table-------------\n");
	printf("Pair number | Major Color | Minor color\n");
	printf("---------------------------------------\n");

	for(i = 0; i<=24; i++)
	{
		colorPairs[i] = GetColorFromPairNumber(i+1);
		printf("%11d | %-11s | %-14s \n",i+1 , MajorColorNames[colorPairs[i].majorColor], MinorColorNames[colorPairs[i].minorColor]);
	}
}
