#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include <vector>
#include <fstream>
#include <string>

using namespace ci;
using namespace ci::app;
using namespace std;

class HW04_griffid5App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void HW04_griffid5App::setup()
{
	Entry myEntries[7655];
	string line;fds
	double x, y;
	int count = 0;
	ifstream in("Starbucks_2006.csv");
	if (in.is_open()) {
		while(!in.eof()) {
			Entry* entry = new Entry();
			getline(in, line, \r')
}

void HW04_griffid5App::mouseDown( MouseEvent event )
{
}

void HW04_griffid5App::update()
{
}

void HW04_griffid5App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( HW04_griffid5App, RendererGl )
