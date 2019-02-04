#include<GL/glut.h>
 void dispsquare(void){


        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0,0,0,0);


glEnd();
glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
                glVertex2d(0,1);
                 glVertex2d(-1,1);
                 glVertex2d(-1,1);
                 glVertex2d(-1,-1);
                 glVertex2d(1,-1);
                 glVertex2d(1,1);
glEnd();

// glBegin();
//  glBegin(GL_POLYGON);

//  glVertex2d(-0.85,-0.85);
//  glVertex2d(-0.8,-0.85);
//  glVertex2d(-0.8,.85)
//  glVertex2d(0.85,)


// glEnd();

int box=-1;
bool check=false;

for( int  i=0; i<8;i++){
    for(int j=0;j<8;j++){
        if(i%2==0 && j%2==0){
                        glColor3f(0,0,0);

            glBegin(GL_POLYGON);

             glVertex2f((double)i/5 - 0.8,(double)j/5 -0.8);
             glVertex2f((double)i/5 -0.8, (double)j/5 + 0.2 -0.8);
             glVertex2f((double)i/5 + 0.2 -0.8, (double)j/5+ 0.2 -0.8);
             glVertex2f((double)i/5 +0.2-0.8 , (double)j/5 -0.8 );

            glEnd();
        }
        else if(i%2!=0 && j%2 !=0){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);

             glVertex2f((double)i/5 - 0.8,(double)j/5 -0.8);
             glVertex2f((double)i/5 -0.8, (double)j/5 + 0.2 -0.8);
             glVertex2f((double)i/5 + 0.2 -0.8, (double)j/5+ 0.2 -0.8);
             glVertex2f((double)i/5 +0.2-0.8 , (double)j/5 -0.8 );


            glEnd();

        }
    }
}

// float x,y;
// double k=0;
// glColor3f(0,0, 1);
// for(double i =0; i <= 360;){
//     glBegin(GL_LINES);
//     x=0.05*cos(i);
//     y=0.05*sin(i);
//     glVertex2d(x-0.25, y+0.15);
//     i=i+.5;
//     x=0.05*cos(i);
//     y=0.05*sin(i);
//     glVertex2d(x-0.25, y+0.15);
//     glEnd();
//     i=i+.5;
// }

// glColor3f(0,0, 1);
//  double t=0;
// for(double i=0;i<24;i++){
// 	glBegin(GL_LINES);
// 	glVertex2d(-0.25,0.15);
// 	glVertex2d(-0.25+0.05*cos(t),0.15+0.05*sin(t));
//         t += 2 * PI / 24;
// 	glEnd();
// 	}
glFlush();
}

int main( int argc, char** argv){

        glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(100, 200);
    glutCreateWindow("Chess board");
    glutInitWindowSize(500, 300);

  /*set position of widow on the screen*/
 
    glutDisplayFunc(dispsquare);
    glutMainLoop();

    return 0;
}