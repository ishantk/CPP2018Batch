/*	
	File Handling
		1. What is File
		2. File IO Operations
			Input	-> To Read data from File into Parogram
			Output	-> To write data from Program into File

		#include<fstream>
			fstream
				create file, write data and read data
			ifstream
				read data
			ofstream
				create file, write data	

*/

// Write Data in File

#include<iostream>				
#include<fstream>
#include<string>

using namespace std;

class Student{

	int roll;
	string name;
	int age;

public:

	Student(int roll, string name, int age){
		this->roll = roll;
		this->name = name;
		this->age = age;
	}

	void showStudentDetails(){
		cout<<"Roll:"<<roll<<"\n";
		cout<<"Name:"<<name<<"\n";
		cout<<"Age:"<<age<<"\n";
	}

	void saveStudentDetails(){

		ofstream out("student.csv");
		out<<roll<<","<<name<<","<<age<<"\n";
		out.close(); 

		cout<<"Student Data Written in File\n";
	}
};				

int main()
{

	// ofstream is a class used to write data in files
	// out is an object and can be anyname of your choice
	// MyStudents.txt is file name which is input to constructor
	
	/*
	ofstream out("MyStudents.txt");

	// << operator

	out<<"1, John, 20\n";
	out<<"2, Jennie, 22\n";
	out<<"3, Fionna, 25\n";

	out.close(); // Releasing Memory

	cout<<"Data Written in File\n";
	*/

	Student s1(101,"Fionna",22);
	s1.showStudentDetails();
	s1.saveStudentDetails();
	
	return 0;
}				