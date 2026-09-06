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
    //road
    glColor3f(0.20, 0.20, 0.20);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(0,20);
    glVertex2f(100,20);
    glVertex2f(100,0);
    glEnd();

    glLineWidth(4.0f);
     glColor3f(1,1,1);
     glBegin(GL_LINE_STRIP);
     glVertex2f(0,10);
     glVertex2f(10,10);
     glEnd();

      glColor3f(1,1,1);
     glBegin(GL_LINE_STRIP);
     glVertex2f(20,10);
     glVertex2f(30,10);
     glEnd();

      glColor3f(1,1,1);
     glBegin(GL_LINE_STRIP);
     glVertex2f(40,10);
     glVertex2f(50,10);
     glEnd();

      glColor3f(1,1,1);
     glBegin(GL_LINE_STRIP);
     glVertex2f(60,10);
     glVertex2f(70,10);
     glEnd();

      glColor3f(1,1,1);
     glBegin(GL_LINE_STRIP);
     glVertex2f(80,10);
     glVertex2f(90,10);
     glEnd();



    //footpath
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0,20);
    glVertex2f(0,21);
    glVertex2f(100,21);
    glVertex2f(100,20);
    glEnd();

    //grass
    glColor3ub(42, 126, 25);
    glBegin(GL_QUADS);
    glVertex2f(0,21);
    glVertex2f(0,27);
    glVertex2f(100,27);
    glVertex2f(100,21);
    glEnd();

    //sky
    glColor3f(0.608, 0.863, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0,33);
    glVertex2f(0,100);
    glVertex2f(100,100);
    glVertex2f(100,33);
    glEnd();

   //trees

    glColor3ub (42, 126, 25);
    drawCircle(2,33,4);

    glColor3ub(42, 126, 25);
    drawCircle(8,34,5);

    glColor3ub(42, 126, 25);
    drawCircle(98,33,4);

    glColor3ub(42, 126, 25);
    drawCircle(92,34,5);



  //foundation
    glColor3ub(140, 82, 15);
    glBegin(GL_QUADS);
    glVertex2f(0,32);
    glVertex2f(0,33);
    glVertex2f(100,33);
    glVertex2f(100,32);
    glEnd();

 //yard
    glColor3ub(196, 112, 22);
    glBegin(GL_QUADS);
    glVertex2f(0,27);
    glVertex2f(0,32);
    glVertex2f(100,32);
    glVertex2f(100,27);
    glEnd();




//building
//leftside
    glColor3f(.65, 0.25, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(11,33);
    glVertex2f(11,60);
    glVertex2f(45,60);
    glVertex2f(45,33);
    glEnd();
//top
    glColor3f(.65, 0.25, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(15.5,60);
    glVertex2f(15.5,62);
    glVertex2f(40.5,62);
    glVertex2f(40.5,60);
    glEnd();

//ewu
glLineWidth(3.0f);
glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
glVertex2f(24,57);
glVertex2f(22,57);
glVertex2f(22,59);
glVertex2f(24,59);
glEnd();
glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
glVertex2f(22,59);
glVertex2f(22,61);
glVertex2f(24,61);
glEnd();

glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
glVertex2f(25,61);
glVertex2f(26,57);
glVertex2f(27,60);
glVertex2f(28,57);
glVertex2f(29,61);
glEnd();

glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
glVertex2f(30,61);
glVertex2f(30,58);
glVertex2f(30.50,57.5);
glVertex2f(31,57.25);
glVertex2f(31.50,57);
glVertex2f(32,57);
glVertex2f(32.50,57.25);
glVertex2f(33,57.5);
glVertex2f(33.50,58);
glVertex2f(33.50,61);
glEnd();

//windows
//firstcolumn
 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(12,36);
 glVertex2f(12,38);
 glVertex2f(14,38);
 glVertex2f(14,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(12,39);
 glVertex2f(12,41);
 glVertex2f(14,41);
 glVertex2f(14,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(12,42);
 glVertex2f(12,44);
 glVertex2f(14,44);
 glVertex2f(14,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(12,45);
 glVertex2f(12,47);
 glVertex2f(14,47);
 glVertex2f(14,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(12,48);
 glVertex2f(12,50);
 glVertex2f(14,50);
 glVertex2f(14,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(12,51);
 glVertex2f(12,53);
 glVertex2f(14,53);
 glVertex2f(14,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(12,54);
 glVertex2f(12,56);
 glVertex2f(14,56);
 glVertex2f(14,54);
 glEnd();

 //2ndcolumn
 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(15,36);
 glVertex2f(15,38);
 glVertex2f(17,38);
 glVertex2f(17,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(15,39);
 glVertex2f(15,41);
 glVertex2f(17,41);
 glVertex2f(17,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(15,42);
 glVertex2f(15,44);
 glVertex2f(17,44);
 glVertex2f(17,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(15,45);
 glVertex2f(15,47);
 glVertex2f(17,47);
 glVertex2f(17,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(15,48);
 glVertex2f(15,50);
 glVertex2f(17,50);
 glVertex2f(17,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(15,51);
 glVertex2f(15,53);
 glVertex2f(17,53);
 glVertex2f(17,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(15,54);
 glVertex2f(15,56);
 glVertex2f(17,56);
 glVertex2f(17,54);
 glEnd();

//3rdcolumn
 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(18,36);
 glVertex2f(18,38);
 glVertex2f(20,38);
 glVertex2f(20,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(18,39);
 glVertex2f(18,41);
 glVertex2f(20,41);
 glVertex2f(20,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(18,42);
 glVertex2f(18,44);
 glVertex2f(20,44);
 glVertex2f(20,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(18,45);
 glVertex2f(18,47);
 glVertex2f(20,47);
 glVertex2f(20,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(18,48);
 glVertex2f(18,50);
 glVertex2f(20,50);
 glVertex2f(20,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(18,51);
 glVertex2f(18,53);
 glVertex2f(20,53);
 glVertex2f(20,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(18,54);
 glVertex2f(18,56);
 glVertex2f(20,56);
 glVertex2f(20,54);
 glEnd();

 //4thcolumn
 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(21,36);
 glVertex2f(21,38);
 glVertex2f(23,38);
 glVertex2f(23,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(21,39);
 glVertex2f(21,41);
 glVertex2f(23,41);
 glVertex2f(23,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(21,42);
 glVertex2f(21,44);
 glVertex2f(23,44);
 glVertex2f(23,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(21,45);
 glVertex2f(21,47);
 glVertex2f(23,47);
 glVertex2f(23,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(21,48);
 glVertex2f(21,50);
 glVertex2f(23,50);
 glVertex2f(23,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(21,51);
 glVertex2f(21,53);
 glVertex2f(23,53);
 glVertex2f(23,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(21,54);
 glVertex2f(21,56);
 glVertex2f(23,56);
 glVertex2f(23,54);
 glEnd();
 //5thcolumn

 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(24,36);
 glVertex2f(24,38);
 glVertex2f(26,38);
 glVertex2f(26,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(24,39);
 glVertex2f(24,41);
 glVertex2f(26,41);
 glVertex2f(26,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(24,42);
 glVertex2f(24,44);
 glVertex2f(26,44);
 glVertex2f(26,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(24,45);
 glVertex2f(24,47);
 glVertex2f(26,47);
 glVertex2f(26,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(24,48);
 glVertex2f(24,50);
 glVertex2f(26,50);
 glVertex2f(26,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(24,51);
 glVertex2f(24,53);
 glVertex2f(26,53);
 glVertex2f(26,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(24,54);
 glVertex2f(24,56);
 glVertex2f(26,56);
 glVertex2f(26,54);
 glEnd();

//6thcolumn

 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(27,36);
 glVertex2f(27,38);
 glVertex2f(29,38);
 glVertex2f(29,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(27,39);
 glVertex2f(27,41);
 glVertex2f(29,41);
 glVertex2f(29,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(27,42);
 glVertex2f(27,44);
 glVertex2f(29,44);
 glVertex2f(29,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(27,45);
 glVertex2f(27,47);
 glVertex2f(29,47);
 glVertex2f(29,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(27,48);
 glVertex2f(27,50);
 glVertex2f(29,50);
 glVertex2f(29,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(27,51);
 glVertex2f(27,53);
 glVertex2f(29,53);
 glVertex2f(29,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(27,54);
 glVertex2f(27,56);
 glVertex2f(29,56);
 glVertex2f(29,54);
 glEnd();

 //7thcolumn

 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(30,36);
 glVertex2f(30,38);
 glVertex2f(32,38);
 glVertex2f(32,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(30,39);
 glVertex2f(30,41);
 glVertex2f(32,41);
 glVertex2f(32,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(30,42);
 glVertex2f(30,44);
 glVertex2f(32,44);
 glVertex2f(32,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(30,45);
 glVertex2f(30,47);
 glVertex2f(32,47);
 glVertex2f(32,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(30,48);
 glVertex2f(30,50);
 glVertex2f(32,50);
 glVertex2f(32,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(30,51);
 glVertex2f(30,53);
 glVertex2f(32,53);
 glVertex2f(32,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(30,54);
 glVertex2f(30,56);
 glVertex2f(32,56);
 glVertex2f(32,54);
 glEnd();

 //8thcolumn

 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(33,36);
 glVertex2f(33,38);
 glVertex2f(35,38);
 glVertex2f(35,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(33,39);
 glVertex2f(33,41);
 glVertex2f(35,41);
 glVertex2f(35,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(33,42);
 glVertex2f(33,44);
 glVertex2f(35,44);
 glVertex2f(35,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(33,45);
 glVertex2f(33,47);
 glVertex2f(35,47);
 glVertex2f(35,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(33,48);
 glVertex2f(33,50);
 glVertex2f(35,50);
 glVertex2f(35,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(33,51);
 glVertex2f(33,53);
 glVertex2f(35,53);
 glVertex2f(35,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(33,54);
 glVertex2f(33,56);
 glVertex2f(35,56);
 glVertex2f(35,54);
 glEnd();

 //9thcolumn

 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(36,36);
 glVertex2f(36,38);
 glVertex2f(38,38);
 glVertex2f(38,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(36,39);
 glVertex2f(36,41);
 glVertex2f(38,41);
 glVertex2f(38,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(36,42);
 glVertex2f(36,44);
 glVertex2f(38,44);
 glVertex2f(38,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(36,45);
 glVertex2f(36,47);
 glVertex2f(38,47);
 glVertex2f(38,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(36,48);
 glVertex2f(36,50);
 glVertex2f(38,50);
 glVertex2f(38,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(36,51);
 glVertex2f(36,53);
 glVertex2f(38,53);
 glVertex2f(38,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(36,54);
 glVertex2f(36,56);
 glVertex2f(38,56);
 glVertex2f(38,54);
 glEnd();

 //10thcolumn

 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(39,36);
 glVertex2f(39,38);
 glVertex2f(41,38);
 glVertex2f(41,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(39,39);
 glVertex2f(39,41);
 glVertex2f(41,41);
 glVertex2f(41,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(39,42);
 glVertex2f(39,44);
 glVertex2f(41,44);
 glVertex2f(41,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(39,45);
 glVertex2f(39,47);
 glVertex2f(41,47);
 glVertex2f(41,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(39,48);
 glVertex2f(39,50);
 glVertex2f(41,50);
 glVertex2f(41,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(39,51);
 glVertex2f(39,53);
 glVertex2f(41,53);
 glVertex2f(41,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(39,54);
 glVertex2f(39,56);
 glVertex2f(41,56);
 glVertex2f(41,54);
 glEnd();

//11thcolumn

 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(42,36);
 glVertex2f(42,38);
 glVertex2f(44,38);
 glVertex2f(44,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(42,39);
 glVertex2f(42,41);
 glVertex2f(44,41);
 glVertex2f(44,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(42,42);
 glVertex2f(42,44);
 glVertex2f(44,44);
 glVertex2f(44,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(42,45);
 glVertex2f(42,47);
 glVertex2f(44,47);
 glVertex2f(44,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(42,48);
 glVertex2f(42,50);
 glVertex2f(44,50);
 glVertex2f(44,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(42,51);
 glVertex2f(42,53);
 glVertex2f(44,53);
 glVertex2f(44,51);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(42,54);
 glVertex2f(42,56);
 glVertex2f(44,56);
 glVertex2f(44,54);
 glEnd();
//rightwall
    glColor3f(0.55, 0.20, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(70,33);
    glVertex2f(70,62);
    glVertex2f(76,63);
    glVertex2f(76,33);
    glEnd();

    glColor3f(0.38,0.22,0.016);
   glBegin(GL_LINE_LOOP);
   glVertex2f(70,62);
   glVertex2f(76,63);
   glEnd();
//rightside
    glColor3f(0.63,0.24, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(76,33);
    glVertex2f(76,63);
    glVertex2f(89,63);
    glVertex2f(89,33);
    glEnd();

    glColor3f(0.38,0.22,0.016);
   glBegin(GL_LINE_LOOP);
   glVertex2f(76,63);
   glVertex2f(89,63);

   glEnd();


//rightsideboard
   glColor3f(0.922, 0.616, 0.047);
   glBegin(GL_QUADS);
   glVertex2f(77.25,50);
   glVertex2f(77.25,60);
   glVertex2f(87.75,60);
   glVertex2f(87.75,50);
   glEnd();

   glColor3f(0.38,0.22,0.016);
   glBegin(GL_LINE_LOOP);
   glVertex2f(77.25,50);
   glVertex2f(77.25,60);
   glVertex2f(87.75,60);
   glVertex2f(87.75,50);
   glEnd();


//rightsidewindows
  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(77.25,36);
  glVertex2f(77.25,38);
  glVertex2f(79.25,38);
  glVertex2f(79.25,36);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(77.25,39);
  glVertex2f(77.25, 41);
  glVertex2f(79.25,41);
  glVertex2f(79.25,39);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(77.25,42);
  glVertex2f(77.25,44);
  glVertex2f(79.25,44);
  glVertex2f(79.25,42);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(77.25,45);
  glVertex2f(77.25,47);
  glVertex2f(79.25,47);
  glVertex2f(79.25,45);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(80.25,36);
  glVertex2f(80.25,38);
  glVertex2f(82.25,38);
  glVertex2f(82.25,36);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(80.25,39);
  glVertex2f(80.25, 41);
  glVertex2f(82.25,41);
  glVertex2f(82.25,39);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(80.25,42);
  glVertex2f(80.25,44);
  glVertex2f(82.25,44);
  glVertex2f(82.25,42);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(80.25,45);
  glVertex2f(80.25,47);
  glVertex2f(82.25,47);
  glVertex2f(82.25,45);
  glEnd();


  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(83.25,36);
  glVertex2f(83.25,38);
  glVertex2f(85.25,38);
  glVertex2f(85.25,36);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(83.25,39);
  glVertex2f(83.25, 41);
  glVertex2f(85.25,41);
  glVertex2f(85.25,39);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(83.25,42);
  glVertex2f(83.25,44);
  glVertex2f(85.25,44);
  glVertex2f(85.25,42);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(83.25,45);
  glVertex2f(83.25,47);
  glVertex2f(85.25,47);
  glVertex2f(85.25,45);
  glEnd();


  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(86.25,36);
  glVertex2f(86.25,38);
  glVertex2f(88.25,38);
  glVertex2f(88.25,36);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(86.25,39);
  glVertex2f(86.25, 41);
  glVertex2f(88.25,41);
  glVertex2f(88.25,39);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(86.25,42);
  glVertex2f(86.25,44);
  glVertex2f(88.25,44);
  glVertex2f(88.25,42);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(86.25,45);
  glVertex2f(86.25,47);
  glVertex2f(88.25,47);
  glVertex2f(88.25,45);
  glEnd();

//middle
    glColor3f(.55, 0.25, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(45,33);
    glVertex2f(45,56);
    glVertex2f(71,56);
    glVertex2f(71,33);
    glEnd();


//windows

//1stcolumn
 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(46,36);
 glVertex2f(46,38);
 glVertex2f(48,38);
 glVertex2f(48,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(46,39);
 glVertex2f(46,41);
 glVertex2f(48,41);
 glVertex2f(48,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(46,42);
 glVertex2f(46,44);
 glVertex2f(48,44);
 glVertex2f(48,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(46,45);
 glVertex2f(46,47);
 glVertex2f(48,47);
 glVertex2f(48,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(46,48);
 glVertex2f(46,50);
 glVertex2f(48,50);
 glVertex2f(48,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(46,51);
 glVertex2f(46,53);
 glVertex2f(48,53);
 glVertex2f(48,51);
 glEnd();

 //2ndcolumn
 glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(49,36);
 glVertex2f(49,38);
 glVertex2f(51,38);
 glVertex2f(51,36);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(49,39);
 glVertex2f(49,41);
 glVertex2f(51,41);
 glVertex2f(51,39);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(49,42);
 glVertex2f(49,44);
 glVertex2f(51,44);
 glVertex2f(51,42);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(49,45);
 glVertex2f(49,47);
 glVertex2f(51,47);
 glVertex2f(51,45);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(49,48);
 glVertex2f(49,50);
 glVertex2f(51,50);
 glVertex2f(51,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(49,51);
 glVertex2f(49,53);
 glVertex2f(51,53);
 glVertex2f(51,51);
 glEnd();

 //3rdcolumn

   glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(52,48);
 glVertex2f(52,50);
 glVertex2f(54,50);
 glVertex2f(54,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(52,51);
 glVertex2f(52,53);
 glVertex2f(54,53);
 glVertex2f(54,51);
 glEnd();

 //4thcolumn

   glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(55,48);
 glVertex2f(55,50);
 glVertex2f(57,50);
 glVertex2f(57,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(55,51);
 glVertex2f(55,53);
 glVertex2f(57,53);
 glVertex2f(57,51);
 glEnd();

 //6thcolumn

   glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(58,48);
 glVertex2f(58,50);
 glVertex2f(60,50);
 glVertex2f(60,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(58,51);
 glVertex2f(58,53);
 glVertex2f(60,53);
 glVertex2f(60,51);
 glEnd();

 //7thcolumn
   glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(61,48);
 glVertex2f(61,50);
 glVertex2f(63,50);
 glVertex2f(63,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(61,51);
 glVertex2f(61,53);
 glVertex2f(63,53);
 glVertex2f(63,51);
 glEnd();

 //8thcolumn

   glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(64,48);
 glVertex2f(64,50);
 glVertex2f(66,50);
 glVertex2f(66,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(64,51);
 glVertex2f(64,53);
 glVertex2f(66,53);
 glVertex2f(66,51);
 glEnd();

 //9thcolumn

    glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(67,48);
 glVertex2f(67,50);
 glVertex2f(69,50);
 glVertex2f(69,48);
 glEnd();

  glColor3f(0,0,0);
 glBegin(GL_QUADS);
 glVertex2f(67,51);
 glVertex2f(67,53);
 glVertex2f(69,53);
 glVertex2f(69,51);
 glEnd();

//middlewall
     glColor3f(0.55,0.20,0.05);
    glBegin(GL_QUADS);
    glVertex2f(51,33);
    glVertex2f(51,47);
    glVertex2f(56,48);
    glVertex2f(56,33);
    glEnd();

//middlefront
    glColor3f(.65, 0.25, 0.05);
    glBegin(GL_QUADS);
    glVertex2f(56,33);
    glVertex2f(56,48);
    glVertex2f(75,48);
    glVertex2f(75,33);
    glEnd();
//windows

//1stcolumn
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(57,38);
glVertex2f(57,40);
glVertex2f(59,40);
glVertex2f(59,38);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(57,41);
glVertex2f(57,43);
glVertex2f(59,43);
glVertex2f(59,41);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(57,44);
glVertex2f(57,46);
glVertex2f(59,46);
glVertex2f(59,44);
glEnd();

//2ndcolumn
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(60,38);
glVertex2f(60,40);
glVertex2f(62,40);
glVertex2f(62,38);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(60,41);
glVertex2f(60,43);
glVertex2f(62,43);
glVertex2f(62,41);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(60,44);
glVertex2f(60,46);
glVertex2f(62,46);
glVertex2f(62,44);
glEnd();

//3rdcolumn
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(63,38);
glVertex2f(63,40);
glVertex2f(65,40);
glVertex2f(65,38);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(63,41);
glVertex2f(63,43);
glVertex2f(65,43);
glVertex2f(65,41);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(63,44);
glVertex2f(63,46);
glVertex2f(65,46);
glVertex2f(65,44);
glEnd();

//4thcolumn
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(66,38);
glVertex2f(66,40);
glVertex2f(68,40);
glVertex2f(68,38);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(66,41);
glVertex2f(66,43);
glVertex2f(68,43);
glVertex2f(68,41);
glEnd();
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(66,44);
glVertex2f(66,46);
glVertex2f(68,46);
glVertex2f(68,44);
glEnd();

//5thcolumn
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(69,38);
glVertex2f(69,40);
glVertex2f(71,40);
glVertex2f(71,38);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(69,41);
glVertex2f(69,43);
glVertex2f(71,43);
glVertex2f(71,41);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(69,44);
glVertex2f(69,46);
glVertex2f(71,46);
glVertex2f(71,44);
glEnd();

//6thcolumn
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(72,38);
glVertex2f(72,40);
glVertex2f(74,40);
glVertex2f(74,38);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(72,41);
glVertex2f(72,43);
glVertex2f(74,43);
glVertex2f(74,41);
glEnd();

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(72,44);
glVertex2f(72,46);
glVertex2f(74,46);
glVertex2f(74,44);
glEnd();


//sun
    glColor3f(1.00, 0.80, 0.075);
    drawCircle(15,90,7);

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    drawCirclepoints(15,90,7);
    glEnd();
//birds
    glLineWidth(3.0f);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(40,70);
    glVertex2f(41,71);
    glVertex2f(42,70);
    glVertex2f(43,71);
    glVertex2f(44,70);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(46,72);
    glVertex2f(47,73);
    glVertex2f(48,72);
    glVertex2f(49,73);
    glVertex2f(50,72);
    glEnd();


    //lampposts
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(20,21);
    glVertex2f(20,23);
    glVertex2f(22,23);
    glVertex2f(22,21);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(20.75,23);
    glVertex2f(20.75,43);
    glVertex2f(21.25,43);
    glVertex2f(21.25,23);
    glEnd();
    //light
    glColor3f(0.95, 0.90, 0.58);
    drawCircle(21,43,2);

    glLineWidth(2.0f);
    glColor3f(1,1,1);
    glBegin(GL_LINE_LOOP);
    drawCirclepoints(21,43,2);
    glEnd();

    //Createdby
    glColor3f(1,1,1);
    drawText(85,5,"Siam Ahmed");
    drawText(85,3,"2022-2-60-074");
    glFlush();


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
    glutCreateWindow("a simple city scene,");//title
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
