#include<iostream>
using namespace std;

int main(){

	int a = 10;
	int b = a; // Value Copy

	a++;

	cout<<"a is: "<<a<<"\n"; // 11
	cout<<"b is: "<<b<<"\n"; // 10

	int x = 10;
	int &y = x; // Reference Copy | Creating an Alias name !!
	// y is another name for x
	x++;
	++y;
	cout<<"x is: "<<x<<"\n"; // 12
	cout<<"y is: "<<y<<"\n"; // 12

	return 0;
}