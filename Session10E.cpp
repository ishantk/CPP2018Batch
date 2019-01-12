#include<iostream>
#include<string>
using namespace std;

// POLYMORPHISM:
/* More than 1 Form
	Compile Time Polymorphism or Static Biding or Early Binding
		Function Overloading
		Operator Overloading

	Run Time Polymorphism or Dynamic Binding or Late Binding	
*/

class Calculator{

	public:

		// Overloading: Same Function Name with Different Inputs
		void addNumbers(int num1, int num2){
			cout<<num1<<" and "<<num2<<" addition is "<<(num1+num2)<<"\n"; 
		}

		void addNumbers(int num1, int num2, int num3){
			cout<<num1<<", "<<num2<<" and "<<num3<<" addition is "<<(num1+num2+num3)<<"\n"; 
		}

};

int main(int argc, char const *argv[]){
	
	Calculator c1;
	c1.addNumbers(10, 20);
	c1.addNumbers(10, 20, 30);

	return 0;
}