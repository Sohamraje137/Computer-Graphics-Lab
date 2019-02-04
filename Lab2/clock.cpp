#include<GL/glut.h>
#include<math.h>
void dispsquare(void){


	    glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0,0,0,0);

float x,y;
double k=0;
glColor3f(1,1, 1);
for(double i =0; i <= 360;){
    glBegin(GL_LINES);
    x=0.5*cos(i);
    y=0.5*sin(i);
    glVertex2d(x, y);
    i=i+.5;
    x=0.5*cos(i);
    y=0.5*sin(i);
    glVertex2d(x, y);
    glVertex2d(0, 0);
    glEnd();
    i=i+.5;
}


glEnd();
glBegin(GL_LINES);
			glColor3f(1, 1, 1);
                 glVertex2d(0,0);
                 glVertex2d(-0.2,0.4);

glEnd();
glBegin(GL_LINES);
			glColor3f(1, 1, 1);
                 glVertex2d(0,0);
                 glVertex2d(-0.2,0.2);
             
glEnd();
	    glFlush();

}

int main( int argc, char** argv){

	    glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Clock");
  glutInitWindowSize(700, 700);

  
  /*set position of widow on the screen*/
 
	glutDisplayFunc(dispsquare);
	glutMainLoop();

	return 0;
}