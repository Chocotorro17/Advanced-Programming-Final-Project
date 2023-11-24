// Operator overload
// Diego Pérez & Abraham Montes
// October 20th
/* 
	Based on code seen during lectures and https://www.geeksforgeeks.org/operator-overloading-cpp/
	We already knew how to divide complex numbers (which we added to this code) from our algebra course
*/

#include<iostream>
#include<cmath>
using namespace std;

class Cmplx{
	public:
		float re;
		float im;
		
		Cmplx(float r, float i){
			re=r;
			im=i;
		}
		
		Cmplx(){
		};
		
		void operator = (const Cmplx &c){
			if(this==&c){return;}
			this->re=c.re;
			this->im=c.im;
		}
		
		friend ostream& operator << (ostream &cout, const Cmplx &z);
		friend istream& operator << (istream &cin, const Cmplx &z);
		
};

ostream& operator <<(ostream &cout, const Cmplx &z){
	if(z.im>=0){ cout<<z.re<<"+"<<z.im<<"i";}
	else{ cout<<z.re<<z.im<<"i";}
	return cout;
}

Cmplx operator + (const Cmplx &a, const Cmplx &b){
	Cmplx c(a.re+b.re, a.im+b.im);
	return c;
}

// When dividing 2 complex numbers, we multiply by the conjugate of the numerator (b)
// Thus, we have just real numbers down on the fraction (in this case, the norm of the complex number)
// For example, when dividing (a+bi)/(c+di) we get:
// [(ac+bd) + i(bc-ad)]/(c*c + d*d)
Cmplx operator / (const Cmplx &a, const Cmplx &b ){ 
	Cmplx z;
	float norma = b.re*b.re + b.im*b.im;
	z.re=(a.re*b.re + a.im*b.im)/norma;
	z.im=(a.im*b.re - a.re*b.im)/norma;
	return z;
}

int main(){
	Cmplx n1(1,1);
	Cmplx n2(2,-3);
	
	n2=(n2+n1); //Now n2 is n2 + n1
	 
	//cout<<n2.re<<"+"<<n2.im<<"i\n";
	cout<<n2<<"\n";
	
	Cmplx z(0,1);
	Cmplx u(1,0);
	
	cout<<u/z; // Here we divide 1/i -- we should get -i
	
}
