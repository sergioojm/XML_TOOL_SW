#include <GL/freeglut_std.h>
#include <GL/glut.h>


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}

int main(int argc, char** argv)
{

  glutInit(&argc, argv);

  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(500, 500);
  glutCreateWindow("Ventana");

  gluOrtho2D(0, 500, 0, 500);

  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
