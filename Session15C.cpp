#include<iostream>
using namespace std;

int addNumbers(int a, int b){
	int c = a+b;
	return c;
}

int main(){

	int result = addNumbers(10, 20);
	cout<<"Result is: "<<result<<"\n";

	// Pointer to a Function
	int (*fptr)(int, int) = addNumbers;
	result = (*fptr)(11,22);
	cout<<"Result Now is: "<<result<<"\n";
}