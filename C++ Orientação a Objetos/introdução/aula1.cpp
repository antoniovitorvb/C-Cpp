#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

class car {
	public:
		string brand;
		int year;
		
	private:	// all concepts below won't be seen by the object
		string color;
};

int main (int argc, char** argv){
	
	car c1;
	c1.brand = "fiat";
	c1.year = 2017;
	
	car c2;
	c2.brand = "Ferrari";
	c2.year = 2015;
	
	cout << c1.brand <<endl;
	cout << c2.brand <<endl;
	return 0;
}
