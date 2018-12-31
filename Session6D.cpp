#include<iostream>
using namespace std;


int main(){

	int a = 10;
	cout<<"a is "<<a<<"\n";
	cout<<"address of a is "<<&a<<"\n";

	// ptr is a variable which is holding address of a
	int* ptr = &a;

	cout<<"ptr is "<<ptr<<"\n";
	cout<<"address of ptr is "<<&ptr<<"\n";

	cout<<"Data at address of pointer is: "<<*ptr<<"\n";

	*ptr = 20;

	cout<<"a is: "<<a<<"\n";

	//char ch = 'A';
	//char* cPtr = &ch;

	return 0;
}

// PS: Pointer is only going to hold address of some variable
//     Pointer type should match the type of varibale of which it shall hold address