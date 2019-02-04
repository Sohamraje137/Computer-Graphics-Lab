#include <GL/glut.h>
 
 #include <unistd.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )  // Remove console window
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glu32.lib")
#pragma comment(lib, "glut32.lib")
 
 
GLdouble width, height;  
 
 
 
void display()
{
 
  glClearColor(1.0, 1.0,1.0, 0.0);
  glClear(GL_COLOR_BUFFER_BIT);
 
  glColor3f(0.0, 0.0, 0.0);
 
  for (int i=50;i<500;i++)
  {
 
      glBegin(GL_POINTS);
      glVertex2d(i,50);

usleep(100000); 
 
  glClear(GL_COLOR_BUFFER_BIT);
 
 glEnd();
 
  glFlush();
}
 
}
 
  void reshape(int w, int h)
{
  /* save new screen dimensions */
  width =  w;
  height = h;
 
  /* tell OpenGL to use the whole window for drawing */
  glViewport(0, 0, width, height);
 
  /* do an orthographic parallel projection with the coordinate
     system set to first quadrant, limited by screen/window size */
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0.0, width, 0.0, height);
}
 
int main(int argc, char *argv[])
{
  /* initialize GLUT, let it extract command-line 
     GLUT options that you may provide 
     - NOTE THE '&' BEFORE argc */
  glutInit(&argc, argv);
 
  /* specify the display to be single 
     buffered and color as RGBA values */
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
 
  /* set the initial window size */
  glutInitWindowSize(500, 500);
 
  /*set position of widow on the screen*/
  glutInitWindowPosition(0,0);
 
  /* create the window with title*/
  glutCreateWindow("Firts");
 
  /* --- register callbacks with GLUT --- */
 
  /* register function to handle window resizes */
  glutReshapeFunc(reshape);
 
  /* register function that draws in the window */
  glutDisplayFunc(display);
 
  /* start the GLUT main loop */
  glutMainLoop();
 
 
}