#ifndef FISH_H
#define FISH_H

#include <string>
#include <iostream>
#include "animal.h"

using namespace std;

class fish : public animal {	//sintax for inheritance
	public:
		fish();
		virtual ~fish();
		void setFreshWater(bool water);
		string isFreshWater();
		
	private:
		bool water;
};

#endif	/* FISH_H */

fish::fish(){
}

fish::~fish(){
	cout << "Fish object destroyed" <<endl;
}

void fish::setFreshWater(bool water){
	this->water = water;
}

string fish::isFreshWater(){
	if (water){
		return "fresh water";
	}else{
		return "marine water";
	}
}
