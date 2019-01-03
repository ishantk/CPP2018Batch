#include<iostream>
#include<string>
using namespace std;

// string is an API : Application Programming Interfaces !!

int main(){
	
	// Strings:
	char name1[10] = "John";
	cout<<"name1 is "<<name1<<"\n";
	cout<<"name1[0] is: "<<name1[0]<<"\n";
	cout<<"name1[3] is: "<<name1[3]<<"\n";
	cout<<"name1[4] is: "<<name1[4]<<"\n";
	cout<<"name1[5] is: "<<name1[5]<<"\n";
	cout<<"Address of name1 is "<<&name1<<"\n";
	cout<<"Address of name1[0] is: "<<&name1[0]<<"\n";

	char* name2 = "John";
	cout<<"name2 is "<<name2<<"\n";	

	// PS: When we print char array or pointer instead of address 
	//     of 1st character entire string is printed

	string name3 = "John";
	cout<<"name3 is "<<name3<<"\n";

	string name4 = "";
	cout<<"Enter a Name of Your Choice:"<<"\n";
	cin>>name4;
	cout<<"Hello, "<<name4<<"\n";


	return 0;
}