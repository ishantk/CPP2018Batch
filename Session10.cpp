#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[]){
	
	char name[5] = "John";
	cout<<"name is: "<<name<<"\n";
	cout<<"name[0] is: "<<name[0]<<"\n";
	cout<<"name[1] is: "<<name[1]<<"\n";
	cout<<"name[2] is: "<<name[2]<<"\n";
	cout<<"name[3] is: "<<name[3]<<"\n";

	cout<<"&name[0] is: "<<&name[0]<<"\n";
	cout<<"&name[1] is: "<<&name[1]<<"\n";
	cout<<"&name[2] is: "<<&name[2]<<"\n";
	cout<<"&name[3] is: "<<&name[3]<<"\n";

	int age = 20;

	return 0;
}