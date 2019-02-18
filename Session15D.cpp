#include<iostream>
using namespace std;

class CA{
public:
	// Attribute : Data Memeber
	int a;

	// Method : Member Function
	void show(){
		cout<<"This is show and a is:"<<a<<"\n";
	}
};

int main(){

	// Pointer to a Data Memeber or Attribute of an Object
	int CA::* ptr = &CA::a; // ::* -> to create a pointer to data memeber

	// Pointer to a Memeber Function
	void (CA::*fptr)() = &CA::show;

	// Create an Object of CA
	CA cObj;
	//cObj.a = 10;
	cObj.*ptr = 10;
	//cObj.show();
	(cObj.*fptr)();

	// Create a Dynamic Object and explore Sytnaxes

}