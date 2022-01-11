#ifndef COLORCODES_H
#define COLORCODES_H

extern const char* MajorColorNames[];
    
extern const char* MinorColorNames[];
extern int numberOfMajorColors; 

extern int numberOfMinorColors;

extern char str[50];

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#endif
