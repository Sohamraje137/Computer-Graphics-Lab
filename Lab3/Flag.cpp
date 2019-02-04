#include<GL/glut.h>
#include<math.h>

#define PI 3.142124
void dispsquare(void){


        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0,0,0,0);


glEnd();
glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
                 glVertex2d(-0.5,-0.5);
                 glVertex2d(-0.52,-0.5);
                 glVertex2d(-0.52,0.32);
                 glVertex2d(-0.5,0.32);
glEnd();
//Green
glBegin(GL_POLYGON);
			glColor3f(0, 1, 0);
                 glVertex2d(-0.5,0.0);
                 glVertex2d(-0.5,0.1);
                 glVertex2d(0.0,0.1);
		glVertex2d(0.0,0.0);

glEnd();

//white
glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
                 glVertex2d(-0.5,0.1);
                 glVertex2d(-0.5,0.2);
                 glVertex2d(0.0,0.2);
		glVertex2d(0.0,0.1);

glEnd();
//saffron
glBegin(GL_POLYGON);
			glColor3f(1, 0.5, 0);
                 glVertex2d(-0.5,0.2);
                 glVertex2d(-0.5,0.3);
                 glVertex2d(0.0,0.3);
		glVertex2d(0.0,0.2);

glEnd();

float x,y;
double k=0;
glColor3f(0,0, 1);
for(double i =0; i <= 360;){
    glBegin(GL_LINES);
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x-0.25, y+0.15);
    i=i+.5;
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x-0.25, y+0.15);
    glEnd();
    i=i+.5;
}

glColor3f(0,0, 1);
 double t=0;
for(double i=0;i<24;i++){
	glBegin(GL_LINES);
	glVertex2d(-0.25,0.15);
	glVertex2d(-0.25+0.05*cos(t),0.15+0.05*sin(t));
        t += 2 * PI / 24;
	glEnd();
	}
glFlush();
}

int main( int argc, char** argv){

        glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(100, 200);
    glutCreateWindow("Indian National Flag");
    glutInitWindowSize(500, 300);

  /*set position of widow on the screen*/
 
    glutDisplayFunc(dispsquare);
    glutMainLoop();

    return 0;
}
