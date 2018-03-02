//******************************
//author:	Marcel Furdui
//course:	Cmps 3350
//assignment:	Lab06
//******************************

#include "fonts.h"
#include <GL/glx.h> 

void displayName (int x, int y, const char* name)
{
	Rect rec;
	rec.left = x;
	rec.top = y;

	ggprint16(&rec, 16, 0x33c715, name);
} 


void drawBox (int x, int y)
{
	static float angle = 0.0;
	//         red  grn  blu
	glColor3ub(255, 100, 10);
	glPushMatrix();
	glTranslatef(x, y, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glTranslatef(-50, -50, 0);
	//glRotatef(angle, 0.0f, 0.0f, 1.0f);
	angle = angle + 2.5;
	glBegin(GL_QUADS);
		glVertex2i(0,0);
		glVertex2i(0,100);
		glVertex2i(100,100);
		glVertex2i(100,0);
	glEnd();
	Rect r;
	r.bot = 50;
	r.left = 50;
	r.center = 1;
	ggprint8b(&r, 16, 0x00ffff, "marcelF");
	glPopMatrix();
}
