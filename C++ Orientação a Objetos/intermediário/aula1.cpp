#include <cstdlib>
#include <iostream>
#include <string>

#include "dog.h"
#include "fish.h"

using namespace std;

int main(){
	
	dog d1;
	fish f1;
	
	d1.setName("Rex");	d1.setAge(5);	d1.setPaws(4);
	f1.setName("Nemo");	f1.setAge(1);	f1.setFreshWater(false);
	
	cout <<d1.getName()<<" - "<<d1.getAge()<<" - "<<d1.getPaws()<<endl;
	cout <<f1.getName()<<" - "<<f1.getAge()<<" - "<<f1.isFreshWater()<<endl;
}
