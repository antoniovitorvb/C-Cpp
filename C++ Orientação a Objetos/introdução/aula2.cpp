#include <cstdlib>
#include <string.h>
#include <iostream>

// How to protect my class atributes from the objects

using namespace std;

class car {
	private:	// all concepts below won't be seen by the object
		string brand;
		int year;
		string color;
		
	public:	
		void setBrand(string x){
			brand = x;
		}
		string getBrand(){
			return brand;
		}
		
		setYear(int y){
			if(y>1990){
				year = y;
			}else{
				year = 1990;
			}
		}
		getYear(){
			return year;
		}
};

int main (int argc, char** argv){
	
	car c1;
	c1.setBrand("Fiat");
	c1.setYear(2017);
	
	car c2;
	c2.setBrand("Ferrari");
	c2.setYear(1650);
	
	cout << c1.getBrand() <<endl;
	cout << c1.getYear() <<endl;
	
	cout << c2.getBrand() <<endl;
	cout << c2.getYear() <<endl;
	return 0;
}
