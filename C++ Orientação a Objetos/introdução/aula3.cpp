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
	
	car c3("Ford", 2019);	//constructor sendind parameteres can't be blank
	c3.setYear(2020);
	
	cout << c1.getBrand() <<endl;
	cout << c1.getYear() <<endl;
	
	cout << c2.getBrand() <<endl;
	cout << c2.getYear() <<endl;
	
	cout << c3.getBrand() <<endl;
	cout << c3.getYear() <<endl;
	return 0;
}
