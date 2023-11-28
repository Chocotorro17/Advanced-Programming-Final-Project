//Abraham Montes Vacio and Diego Alejandro Pérez Martinez
//Original
//Class and Objects
//Translated 23//11/23

//Changes: we added a new method, which united both classes and switched the order of car and employee. ALso, we added a getter to car. 

#include<iostream>
using namespace std;



class Car{
	int hp;
	string name;
	int* p_hp;
	
	public: Car(int hp1, string name1){
		hp=hp1;
		name=name1;
	}
	
	public://Geter
	void getHp(){
		cout<<hp;
	}

	string getName(){//we added this getter, for the friend class
		return this->name;
	}
	
	~Car(){ //We create a Destructor so the memory gets cleared
	//it is called automatically after the program is finished
		
		//Using pointers:
		delete [] p_hp;
		p_hp= NULL;
		
	}
	
	Car(const Car& original){ //copy constructor
		this->hp=original.hp;
		this->name=original.name;
	}
	 
	 
	//Friend function
	friend void duplicateHp(Car);
	
	//Friend class
	friend class Employee;
};

class Employee{
	//Attributes	
	//By default, it comes defined as private
	public:
		
	int age;
	string name;
	string company;
	
	//First method
	void introduction(){
		cout<<"My name is "<<name<<", I work at "<<company<<" and am "<<age<<" years.";
	}
	
	//Constructor to create new objects
	Employee(string name1, string comp1, int age){
		name = name1;
		company=comp1;
		age=this->age;
	}

	void driveCar(Car& car){
		cout<<"\n\n"<<this->name<<" is driving a "<<car.getName()<<endl;
	}
};

//global Friend function
void duplicateHp(Car c){
	cout<<c.hp*2;
}

int main(){
	
	
	Employee emp= Employee("Pepe","Frentonix",25);
	emp.introduction();
	cout<<"\n\n";
	
	Car c=Car(85,"Vocho");
	c.getHp();
	cout<<"\n\n";
	duplicateHp(c);

	emp.driveCar(c);
}
