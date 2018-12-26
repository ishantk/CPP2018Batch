#include<iostream>
using namespace std;

// main is executed by OS
// main is a function or we can say it a main thread for our process
int main(){
	
	cout<<"Hello";

	// a is the name of storage container
	// we also call it as a variable
	// int is the data type or the type of storage container
	// 10 is data or value or literal
	int a = 10;
	int b = 20;

	// Data Operations
	int c = a+b;
	cout<<"c is:"<<c<<"\n";

	cout<<"is a less than b ? "<<(a<b)<<"\n";

	int x = 11;
	x++;
	++x;
	x--;
	--x;
	x++;
	

	// x is 12
	// int y = x++; // value copy
	int y = ++x;
	cout<<"y is: "<<y<<"\n";
	cout<<"x is: "<<x<<"\n";

	cout<<"Result:"<<((x>=y) && (x>=a))<<"\n";

	int p = 12;		// 1 1 0 0
	int q = 8;		// 1 0 0 0
	int r = p & q;  // 1 0 0 0

	int s = p ^ q;  // 0 1 0 0

	cout<<"r is: "<<r<<"\n";
	cout<<"s is: "<<s<<"\n";

	int t = q >> 2;  // 1 0 0 0 >> 2    0 0 1 0			-> 2
	int u = q << 2;	 // 1 0 0 0 << 2    1 0 0 0 0 0     -> 32

	int v = u >> 2;

	cout<<"t is: "<<t<<"\n";
	cout<<"u is: "<<u<<"\n";
	cout<<"v is: "<<v<<"\n";

	int w = (10>2) ? 5 : 10;
	cout<<"w is: "<<w<<"\n"; 

	/*
		Arithmetic Operators
		+, -, *, /, %

		Relational Operators
		>, <, >=, <=, ==, !=

		Increment & Decrement
		++ and --

		Bitwise Operators
		& | ^

		Logical Operators
		&& || !

		Shift Operators
		>> <<

		Ternary Operator
		? :


	*/

	return 0; // Ack by main to OS. And Ack is always in the end !!
}