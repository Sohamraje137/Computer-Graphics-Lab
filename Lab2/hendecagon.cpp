#include<GL/glut.h>
#include<math.h>
#define PI 3.142124
void dispsquare(void){


	    glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0,0,0,0);

    glBegin(GL_LINE_LOOP);
    double t=0;
    for(int i = 0; i < 11; ++i)
    {
        glVertex2f( 0.5 * cos(t), 0.5 * sin(t));
        t += 2 * PI / 11;
    }
    glEnd();

	    glFlush();

}

int main( int argc, char** argv){

	    glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(900, 900);
	glutCreateWindow("Decagon");
	glutDisplayFunc(dispsquare);
	glutMainLoop();

	return 0;
}