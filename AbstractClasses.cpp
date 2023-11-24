// Abstract classes
// Diego Pérez & Abraham Montes
// September 29th, 2023
// Own code

#include<iostream>
using namespace std;

class AbstractCar{
	virtual void start()=0; // This is how an abstract class is declared
};

class Car:public AbstractCar{ // The ":" shows it inherits from the abstract class
	string name;
	
	public:
		
		Car(string name){
			this->name=name;
		}
		
		void start(){
			cout<<"The "<<name<<" starts rather quickly.\n";
		}
		
};

int main(){
	Car car=Car("Beetle");
	car.start();
}


