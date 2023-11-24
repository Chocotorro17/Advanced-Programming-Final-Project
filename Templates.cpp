//Templates
//Abraham MOntes and Diego Pérez 
//original
#include<iostream>
#include<string>
//#include<bits/stdc++.h>
using namespace std;

//Function Template
template <typename T>
T sums(T a, T b){
	return a+b;
}

// Class Template
template <typename T1, typename T2>
class Sum{
	T1 elem1;
	T2 elem2;
	
	public:
		Sum(T1 e1, T2 e2){
			this->elem1=e1;
			this->elem2=e2;
		}
		
	T1 sum(){
		return elem1 + elem2;
	}
};

int main(){
	int n=1, m=2;
	cout<<sums(n,m)<<"\n";

	string s="let us get an ", p="A";
	cout<<sums(s,p)<<"\n";
	
	Sum<int,int> object(1,5);
	cout<<object.sum();
}
