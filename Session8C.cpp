#include<iostream>
#include<string>
using namespace std;

// Default Value of an Argument
void square(int num=7){
	cout<<"Square of "<<num<<" is "<<(num*num)<<"\n";
}


// Function Overloading in C++
// We must see that inputs should be different i.e. unique ofr function
void square(int num1, int num2){
	cout<<"=============================\n";
	cout<<"Square of "<<num1<<" is "<<(num1*num1)<<"\n";
	cout<<"Square of "<<num2<<" is "<<(num2*num2)<<"\n";
	cout<<"=============================\n";
}

// Error:
/*
void square(int number1, int number2){
	cout<<"=============================\n";
	cout<<"Square of "<<number1<<" is "<<(number1*number1)<<"\n";
	cout<<"Square of "<<number2<<" is "<<(number2*number2)<<"\n";
	cout<<"=============================\n";
}
*/

/* Rules to Overload 

	1. Function Name Should be Same
	2. Inputs should be Different
		2.1 NUMBER OF INPUTS
		2.2 TYPE OF INPUTES
		2.3 SEQUENCE OF INPUTS
	3. Return Type has no role to play

*/

void addNumbers(int num1, int num2){

}

void addNumbers(int num1, int num2, int num3){

}

void addNumbers(float num1, float num2){

}

void addNumbers(int num1, float num2){

}

void addNumbers(float num1, int num2){

}

int main(int argc, char const *argv[]){

	square(13);
	square(5, 7);
	
	return 0;
}