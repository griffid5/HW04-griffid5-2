#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include <vector>
#include <fstream>
#include <string>
#include "Starbucks.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HW04_griffid5App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
	void prepareSettings(Settings* settings);

private:
	static const int AppWidth = 800;
	static const int AppHeight = 800;
	static const int TextureSize = 1024;
	griffid5Starbucks* starbucksLocations;
};

void HW04_griffid5App::setup()
{
	ifstream in ("C:\Users\griffid5.IT.000\Documents\HW04StarterFiles\Starbucks_2006.csv");

	vector<Entry> vector;

	string line;
	do {
		Entry e;

		getline(in, line, ',');
		e.identifier = line; // 

		in.get();
		in >> e.x; 

		in.get();
		in >> e.y; 

		vector.push_back(e); 
	}
	while (!in.eof());

	}

	starbucksLocations = new griffid5Starbucks();


}

void HW04_griffid5App::prepareSettings(Settings* settings) {
	settings -> setWindowSize(AppWidth, AppHeight);
	settings -> setResizable(false);

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
