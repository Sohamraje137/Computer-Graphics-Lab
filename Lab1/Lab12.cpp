#include <GL/glut.h>

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
        glShadeModel(GL_SMOOTH);
        glBegin(GL_TRIANGLES);
        glColor3f(0.1, 0.0, 0.3);
        glVertex3f(0, 0.5, 1);
        glColor3f(0.4, 0.5, 0.6);
        glVertex3f(1, 0, 0);
        glColor3f(0.7, 0.8, 0.9);
        glVertex3f(0, 1, 0);
        glEnd();

     /*glShadeModel(GL_SMOOTH);
        glBegin(GL_TRIANGLES);
        glColor3f(0.1, 0.2, 0.3);
        glVertex3f(0, 0, 0);
        glColor3f(0.4, 0.5, 0.6);
        glVertex3f(1, 0, 0);
        glColor3f(0.7, 0.8, 0.9);
        glVertex3f(0, 1, 0);
        glEnd();
         glBegin(GL_TRIANGLES);
        glColor3f(0.1, 0.2, 0.3);
        glVertex3f(0, 0,0);
        glVertex3f(1, 0,0);
        glVertex3f(0,1,0)
        // glVertex3f(0.0, 0.5, 0.0);
        // glVertex3f(0.0, 0.0, 0.5); */    
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}