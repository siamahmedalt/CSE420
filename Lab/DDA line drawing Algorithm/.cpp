
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float X1, Y1, X2, Y2, m;
float dx, dy;

void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 1.0);
glPointSize(8.0f);
glBegin(GL_POINTS);

dx = X2 - X1;
dy = Y2 - Y1;

// Handle Vertical Line (Infinite Slope)
if (dx == 0) {
printf("--- Vertical Line ---\n");
int steps = abs((int)dy);
float yStep = (Y1 < Y2) ? 1 : -1;
float currentY = Y1;
for(int i = 0; i <= steps; i++) {
float rX = roundf(X1);
float rY = roundf(currentY);
glVertex2f(rX / 100.0, rY / 100.0);

printf("(%.2f, %.2f) ------> Rounded -----> (%.0f, %.0f)\n", X1, currentY, rX, rY);
currentY += yStep;
}
}
else {
m = dy / dx;
printf("--- Slope (m) = %.2f ---\n", m);

float xInc = X1, yInc = Y1;
int steps;
float xStep, yStep;

// Logic for different slope conditions
if (m < -1) {
// Case: m < -1 (Steep Negative)
steps = abs((int)dy);
yStep = (Y1 < Y2) ? 1 : -1;
xStep = dx / (float)steps;
}
else if (m == -1) {
// Case: m = -1 (Perfect Negative Diagonal)
steps = abs((int)dx);
xStep = (X1 < X2) ? 1 : -1;
yStep = (Y1 < Y2) ? 1 : -1;
}
else if (m > -1 && m < 0) {
// Case: m > -1 (Shallow Negative)
steps = abs((int)dx);
xStep = (X1 < X2) ? 1 : -1;
yStep = dy / (float)steps;

}
else if (m >= 0 && m <= 1) {
// Case: Positive Shallow
steps = abs((int)dx);
xStep = (X1 < X2) ? 1 : -1;
yStep = dy / (float)steps;
}
else {
// Case: m > 1 (Positive Steep)
steps = abs((int)dy);
yStep = (Y1 < Y2) ? 1 : -1;
xStep = dx / (float)steps;
}

// Execution and Printing
for(int i = 0; i <= steps; i++) {
float rX = roundf(xInc);
float rY = roundf(yInc);

// Plotting scaled values
glVertex2f(rX / 100.0, rY / 100.0);

// Outputting the float coordinates and their roundf result
printf("(%.2f, %.2f) ------> Rounded -----> (%.0f, %.0f)\n", xInc, yInc, rX, rY);

xInc += xStep;
yInc += yStep;
}
}

glEnd();
glFlush();
}

void init(void)
{
glClearColor(0.0, 0.0, 0.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
// Ortho is set to 5.0 to handle coordinates up to 500 comfortably
glOrtho(0.0, 5.0, 0.0, 5.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
printf("Enter (X1, Y1): ");
scanf("%f %f", &X1, &Y1);
printf("Enter (X2, Y2): ");
scanf("%f %f", &X2, &Y2);
printf("\nProcessing DDA Steps:\n");
printf("--------------------------------------------------\n");

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(600, 600);
glutInitWindowPosition(100, 100);
glutCreateWindow("DDA Line Drawing - Rounded Output");
init();
glutDisplayFunc(display);
glutMainLoop();

return 0;
}
