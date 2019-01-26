#include<iostream>
#include<string>
using namespace std;

// Classes having a Friend Function
// Friend Function as a Bridge between two classes


class Vehicle; // Declare the Class

class Driver{

	// Attributes
	string name;
	int age;

public:

	// Constructor For Initialization of Data in Object
	Driver(){
		name = "NA";
		age = 0;
	}

	Driver(string name, int age){
		this->name = name;
		this->age = age;
	}

	// Write Data in Object
	void setDriverData(string name, int age){
		this->name = name;
		this->age = age;
	}

	void showDriverDetails(){
		cout<<"Driver "<<name<<" is "<<age<<" years old"<<endl;
	}

	// friend function can only be in public/private or protected section
	friend void show(Driver d, Vehicle v);

};

class Vehicle{

	// Attributes
	string regNumber;
	string model;
	int engine;

	friend void show(Driver d, Vehicle v);

public:

	// Constructor For Initialization of Data in Object
	Vehicle(){
		regNumber = "NA";
		model = "NA";
		engine = 0;
	}

	// Write Data in Object
	void setVehicleData(string regNumber, string model, int engine){
		this->regNumber = regNumber;
		this->model = model;
		this->engine = engine;
	}

	void showVehicleDetails(){ 
		cout<<"Vehicle "<<model<<" has a Registration Number "<<regNumber<<" with "<<engine<<" cc engine"<<endl;
	}

};

void show(Driver d, Vehicle v){
	cout<<"Driver Name: "<<d.name<<endl;
	cout<<"Vehicle Reg Num: "<<v.regNumber<<endl;
}

int main(){

	Driver d1("John", 32);

	Vehicle v1;
	v1.setVehicleData("PB10AA3333","Honda City", 1499);

	d1.showDriverDetails();
	v1.showVehicleDetails();

	// error : Since we cannot access private data
	//cout<<"Driver Name: "<<d1.name<<endl;
	//cout<<"Vehicle Reg Num: "<<v1.regNumber<<endl;
	
	show(d1, v1);

	return 0;
}