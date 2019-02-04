#include<GL/glut.h>
#include<math.h>
void dispsquare(void){


	    glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0,0,0,0);

glBegin(GL_POLYGON);
 
		glColor3f(0.4, 0.4, 0.4);
                glVertex2d(0,1);
                 glVertex2d(-1,1);
                 glVertex2d(-1,1);
                 glVertex2d(-1,-1);
                 glVertex2d(1,-1);
                 glVertex2d(1,1);
glEnd();
		glClearColor(0,0,0,0);

glBegin(GL_POLYGON);
 
		glColor3f(0, 1, 0);
                glVertex2d(-1,-0.2);
                 glVertex2d(-1,-1);
                 glVertex2d(0,-1);
                 glVertex2d(1,-1);
                 glVertex2d(1,-0.2);
                 // glVertex2d()
                 // glVertex2d(1,1);
glEnd();



    glBegin(GL_POLYGON);
		glColor3f(1, 0, 0);

            glVertex2f(0.5,0);
	    	glVertex2f(0.25,0.25);
	    	glVertex2f(0, 0);
	    	glVertex2f(0,-0.5);
	    	glVertex2f(0.5,-0.5);
	    glEnd();
    glBegin(GL_POLYGON);

	    	glColor3f(0.7, 0.8, 0.9);
	    	glVertex2f(0.15,-0.5);
	    	glVertex2f(0.15,-0.2);
	    	glVertex2f(0.35,-0.2);
	    	glVertex2f(0.35,-0.5);


	    glEnd();


//CAR

	    glBegin(GL_POLYGON);
	    	glColor3f(0,0,1);
	    	glVertex2d(-0.9,-0.6);
	    	glVertex2d(-0.7,-0.6);
	    	glVertex2d(-0.55,-0.4);
	    	glVertex2d(-0.15,-0.4);
	    	glVertex2d(0.15,-0.6);
	    	glVertex2d(0.15,-0.8);
	    	glVertex2d(-0.9,-0.8);

	    glEnd();

//wheels
	    float x,y;
glColor3f(1, 1, 1);
for(double i =0; i <= 360;){
    glBegin(GL_TRIANGLES);
    x=0.15*cos(i);
    y=0.15*sin(i);
    glVertex2d(x-0.7, y-0.7);
    i=i+.5;
    x=0.15*cos(i);
    y=0.15*sin(i);
    glVertex2d(x-0.7, y-0.7);
    glVertex2d(-0.7, -0.7);
    glEnd();
    i=i+.5;
}
glEnd();


//wheels
glColor3f(1, 1, 1);
for(double i =0; i <= 360;){
    glBegin(GL_TRIANGLES);
    x=0.15*cos(i);
    y=0.15*sin(i);
    glVertex2d(x-0.1, y-0.7);
    i=i+.5;
    x=0.15*cos(i);
    y=0.15*sin(i);
    glVertex2d(x-0.1, y-0.7);
    glVertex2d(-0.1, -0.7);
    glEnd();
    i=i+.5;
}
glEnd();

glEnd();

	    glEnd();

	    glBegin(GL_POLYGON);

	       	 glColor3f(0.0, 0.8, 0.9);
	       	 glVertex2f(0.25,0.25);
	       	 // glVertex2f(0.25,0.6);
	       	 glVertex2f(0.5,0);
	       	 	       	 glVertex2f(1,0);

	       	 glVertex2f(0.75,0.25);

	    glEnd();
	    glBegin(GL_POLYGON);
	      	       	 glColor3f(0.2, 0, 0);
	      	       	 glVertex2f(0.5,0);
	      	       	 glVertex2f(0.5,-0.5);
	      	       	 glVertex2f(1,-0.5);
	      	       	 glVertex2f(1,0);
	    glEnd();


glColor3f(1, 1, 1);
for(double i =0; i <= 360;){
    glBegin(GL_TRIANGLES);
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x-0.7, y+0.7);
    i=i+.5;
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x-0.7, y+0.7);
    glVertex2d(-0.7, 0.8);
    glEnd();
    i=i+.5;
}
glEnd();

glColor3f(1, 1, 1);
for(double i =0; i <= 360;){
    glBegin(GL_TRIANGLES);
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x-0.1, y+0.8);
    i=i+.5;
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x-0.1, y+0.8);
    glVertex2d(-0.1, 0.9);
    glEnd();
    i=i+.5;
}
glEnd();

glColor3f(1, 1, 1);
for(double i =0; i <= 360;){
    glBegin(GL_TRIANGLES);
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x+0.4, y+0.4);
    i=i+.5;
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x+0.4, y+0.4);
    glVertex2d(0.4, 0.5);
    glEnd();
    i=i+.5;
}
glEnd();

glColor3f(1, 1, 1);
for(double i =0; i <= 360;){
    glBegin(GL_TRIANGLES);
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x+0.8, y+0.9);
    i=i+.5;
    x=0.05*cos(i);
    y=0.05*sin(i);
    glVertex2d(x+0.8, y+0.9);
    glVertex2d(0.8, 1);
    glEnd();
    i=i+.5;
}
glEnd();


	    glFlush();




}

int main( int argc, char** argv){

	    glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(900, 900);
	glutCreateWindow("Square");
	glutDisplayFunc(dispsquare);
	glutMainLoop();

	return 0;
}