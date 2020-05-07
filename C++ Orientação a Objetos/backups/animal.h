#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

using namespace std;

class animal {
	public:
		animal();
		virtual ~animal();
		void setName(string name);
		void setAge(int age);
		
		string getName();
		int getAge();		
		
	private:
		string name;
		int age;
};

#endif	/* ANIMAL_H */

animal::animal(){
}

animal::~animal(){
}

void animal::setName(string name){
	this->name = name;
}

string animal::getName(){
	return name;
}

void animal::setAge(int age){
	this->age = age;
}
