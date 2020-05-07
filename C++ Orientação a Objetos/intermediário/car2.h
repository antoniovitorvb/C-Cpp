#ifndef CAR2_H
#define CAR2_H

#include <string>
#include <iostream>

using namespace std;

class car {
	public:
		static int tires;	//ALL object from this class will have this value
		car();
		car(string brand, int year);
		~car();
		void setBrand(string brand);
		string getBrand();
		void setYear(int year);
		int getYear();
		
	private:
		string brand;
		int year;
};

#endif	/* CAR_H */
		
car::car(){	//constructors like these are used to define default values
	this->brand = "Fiat";
}

car::car(string brand, int year){
	this->brand = brand;
	this->year = year;
}

car::~car(){	//destructor are used to clear the memory after the program works
	cout << "Destructor worked!" << endl;
}

void car::setBrand(string brand){
	this->brand = brand;
}

string car::getBrand(){
	return brand;
}

void car::setYear(int year){
	this->year = year;
}

int car::getYear(){
	return year;
}

int car::tires = 4;
