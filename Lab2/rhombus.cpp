#include<GL/glut.h>
#include<math.h>
void dispsquare(void){


	    glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0,0,0,0);

    glBegin(GL_POLYGON);
		glColor3f(1, 0, 0);

            glVertex2f(0.5,0);
	    	glVertex2f(0,0.5);
	    	glVertex2f(-0.5, 0);
	    	glVertex2f(0,-0.5);
	    	glVertex2f(0.5,0);
	    glEnd();

	    glFlush();

}

int main( int argc, char** argv){

	    glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(900, 900);
	glutCreateWindow("Rhombus");
	glutDisplayFunc(dispsquare);
	glutMainLoop();

	return 0;
}