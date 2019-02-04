#include<GL/glut.h>
#include<math.h>
#include<iostream>
#define PI 3.142124
float xa,xb,ya,yb;
using namespace std;
void dispsquare(void){


        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0,0,0,0);
glPointSize(1.0);
glBegin(GL_POINTS);
glVertex2f(xb,yb);

glEnd();
glPointSize(1.0);
glBegin(GL_POINTS);
glVertex2f(xa,ya);

glEnd();


float dx,dy,pk,pk_n,pa,xk,yk,xk_1,yk_1,pk_1;
dx= xb-xa;
dy=yb-ya;
pa=2*dy-dx;
pk=pa;
xk=xa;
yk=ya;
for (int i=0;xk>xb && yk>yb;i++){
	if(pk>0){  
	 
	pk_1=pk+ 2*dy; 
	xk+=0.001;
		glBegin(GL_POINTS);
		glVertex2f(xk,yk);

		glEnd();			   	
	}
	else{
	  pk_1=pk+2*dy - 2*dx;
		yk+=0.001;
	 	glBegin(GL_POINTS);
		glVertex2f(xk,yk);

		glEnd();			   	
	}

	pk=pk_1;
}
/*
float m=(ya-yb)/(xa-xb);
if(m<1)
{
  xaa=xa+1;  

}
else{


}*/
//glBegin(GL_LINES);
//glVertex2f(xa,ya);
//glVertex2f(xb,yb);
//glEnd();

glFlush();



}

int main( int argc, char** argv){

		

cout<<"Enter the co-ordinates of the first point\n";
cin>>xa;
cin>>ya;
cout<<"Enter the co-ordinates of the second point\n";
cin>>xb;
cin>>yb;


        glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(100, 200);
    glutCreateWindow("Line Drawer");
    glutInitWindowSize(500, 300);

  /*set position of widow on the screen*/
 
    glutDisplayFunc(dispsquare);
    glutMainLoop();

    return 0;
}
