#include<iostream>
#include<string>
using namespace std;

class Student{

	// non static -> Property of Object
	int roll;
	string name;

public:

	// static -> Property of Class
	static string schoolName;

	// Declaring Methods and not defining them
	Student();
	void setStudent(int r, string n);
	void showStudent();

	static void showSchoolName(){
		cout<<"SchoolName: "<<schoolName<<"\n";
	}
};

// Declare varibale outside if they are static
string Student::schoolName;

// Lets define them outside the class	
// :: Scope Resolution Operator
Student::Student(){
	roll = 0;
	name = "NA";
}

void Student::setStudent(int r, string n){
	roll = r;
	name = n;
}

// Property of Object ? -> non static
// Property of Object can access Property of Class
void Student::showStudent(){
	cout<<roll<<" belongs to "<<name<<"\n";
	cout<<name<<" studies in "<<schoolName<<"\n";
}

int main(int argc, char const *argv[]){
	
	Student::schoolName = "ABC International";

	// Compile Time or Static Memory Management
	// Object Constructed in a static way !!
	Student s1;
	// Object can also access property of class
	s1.schoolName = "XYZ International";

	s1.setStudent(101,"John");

	// Run Time or Dynamic Memory Management
	// Object Constructed in a dynamic way !!
	Student *s2 = new Student();
	s2->setStudent(201,"Jennie");

	s1.showStudent();
	s2->showStudent();

	Student::showSchoolName();
	s1.showSchoolName();

	

	return 0;
}