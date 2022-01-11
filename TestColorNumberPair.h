#ifndef TESTCOLORNUMBERPAIR_H__
#define TESTCOLORNUMBERPAIR_H__

#include "ColorCodes.h" //MajorColor, MinorColor, ColorPair

extern char colorPair_Formatted_String[30];

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
    
#endif
