/****
*Author: griffid5 (David Griffith)
*Date: 10/27/2012
*purpose:
*/

#pragma
#include <string>
using namespace std;
#include "Starbucks.h"

class Entry {
public:
	string identifier;
	double x;
	double y;
};

class griffid5Starbucks : public Starbucks {
public:
	griffid5Starbucks();
	~griffid5Starbucks(void);
	Entry* locations;
	int size;

	void build(Entry* c, int n) {

	}

	Entry* getNearest(double x, double y) {

	};

};