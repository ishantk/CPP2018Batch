#include<iostream>
#include<string>
using namespace std;

// Textual Representation How an Object will look like
// Blueprint
class User{

	// Attributes or Data Members or State of an Object
public:
	stirng name;
	char* phone;
	char* email;	
	char gender;
	int age;
	char* address;

	
	// Function in a class is not property of class 
	// Property of Object
	// Method | Function | Procedure | Routine
	void showUserDetails(){
		cout<<"==User Details of: "<<name<<"==\n";
		cout<<"Phone\t"<<phone<<"\n";
		cout<<"Email\t"<<email<<"\n";
		cout<<"age\t"<<age<<"\n";
		cout<<"Gender\t"<<gender<<"\n";
		cout<<"Address\t"<<address<<"\n";
	}
};

int main(){

	// Single Value Container
	int number;

	// Multi Value Container
	// Object Construction Statement
	// u1 is name of Object
	User u1;
	User u2;
	cout<<"Address of u1: "<<&u1<<"\n";
	cout<<"Address of u2: "<<&u2<<"\n";

	// By Default if you do not put any value to number or u1 they shall contain garbage data

	// 1. Write Operation : Lets write data in number and u1
	number = 100;
	
	u1.name = "John";
	u1.phone = "+91 99999 88888";
	u1.email = "john@example.com";
	u1.age = 20;
	u1.gender = 'M';
	u1.address = "Redwood Shores";

	u2.name = "Jennie";
	u2.phone = "+91 77777 88888";
	u2.email = "jennie@example.com";
	u2.age = 28;
	u2.gender = 'F';
	u2.address = "Pristine Magnum";


	//2. Read Operation
	cout<<"Number is: "<<number<<"\n";

	/*
	cout<<"==User Details of: "<<u1.name<<"==\n";
	cout<<"Phone\t"<<u1.phone<<"\n";
	cout<<"Email\t"<<u1.email<<"\n";
	cout<<"age\t"<<u1.age<<"\n";
	cout<<"Gender\t"<<u1.gender<<"\n";
	cout<<"Address\t"<<u1.address<<"\n";

	cout<<"\n";

	cout<<"==User Details of: "<<u2.name<<"==\n";
	cout<<"Phone\t"<<u2.phone<<"\n";
	cout<<"Email\t"<<u2.email<<"\n";
	cout<<"age\t"<<u2.age<<"\n";
	cout<<"Gender\t"<<u2.gender<<"\n";
	cout<<"Address\t"<<u2.address<<"\n";*/

	u1.showUserDetails();
	u2.showUserDetails();

	//3. Update Operation
	number = 200;
	u1.age = 30;

	return 0;
}