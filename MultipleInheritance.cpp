// Multiple Inheritance
// Diego Pérez & Abraham Montes
// October 13th
// Own code

#include<iostream>
using namespace std;

class Jazz{
	public:
	string rhythm;
	
	Jazz(string rhyt){
		rhythm=rhyt;
	}
	
	void play(){
		cout<<"Chords sound to the rhythm of "<<this->rhythm;
	}
	
	~Jazz(){
		cout<<"Djazz\n";
	}
};

class Blues{
	public:
	string instrument;
	
	Blues(string ins){
		instrument=ins;
	}
	
	void play(){ // Even though it's called the same as Jazz's method, we can differentiate them apart (more on that later)
		cout<<"A tasty melody is formed with a(n) "<<this->instrument<<".";
	}
	
	~Blues(){
		cout<<"Dblues\n";
	}
	
};

class Rnr: public Jazz, public Blues{ // It will inherit from both Jazz and Blues
	string singer;
	public:
	Rnr(string sin, string rhyt, string ins):Jazz(rhyt), Blues(ins){ //We call both of the parents' constructors
		singer=sin;
	}
	
	void playplay(){
		Jazz::play(); // The "::" indicates that it's the play() method from the Jazz class
		cout<<"\n\n";
		Blues::play(); // Here, it's from Blues
	}
	
	~Rnr(){
		cout<<"Drnr\n";
	}
};

class Metal: public Jazz, public Blues{
	int drums;
	public:
	Metal(int dru, string rhyt, string ins):Jazz(rhyt),Blues(ins){
		drums=dru;
	}
	
	void play1(){
		Jazz::play();
	}
	
	void play2(){
		Blues::play();
	}
	
	~Metal(){
		cout<<"Dmetal\n";
	}
};

int main(){
	
	Jazz("swing");
	Blues("guitar");
	
	Rnr roc= Rnr("Chuck Berry","rock n' roll","electric guitar");
	roc.playplay();
	cout<<"\n\n";
	Metal met=Metal(8, "heavy metal","drumkit with two bass drums");
	met.play1();
	cout<<"\n\n";
	met.play2();
	cout<<"\n\n";
	
	return 0;
}
