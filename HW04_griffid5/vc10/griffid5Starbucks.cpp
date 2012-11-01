/******
*Author: Griffid5 (David Griffith)
*Date: 10-27-2012
*Purpose: 
*/

#include "griffid5Starbucks.h"
#include "Starbucks.h"


griffid5Starbucks::griffid5Starbucks() {

}

griffid5Starbucks::~griffid5Starbucks(void){

}

void griffid5Starbucks::build(Entry* c, int n) {
	vector<Entry> vector;
	for(int i = 0; i < n; i++) {
		vector.push_back(c[i]);
	}
		for(int j = 0; j < vector.size(); j++) {
			for(int r = 0; r < vector.size(); r++) {
				if(((abs(vector[j].x) - abs(vector[r].x)) < .00001) 
					&& ((abs(vector[j].y) - abs(vector[r].y)) < .00001) {
						vector.delete(vector[j]);
				}
			}
		}
	

}

Entry* griffid5Starbucks::getNearest(double x, double y) {
	Entry* e = NULL;
	return e;
}