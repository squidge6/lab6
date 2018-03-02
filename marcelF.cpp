#include "fonts.h"

void displayName (int x, int y, const char* name)
{
	Rect rec;
	rec.left = x;
	rec.top = y;

	ggprint16(&rec, 16, 0xaaa111, name);
} 

