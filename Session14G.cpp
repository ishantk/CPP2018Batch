#include<iostream>
#include<string>
using namespace std;

class Student{

	int roll;
	string name;

public:

	Student(){
		roll = 0;
		name = "NA";
	}

	void setStudent(int roll, string name){
		this->roll = roll;
		this->name = name;
	}

	void showStudent(){
		cout<<roll<<" belongs to "<<name<<"\n";
	}

};

int main(){
	
	/*
	Student s1;
	Student s2;
	Student s3;

	s1.setStudent(101,"John");
	s2.setStudent(201,"Jennie");
	s3.setStudent(301,"Jack");

	s1.showStudent();
	s2.showStudent();
	s3.showStudent();*/

	// Array of Objects
	// Static Array Creation
	
	/*
	Student sArr[3]; // sArr[0], sArr[1], sArr[2]
	sArr[0].setStudent(101,"John");
	sArr[1].setStudent(201,"Jennie");
	sArr[2].setStudent(301,"Jack");

	for(int i=0;i<3;i++){
		sArr[i].showStudent();
	}
	*/

	// Array of Objects. Array is created dynamically
	Student *sptr = new Student[3];

	sptr[0].setStudent(101,"John");
	sptr[1].setStudent(201,"Jennie");
	sptr[2].setStudent(301,"Jack");

	for(int i=0;i<3;i++){
		sptr[i].showStudent();
	}

	// Array of Pointers
	// Explore More !!

	return 0;
}