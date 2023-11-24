//Friend calsses
//Diego Pérez y Abraham Montes
//11 de octubre/translated23/11/23
//Original

#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

class Diego{
	string name;
	string beers;
	
	public:
	Diego(string nam, string beer){
		name=nam;
		beers=beer;
	}
	
	Diego(string nom){
		name=nom;
		beers="Vickys";
	}
	
	friend class Abraham;
	friend void gatherup(Diego);
	
	~Diego(){
		cout<<"Ddiego\n"; //prints Ddiego everytime an object diego si destroyed
	}
	
};

class Abraham{
	string name;
	
	public:
	void drink(Diego& diego){ //we pass it by reference so the destroyer doesnt get called twice
		cout<<this->name<<" is drinking "<<diego.beers<<" with "<<diego.name<<"\n\n";
	}
	
	Abraham(string nom){
		name=nom;
	}
	
	Abraham(const Abraham& original){ //copy constructor, just in case
		name=original.name;
	}
};

void gatherup(Diego D){
	srand(time(NULL)); //seed for random numbers
	cout<<D.name<<" has drunk  "<<6+rand()%14<<" bottles of "<<D.beers<<" and still sober.\n\n"; //Nos da entre 6 y 19 chelas (definitivamente es un talento)
	
}

int main(){
	
	
	Diego diegoo=Diego("Diego","Good nights");
	Abraham abraham=Abraham("Abraham");
	
	abraham.drink(diegoo);
	
	gatherup(diegoo);
}
