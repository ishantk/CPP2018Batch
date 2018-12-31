#include<iostream>
using namespace std;

// We are passing Values
// void swap(int a, int b){

// We are passing References
void swap(int &a, int &b){

	cout<<"a before swap is: "<<a<<"\n";
	cout<<"b before swap is: "<<b<<"\n";

	int temp = a;
	a = b;
	b = temp;

	cout<<"a after swap is: "<<a<<"\n";
	cout<<"b after swap is: "<<b<<"\n";
}

int main(){
	
	int x = 10;
	int y = 20;

	cout<<"x before swap is: "<<x<<"\n";
	cout<<"y before swap is: "<<y<<"\n";

	swap(x, y);

	cout<<"x after swap is: "<<x<<"\n";
	cout<<"y after swap is: "<<y<<"\n";

	return 0;
}