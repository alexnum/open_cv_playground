#include “highgui.h”

int main( int argc, char** argv ) {
  //Loads an image in memoty and return its pointer
  IplImage* img = cvLoadImage( argv[1] );
  //Creates a CV Window
  cvNamedWindow( “Example1”, CV_WINDOW_AUTOSIZE );
  //Shows the image on Window
  cvShowImage( “Example1”, img );
  //Wait indefinitelly (0) for key press 
  cvWaitKey(0);
  //Releases and destroys the image to free the allocated memory
  cvReleaseImage( &img );
  cvDestroyWindow( “Example1” );
}
