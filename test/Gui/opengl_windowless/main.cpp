#include <Gui/opengl.h>

void draw1(void*, rai::OpenGL& gl){
  rai::glStandardLight(nullptr, gl);
  rai::glColor(1,0,0);
  glFrontFace(GL_CW);
  glutSolidTeapot(1.);
  rai::glDrawAxes(1.);
  glFrontFace(GL_CCW);
}

int main(int argc, char** argv){
  rai::initCmdLine(argc, argv);

  if(false){
    int argc=1;
    char **argv = new char*[1];
    argv[0] = (char*)"x.exe";
    glutInit(&argc, argv);
  }

  bool offscreen=true;

  rai::OpenGL gl("bla", 800, 600, offscreen);
  gl.camera.setZRange(8, 10);
  gl.add(draw1,0);
//  gl.update();
  gl.renderInBack();

  write_ppm(gl.captureImage, "z.ppm", true);
  write_ppm(convert<byte>(255.f*gl.captureDepth), "z.depth.ppm", true);

  if(!offscreen){
    gl.watch();
    rai::OpenGL gl2("depth", 800, 600);
    gl2.watchImage(gl.captureImage, true, 1.);
    gl2.displayGrey(gl.captureDepth, true, 1.);
  }

  cout <<"DONE!" <<endl;

  return 0;
}
