#include<iostream>
using namespace std;

// Function (Method/Procedure/Routine) : A step towards modular programming
// void: return type of acknwoledgement
// calculateAreaOfCircle : name of function
// () -> No Inputs in function
// Function is created Before Main
/*void calculateAreaOfCircle(){
	// Defination
	float radius = 0.0, area = 0.0;
	cout<<"Enter Radius of Circle: \n";
	cin>>radius;

	area = 3.14 * radius * radius;

	cout<<"Area of Circle with radius "<<radius<<" is "<<area<<"\n";


}*/

// Function with Inputs
/*void addNumbers(int num1, int num2){
	int num3 = num1 + num2;
	cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<num3;
}*/

// Declaring a Function before using it in main !!
void calculateAreaOfCircle();	
void addNumbers(int num1, int num2);

// Function with Inputs and with Acknowledgement (Return Type)
// Return is always 1
// Inputs can be many
int sqaureOfNumber(int num){
	int result = num * num;
	return result;
}


int main(){

	int age = 10;
	cout<<"age is: "<<age<<"\n";

	// Execution of Function or Calling a Function
	//calculateAreaOfCircle();
	//calculateAreaOfCircle();

	addNumbers(10,20);
	addNumbers(30,40);

	int res = sqaureOfNumber(5);
	cout<<"Result is: "<<res<<"\n";


	return 0;
}

// Function with Inputs
void addNumbers(int num1, int num2){
	int num3 = num1 + num2;
	cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<num3<<"\n";
}

// Function is created After Main
void calculateAreaOfCircle(){
	// Defination
	float radius = 0.0, area = 0.0;
	cout<<"Enter Radius of Circle: \n";
	cin>>radius;

	area = 3.14 * radius * radius;

	cout<<"Area of Circle with radius "<<radius<<" is "<<area<<"\n";
}

/*

PS:
header files -> contains declarrations of varous functions which we wil luse in our program
defination of function is available in a library which we install in our system

MyProg.cpp

Compiler

MyProg.obj

Linker


*/