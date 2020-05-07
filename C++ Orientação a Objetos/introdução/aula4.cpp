#include <cstdlib>
#include <string.h>
#include <iostream>

#include "car.h"

using namespace std;

int main (int argc, char** argv){
	
	car c1;
	c1.setBrand("Fiat");
	c1.setYear(2017);
	
	car c2;
	c2.setBrand("Ferrari");
	c2.setYear(1650);
	
	cout << c1.tires <<endl;
	cout << c2.tires <<endl;
			
	c1.tires = 2;
	
	cout << c1.tires <<endl;
	cout << c2.tires <<endl;
	
	return 0;
}
