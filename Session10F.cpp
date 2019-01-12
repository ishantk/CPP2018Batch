#include<iostream>
#include<string>
using namespace std;

class ComplexNum{

	int real;
	int imag;

public:

	ComplexNum(){
		real = 0;
		imag = 0;
	}

	void setComlexNumber(int real, int imag){
		this->real = real;
		this->imag = imag;
	}

	void showComplexNumber(){
		cout<<"Real Part: "<<real<<" Imag Part: "<<imag<<"\n";
	}

	// Objects as Inputs
	/*static void addComplexNumbers(ComplexNum c1, ComplexNum c2){
		ComplexNum c3;
		c3.real = c1.real + c2.real;
		c3.imag = c1.imag + c2.imag;
		cout<<"<<<<<<<<<<<<<<\n";
		c3.showComplexNumber();
		cout<<"<<<<<<<<<<<<<<\n";
	}*/

	/*void addComplexNumbers(ComplexNum c1, ComplexNum c2){
		ComplexNum c3;
		c3.real = c1.real + c2.real;
		c3.imag = c1.imag + c2.imag;
		cout<<"<<<<<<<<<<<<<<\n";
		c3.showComplexNumber();
		cout<<"<<<<<<<<<<<<<<\n";
	}*/	

	// Function which takes objects as inputs
	// Returns Object
	ComplexNum addComplexNumbers(ComplexNum c1, ComplexNum c2){
		ComplexNum c3;
		c3.real = c1.real + c2.real;
		c3.imag = c1.imag + c2.imag;
		return c3;
	}	

	// Passing Object as Reference
	// Operator Overloading
	ComplexNum operator+(ComplexNum &cNum){
		ComplexNum c3;
		c3.real = real + cNum.real;
		c3.imag = imag + cNum.imag;
		return c3;
	}


};

int main(int argc, char const *argv[]){
	
	ComplexNum cNum1;
	ComplexNum cNum2;

	cNum1.setComlexNumber(10, 20);
	cNum2.setComlexNumber(30, 40);

	cNum1.showComplexNumber();
	cNum2.showComplexNumber();

	//ComplexNum::addComplexNumbers(cNum1, cNum2);

	//cNum1.addComplexNumbers(cNum1, cNum2);


	ComplexNum cNum3;
	cNum3 = cNum3.addComplexNumbers(cNum1, cNum2);
	cNum3.showComplexNumber();

	ComplexNum cNum4;
	cNum4 = cNum1 + cNum2;// cNum1 + cNum2 -> cNum1.operator+(cNum2);
	cNum4.showComplexNumber();

	ComplexNum cNum5;
	cNum5 = cNum1.operator+(cNum2);
	cNum5.showComplexNumber();

	return 0;
}