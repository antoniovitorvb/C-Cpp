#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>
#include "animal.h"

using namespace std;

class dog : public animal {	//sintax for inheritance
	public:
		dog();
		virtual ~dog();
		void setPaws(int paws);
		int getPaws();
		
	private:
		int paws;
};

#endif	/* DOG_H */

dog::dog(){
}

dog::~dog(){
	cout << "Dog object destroyed" <<endl;
}

void dog::setPaws(int paws){
	this->paws = paws;
}

int dog::getPaws(){
	return paws;
}
