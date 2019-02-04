#include<GL/glut.h>
#include<math.h>
void dispsquare(void){


	    glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0,0,0,0);

glBegin(GL_POLYGON);
 
		glColor3f(0.52, 0.8, 1);
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
                glVertex2d(-1,0);
                 glVertex2d(-1,-1);
                 glVertex2d(0,-1);
                 glVertex2d(1,-1);
                 glVertex2d(1,0);
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

glBegin(GL_POLYGON);

	    	glColor3f(0.14, 0.42, 0.8);
	    	glVertex2f(-1,-0.4);

	    	glVertex2f(-1,-1);


	    	glVertex2f(1,-1);
	    	//glVertex2f(-0.3,-0.8);



	    glEnd();

//boat
 glBegin(GL_POLYGON);

	    	glColor3f(0.5, 0, 0);
	    	glVertex2f(-1,-0.8);

	    	glVertex2f(-0.8,-1);


	    	glVertex2f(-0.5,-1);
	    	glVertex2f(-0.3,-0.8);



	    glEnd();
//
	    glBegin(GL_POLYGON);
	    	glColor3f(0.7, 0.3, 0);
	    	glVertex2d(-0.43,-0.8);
	    	glVertex2d(-0.4,-0.8);
	    	glVertex2d(-0.8,-1);
	    	glVertex2d(-0.82,-1);


	    glEnd();
//

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
	    float x,y;
glColor3f(1, 0.5, 0);
for(double i =0; i <= 360;){
    glBegin(GL_TRIANGLES);
    x=0.25*cos(i);
    y=0.25*sin(i);
    glVertex2d(x-0.5, y+0.5);
    i=i+.5;
    x=0.25*cos(i);
    y=0.25*sin(i);
    glVertex2d(x-0.5, y+0.5);
    glVertex2d(-0.5, 0.25);
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