#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

// 🟡 Simple text drawing function
void drawText(float x, float y, char *text)
{
    glRasterPos2f(x, y);  // Set text position
    for (int i = 0; text[i] != '\0'; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);  // Print each character
    }
}

// 🔵 Display callback function
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear screen

    // 🟨 Draw yellow title text
    glColor3f(1.0, 1.0, 0.0);
    drawText(30, 90, "Basic Shape Drawing");



//10 edge-Decagon
    glColor3ub(200, 120, 140);
    glBegin(GL_POLYGON);
    glVertex2f(10, 7.5);
    glVertex2f(7.5, 12.5);
    glVertex2f(10, 17.5);
    glVertex2f(15, 20);
    glVertex2f(20, 20);
    glVertex2f(25, 17.5);
    glVertex2f(27.5, 12.5);
    glVertex2f(25, 7.5);
    glVertex2f(20, 5);
    glVertex2f(15, 5);
    glEnd();

    glColor3ub(200, 120, 140);
    drawText(12, 2.5, "Decagon");
    glEnd();

//6 edges-hexagon
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(10, 25);
    glVertex2f(7.5, 30);
    glVertex2f(10, 35);
    glVertex2f(25, 35);
    glVertex2f(27.5, 30);
    glVertex2f(25, 25);
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);
    drawText(12, 22, "Hexagon");
    glEnd();

//3 edges-triangle
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(7.5, 40);
    glVertex2f(17.5, 55);
    glVertex2f(27.5, 40);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    drawText(12, 38, "Triangle");
    glEnd();

//11 edges-Hendecagon
    glColor3ub(9, 214, 9);
    glBegin(GL_POLYGON);
    glVertex2f(12.5, 60);
    glVertex2f(10, 63.5);
    glVertex2f(7.5, 67.5);
    glVertex2f(10, 72.5);
    glVertex2f(14.5, 75);
    glVertex2f(20.5, 75);
    glVertex2f(25, 72.5);
    glVertex2f(27.5, 67.5);
    glVertex2f(25, 62.5);
    glVertex2f(22.5, 60);
    glVertex2f(17.5,57.5);
    glEnd();

    glColor3ub(9, 214, 9);
    drawText(12,56, "Hendecagon");
    glEnd();

//7 edges-Heptagon
    glColor3ub(230, 160, 70);
    glBegin(GL_POLYGON);
    glVertex2f(40, 5);
    glVertex2f(35, 10);
    glVertex2f(35, 15);
    glVertex2f(45, 20);
    glVertex2f(55, 15);
    glVertex2f(55, 10);
    glVertex2f(50, 5);
    glEnd();

    glColor3ub(230, 160, 70);
    drawText(40, 2.5, "Heptagon");
    glEnd();

//Parralelogram
    glColor3ub(240,240,240);
    glBegin(GL_QUADS);
    glVertex2f(35, 25);
    glVertex2f(40, 35);
    glVertex2f(55, 35);
    glVertex2f(50, 25);
    glEnd();

    glColor3ub(240, 160, 70);
    drawText(40, 22, "Parralelogram");
    glEnd();

//12edges-dodecagon
    glColor3ub(160, 120, 110);
    glBegin(GL_POLYGON);
    glVertex2f(45, 40);
    glVertex2f(41, 41);
    glVertex2f(37, 43);
    glVertex2f(35, 47);
    glVertex2f(37, 51);
    glVertex2f(40, 54);
    glVertex2f(45, 55);
    glVertex2f(50, 54);
    glVertex2f(53, 51);
    glVertex2f(55, 47);
    glVertex2f(53, 43);
    glVertex2f(49, 41);
    glEnd();

    glColor3ub(160, 120, 110);
    drawText(40, 38, "Dodecagon");
    glEnd();


//8edges-octagon
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(45, 60);
    glVertex2f(40, 62);
    glVertex2f(35, 67);
    glVertex2f(40, 72);
    glVertex2f(45, 75);
    glVertex2f(50, 72);
    glVertex2f(55, 67);
    glVertex2f(50, 62);
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    drawText(40, 56, "octagon");
    glEnd();


//rectangle
    glColor3ub(245, 160, 130);
    glBegin(GL_QUADS);
    glVertex2f(60, 5);
    glVertex2f(60, 20);
    glVertex2f(75, 20);
    glVertex2f(75, 5);
    glEnd();

    glColor3ub(245, 160, 130);
    drawText(65, 2.5,"Rectangle");
    glEnd();



//circle
    glColor3ub(250, 270, 150);
    glBegin(GL_POLYGON);
    glVertex2f(68, 23);
    glVertex2f(66.6, 23.2);
    glVertex2f(65.8, 23.4);
    glVertex2f(64.8, 23.7);
    glVertex2f(64, 24);
    glVertex2f(63.4, 24.4);
    glVertex2f(62.6, 25.2);
    glVertex2f(62.2, 25.6);
    glVertex2f(62, 26);
    glVertex2f(61.8, 26.4);
    glVertex2f(61.6, 27.2);
    glVertex2f(61.4, 28);
    glVertex2f(61.2, 28.8);
    glVertex2f(61, 29.6);
    glVertex2f(61, 30);
    glVertex2f(61.1, 30.6);
    glVertex2f(61.2, 31.2);
    glVertex2f(61.4, 32.2);
    glVertex2f(61.6, 32.8);
    glVertex2f(61.8, 33.6);
    glVertex2f(62, 34);
    glVertex2f(62.4, 34.6);
    glVertex2f(63, 35.2);
    glVertex2f(63.4, 35.6);
    glVertex2f(64, 36);
    glVertex2f(65, 36.35);
    glVertex2f(66, 36.6);
    glVertex2f(66.8, 36.8);
    glVertex2f(68, 37);
    glVertex2f(68.6, 36.9);
    glVertex2f(69.5, 36.7);
    glVertex2f(70.45, 36.45);
    glVertex2f(71.4, 36.2);
    glVertex2f(72, 36);
    glVertex2f(74.2, 33.6);
    glVertex2f(74.4, 33);
    glVertex2f(74.6, 32.2);
    glVertex2f(74.8, 31.2);
    glVertex2f(75, 30);
    glVertex2f(74.9, 29.5);
    glVertex2f(74.8, 29);
    glVertex2f(74.7, 28.6);
    glVertex2f(74.6, 28.2);
    glVertex2f(74.55, 27.9);
    glVertex2f(74.4, 27.4);
    glVertex2f(74.2, 26.6);
    glVertex2f(74, 26);
    glVertex2f(73.6, 25.4);
    glVertex2f(73.2, 25);
    glVertex2f(72.8, 24.6);
    glVertex2f(72.4, 24.2);
    glVertex2f(72, 24);
    glVertex2f(71, 23.6);
    glVertex2f(70.2, 23.4);
    glVertex2f(69.2, 23.2);
    glVertex2f(72.6, 35.6);
    glVertex2f(73, 35.2);
    glVertex2f(73.4, 34.8);
    glVertex2f(73.8, 34.4);
    glVertex2f(74, 34);
    glEnd();

    glColor3ub(250, 270, 150);
    drawText(65, 21,"Circle");
             glEnd();

//nonagon
             glColor3ub(252, 244, 3);
             glBegin(GL_POLYGON);
             glVertex2f(70, 40);
             glVertex2f(65, 40);
             glVertex2f(62, 43);
             glVertex2f(60, 47.5);
             glVertex2f(62, 52);
             glVertex2f(67.5, 55);
             glVertex2f(73, 52);
             glVertex2f(75, 47.5);
             glVertex2f(73, 43);

             glEnd();
             glColor3ub(252, 244, 3);
             drawText(65, 38,"Nonagon");
             glEnd();

//PENTAGON
             glColor3ub(3, 215, 252);
             glBegin(GL_POLYGON);
             glVertex2f(62.5, 60);
             glVertex2f(60, 67.5);
             glVertex2f(67.5, 75);
             glVertex2f(75, 67.5);
             glVertex2f(72.5, 60);
                glEnd();

                glColor3ub(3, 215, 252);
                drawText(65, 56,"Pentagon");
                glEnd();
                      glFlush(); // Render everything
}

// 🟠 Initialize OpenGL settings
         void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);  // Background color = black

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
}

// 🔴 Main function
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Basic Shapes with Text");

    init(); // Setup OpenGL
    glutDisplayFunc(display); // Register display callback
    glutMainLoop(); // Keep the window running
    return 0;
}
