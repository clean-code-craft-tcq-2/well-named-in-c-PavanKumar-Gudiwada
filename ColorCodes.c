#include <stdio.h>

#include "TestColorNumberPair.h"
#include "GetColorNumberPair.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
    
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);   

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void printColorCodeManual()
{
	int i;
	ColorPair colorPairs[25];

	for(i = 0; i<=24; i++)
	{
		colorPairs[i] = GetColorFromPairNumber(i+1);
	}
	
	char str[13] = "";    
	//print user manual
	printf("\n---------Color Codes Table-------------\n");
	printf("Pair number | Major Color | Minor color\n");
	printf("---------------------------------------\n");
	for(i = 0; i<=24; i++)
	{
		ColorPairToFormatedString(&colorPairs[i], str);
		printf("%11d | %14s \n",i+1 ,colorPair_Formatted_String);
	}
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

	printColorCodeManual();

    return 0;
}
