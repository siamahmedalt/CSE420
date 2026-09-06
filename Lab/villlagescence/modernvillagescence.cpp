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
    glVertex2f(0,60);
    glVertex2f(0,100);
    glVertex2f(100, 100);
    glVertex2f(100, 60);
    glEnd();
//river
    glColor3f(0.2, 0.5, 0.8);
    glBegin(GL_QUADS);
    glVertex2f(0,40);
    glVertex2f(0,60);
    glVertex2f(100,60);
    glVertex2f(100,40);
    glEnd();

//clouds
    glColor3f(1.0,1.0,1.0);
    drawCircle(11,82,3);
    glColor3f(1.0,1.0,1.0);
    drawCircle(15,85,4);
    glColor3f(1.0,1.0,1.0);
    drawCircle(19,82,3);

    glColor3f(1.0,1.0,1.0);
    drawCircle(41,87,3);
    glColor3f(1.0,1.0,1.0);
    drawCircle(45,90,4);
    glColor3f(1.0,1.0,1.0);
    drawCircle(49,87,3);

    glColor3f(1.0,1.0,1.0);
    drawCircle(66,82,3);
    glColor3f(1.0,1.0,1.0);
    drawCircle(70,85,4);
    glColor3f(1.0,1.0,1.0);
    drawCircle(74,82,3);
//grass
    glColor3f(0.52, 0.87, 0.25);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(0,40);
    glVertex2f(100,40);
    glVertex2f(100,0);
    glEnd();
//path
    glColor3f(0.4, 0.25, 0.15);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(15,40);
    glVertex2f(25,40);
    glVertex2f(15,0);
    glEnd();

//housewall(fronts1)
    glColor3f(0.95, 0.9, 0.8);
    glBegin(GL_QUADS);
    glVertex2f(32,20);
    glVertex2f(32,27);
    glVertex2f(42,27);
    glVertex2f(42,20);
    glEnd();
//door
    glColor3f(0.2, 0.4, 0.9);
    glBegin(GL_QUADS);
    glVertex2f(36,20);
    glVertex2f(36,23);
    glVertex2f(38,23);
    glVertex2f(38,20);
    glEnd();
//window
    glColor3f(0.5, 0.8, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(33,22);
    glVertex2f(33,24);
    glVertex2f(35,24);
    glVertex2f(35,22);
    glEnd();

//houseswall(side1)
    glColor3f(0.85, 0.8, 0.7);
    glBegin(GL_QUADS);
    glVertex2f(42,20);
    glVertex2f(42,27);
    glVertex2f(45,29);
    glVertex2f(45,21);
    glEnd();
//roof1
    glColor3f(0.8, 0.4, 0.1);
    glBegin(GL_QUADS);
    glVertex2f(31,27);
    glVertex2f(34,30);
    glVertex2f(46,30);
    glVertex2f(43,27);
    glEnd();

//housewall(front2)
    glColor3f(0.95, 0.9, 0.8);
    glBegin(GL_QUADS);
    glVertex2f(56,20);
    glVertex2f(56,27);
    glVertex2f(66,27);
    glVertex2f(66,20);
    glEnd();
//door2
    glColor3f(0.2, 0.4, 0.9);
    glBegin(GL_QUADS);
    glVertex2f(60,20);
    glVertex2f(60,23);
    glVertex2f(62,23);
    glVertex2f(62,20);
    glEnd();
//window2
    glColor3f(0.5, 0.8, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(57,22);
    glVertex2f(57,24);
    glVertex2f(59,24);
    glVertex2f(59,22);
    glEnd();

//houseswall(side2)
    glColor3f(0.85, 0.8, 0.7);
    glBegin(GL_QUADS);
    glVertex2f(66,20);
    glVertex2f(66,27);
    glVertex2f(69,29);
    glVertex2f(69,21);
    glEnd();
//roof2
    glColor3f(0.8, 0.4, 0.1);
    glBegin(GL_QUADS);
    glVertex2f(55,27);
    glVertex2f(58,30);
    glVertex2f(70,30);
    glVertex2f(67,27);
    glEnd();

//housewall(front3)
    glColor3f(0.95, 0.9, 0.8);
    glBegin(GL_QUADS);
    glVertex2f(80,20);
    glVertex2f(80,27);
    glVertex2f(90,27);
    glVertex2f(90,20);
    glEnd();
//door3
    glColor3f(0.2, 0.4, 0.9);
    glBegin(GL_QUADS);
    glVertex2f(84,20);
    glVertex2f(84,23);
    glVertex2f(86,23);
    glVertex2f(86,20);
    glEnd();
//window3
    glColor3f(0.5, 0.8, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(81,22);
    glVertex2f(81,24);
    glVertex2f(83,24);
    glVertex2f(83,22);
    glEnd();

//houseswall(side3)
    glColor3f(0.85, 0.8, 0.7);
    glBegin(GL_QUADS);
    glVertex2f(90,20);
    glVertex2f(90,27);
    glVertex2f(93,29);
    glVertex2f(93,21);
    glEnd();
//roof3
    glColor3f(0.8, 0.4, 0.1);
    glBegin(GL_QUADS);
    glVertex2f(79,27);
    glVertex2f(82,30);
    glVertex2f(94,30);
    glVertex2f(91,27);
    glEnd();

//sun
    glColor3f(1.0, 0.0, 0.0);
    drawCircle(85,90,5);
//birds
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(5,90);
    glVertex2f(6,92);
    glVertex2f(7,90);
    glVertex2f(8,92);
    glVertex2f(9,90);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(20,90);
    glVertex2f(21,92);
    glVertex2f(22,90);
    glVertex2f(23,92);
    glVertex2f(24,90);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(10,95);
    glVertex2f(11,97);
    glVertex2f(12,95);
    glVertex2f(13,97);
    glVertex2f(14,95);
    glEnd();
//tree1
    glColor3f(0.232, 0.106, 0.004);
    glBegin(GL_QUADS);
    glVertex2f(6,25);
    glVertex2f(6,35);
    glVertex2f(7.5,35);
    glVertex2f(7.5,25);
    glEnd();
    glColor3f(0.0, 0.6, 0.1);
    drawCircle(6.75,35,3);
//tree2
    glColor3f(0.232, 0.106, 0.004);
    glBegin(GL_QUADS);
    glVertex2f(21,22);
    glVertex2f(21,32);
    glVertex2f(22.5,32);
    glVertex2f(22.5,22);
    glEnd();
    glColor3f(0.0, 0.6, 0.1);
    drawCircle(21.75,32,3);
//tree3
    glColor3f(0.232, 0.106, 0.004);
    glBegin(GL_QUADS);
    glVertex2f(50,22);
    glVertex2f(50,32);
    glVertex2f(51.5,32);
    glVertex2f(51.5,22);
    glEnd();
    glColor3f(0.0, 0.6, 0.1);
    drawCircle(50.75,32,3);
//tree4
    glColor3f(0.232, 0.106, 0.004);
    glBegin(GL_QUADS);
    glVertex2f(74,22);
    glVertex2f(74,32);
    glVertex2f(75.5,32);
    glVertex2f(75.5,22);
    glEnd();
    glColor3f(0.0, 0.6, 0.1);
    drawCircle(74.75,32,3);
//tree5
    glColor3f(0.232, 0.106, 0.004);
    glBegin(GL_QUADS);
    glVertex2f(95,22);
    glVertex2f(95,32);
    glVertex2f(96.5,32);
    glVertex2f(96.5,22);
    glEnd();
    glColor3f(0.0, 0.6, 0.1);
    drawCircle(95.75,32,3);

//fence
    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(35,5);
    glVertex2f(35,12);
    glVertex2f(35.75,12);
    glVertex2f(35.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(40,5);
    glVertex2f(40,12);
    glVertex2f(40.75,12);
    glVertex2f(40.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(45,5);
    glVertex2f(45,12);
    glVertex2f(45.75,12);
    glVertex2f(45.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(50,5);
    glVertex2f(50,12);
    glVertex2f(50.75,12);
    glVertex2f(50.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(55,5);
    glVertex2f(55,12);
    glVertex2f(55.75,12);
    glVertex2f(55.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(60,5);
    glVertex2f(60,12);
    glVertex2f(60.75,12);
    glVertex2f(60.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(65,5);
    glVertex2f(65,12);
    glVertex2f(65.75,12);
    glVertex2f(65.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(70,5);
    glVertex2f(70,12);
    glVertex2f(70.75,12);
    glVertex2f(70.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(75,5);
    glVertex2f(75,12);
    glVertex2f(75.75,12);
    glVertex2f(75.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(80,5);
    glVertex2f(80,12);
    glVertex2f(80.75,12);
    glVertex2f(80.75,5);
    glEnd();

    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(33,10);
    glVertex2f(33,10.5);
    glVertex2f(83,10.5);
    glVertex2f(83,10);
    glEnd();

//boatbody
    glColor3f(0.232, 0.106, 0.004);
    glBegin(GL_POLYGON);
    glVertex2f(32,48);
    glVertex2f(30,49.5);
    glVertex2f(40,49.5);
    glVertex2f(38,48);
    glEnd();
    glColor3f(0.232, 0.106, 0.004);
    glBegin(GL_QUADS);
    glVertex2f(31,48);
    glVertex2f(32,51);
    glVertex2f(32.25,51);
    glVertex2f(31.25,48);
    glEnd();
//boatstripes
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(30,48);
    glVertex2f(40,48);
    glEnd();

//Createdby
    glColor3f(0.0,0.0,0.0);
    drawText(85,5,"Siam Ahmed");
    drawText(85,3,"31/01/26");
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
    glutCreateWindow("Village Scene with more objects");//title
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
