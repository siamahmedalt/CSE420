#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <string.h>
#include <math.h>
// Function to draw text on screen
void drawText(float x, float y, const char* text)
{
    glRasterPos2f(x, y);
    for (int i = 0; i < strlen(text); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }
}

//Draw Heading
void drawHext(float x, float y, const char* text)
{
    glRasterPos2f(x, y);
    for (int i = 0; i < strlen(text); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}

// Function to draw a circle
void drawCircle(float cx, float cy, float radius)
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float theta = i * (M_PI / 180.0f);
        float x = radius * cos(theta) + cx;
        float y = radius * sin(theta) + cy;
        glVertex2f(x, y);
    }
    glEnd();
}
//Function to draw border around circle
void drawCirclepoints(float x, float y, float r)
{
    for (int i = 0; i < 360; i++)
    {
        float theta = i * 3.14159 / 180;
        glVertex2f(x + r * cos(theta), y + r * sin(theta));
    }
}
// Display callback function to render the shapes
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
//sky
    glColor3f(0.608, 0.863, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0,40);
    glVertex2f(0,100);
    glVertex2f(100, 100);
    glVertex2f(100, 40);
    glEnd();
//soil
    glColor3f(0.62, 0.53, 0.37);
    glBegin(GL_QUADS);
    glVertex2f(0,30);
    glVertex2f(0,40);
    glVertex2f(100,40);
    glVertex2f(100,30);
    glEnd();

//clouds
    glColor3f(1.0,1.0,1.0);
    drawCircle(7,80,5);
    glColor3f(1.0,1.0,1.0);
    drawCircle(13,85,6);
    glColor3f(1.0,1.0,1.0);
    drawCircle(19,80,5);
//grass
    glColor3f(0.52, 0.87, 0.25);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(0,30);
    glVertex2f(100,30);
    glVertex2f(100,0);
    glEnd();
//housewall
    glColor3f(0.922, 0.698, 0.008);
    glBegin(GL_QUADS);
    glVertex2f(30,20);
    glVertex2f(30,40);
    glVertex2f(50,40);
    glVertex2f(50,20);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(30,20);
    glVertex2f(30,40);
    glVertex2f(50,40);
    glVertex2f(50,20);
    glEnd();
//roof
    glColor3f(0.922, 0.467, 0.008);
    glBegin(GL_TRIANGLES);
    glVertex2f(28,40);
    glVertex2f(40,60);
    glVertex2f(52,40);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(28,40);
    glVertex2f(40,60);
    glVertex2f(52,40);
    glEnd();
//Door
    glColor3f(0.549, 0.357, 0.02);
    glBegin(GL_QUADS);
    glVertex2f(38,20);
    glVertex2f(38,35);
    glVertex2f(42,35);
    glVertex2f(42,20);
    glEnd();
    glColor3f(0.0, 0.0, 0.00);
    glBegin(GL_LINE_LOOP);
    glVertex2f(38,20);
    glVertex2f(38,35);
    glVertex2f(42,35);
    glVertex2f(42,20);
    glEnd();

//window
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(34,28);
    glVertex2f(34,32);
    glVertex2f(36,32);
    glVertex2f(36,28);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(34,28);
    glVertex2f(34,32);
    glVertex2f(36,32);
    glVertex2f(36,28);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(44,28);
    glVertex2f(44,32);
    glVertex2f(46,32);
    glVertex2f(46,28);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(44,28);
    glVertex2f(44,32);
    glVertex2f(46,32);
    glVertex2f(46,28);
    glEnd();

//treetrunk
    glColor3f(0.38, 0.18, 0.016);
    glBegin(GL_QUADS);
    glVertex2f(62,20);
    glVertex2f(62,70);
    glVertex2f(68,70);
    glVertex2f(68,20);
    glEnd();
//leaves
    glColor3f(0.0, 0.45, 0.05);
    drawCircle(60,70,8);
    glColor3f(0.0, 0.45, 0.05);
    drawCircle(70,70,8);
    glColor3f(0.0, 0.45, 0.05);
    drawCircle(65,80,8);
//sun
    glColor3f(1.0, 0.0, 0.0);
    drawCircle(85,90,7);

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    drawCirclepoints(85,90,7);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(10,90);
    glVertex2f(12,92);
    glVertex2f(14,90);
    glVertex2f(16,92);
    glVertex2f(18,90);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(10,95);
    glVertex2f(12,97);
    glVertex2f(14,95);
    glVertex2f(16,97);
    glVertex2f(18,95);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(20,90);
    glVertex2f(22,92);
    glVertex2f(24,90);
    glVertex2f(26,92);
    glVertex2f(28,90);
    glEnd();

    glFlush();
}

// Initialization
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Simple Village Scene)");//title
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
