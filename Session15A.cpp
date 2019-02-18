#include<iostream>
using namespace std;

class Point{
public:
	int x,y;
};

int main(){

	const int a = 10;
	cout<<"a is: "<<a<<"\n";
	cout<<"Address of a is: "<<&a<<"\n";
	//a = 11; // Modification not allowed

	// =====================
	// Pointer to a Constant
	const int* ptr = &a;
	cout<<"ptr is: "<<ptr<<"\n";
	cout<<"Address of ptr is: "<<&ptr<<"\n";
	cout<<"Value at ptr is: "<<*ptr<<"\n";

	ptr++; 			// This is allowed - We can change contents of Pointer
	//(*ptr)++; 	// This is an error - We cannot change contents of constant


	// =====================
	// Constant Pointer
	int b = 10;
	int* const ptr1 = &b; 
	//ptr1++; 	// This is an error - We cannot change contents of constant pointer
	(*ptr1)++; 	// This is allowed - We can change contents of variable to which Pointer points

	cout<<"b now is: "<<b<<"\n";

	// =====================
	// Constant Pointer to a Constant
	const int* const ptr2 = &a;
	//ptr2++; 		// This is an error - We cannot change contents of constant pointer
	//(*ptr2)++; 	// This is an error - We cannot change contents of constant


	Point p1;
	p1.x = 10;
	p1.y = 20;

	Point* p = &p1;

	cout<<"x is: "<<*p.x;
	cout<<"y is: "<<*p.y;
}