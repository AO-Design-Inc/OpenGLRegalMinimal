#ifdef __EMSCRIPTEN__
#include <GL/Regal.h>
#include <emscripten.h>
#include <emscripten/html5.h>
#include "esUtil.h"
#endif

#include <GL/gl.h>
//#include <EGL/egl.h>
#include <stdio.h>

typedef struct
{
   // Handle to a program object
   GLuint programObject;

} UserData;

void Draw(ESContext *esContext) {
   UserData *userData = (UserData*) esContext->userData;
	// Set the viewport
   glViewport ( 0, 0, esContext->width, esContext->height );
   
   // Clear the color buffer
   glClear ( GL_COLOR_BUFFER_BIT );
    glClearColor(0,0,0.42,0.8);
   glClear ( GL_COLOR_BUFFER_BIT );

    printf("horte\n");
}


int main ( int argc, char *argv[] )
{
   ESContext esContext;
   UserData  userData;

   esInitContext ( &esContext );
   esContext.userData = &userData;

   esCreateWindow ( &esContext, "Hello Triangle", 320, 240, ES_WINDOW_RGB );
	//RegalMakeCurrent((RegalSystemContext)1);


   /*
   if ( !Init ( &esContext ) )
      return 0;
      */

   esRegisterDrawFunc ( &esContext, Draw );

   esMainLoop ( &esContext );
}

