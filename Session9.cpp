#include<iostream>
using namespace std;

class Point{

	// Attributes of Object
	// Data members, State of an Object, Instance Variables
	int x;
	int y;

public:

	// Constructor: which is a special method
	// name is same as that of class name
	// no return type
	// gets executed immediatley after object is created in memory
	// Default Constructors -> No Arguments(Inputs)
	Point(){
		x = 1;
		y = 2;
	}

	// Non Default Constructor
	// Parameterized Constructor
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}

	// Methods of Object
	// this-> is called this pointer which points to obejct in action
	void setPoint(int x, int y){
		this->x = x;
		this->y = y;
	}

	void showPoint(){
		cout<<"Point is: "<<x<<":"<<y<<"\n";
	}

	// Destructor
	// Executes when object is deleted from memory
	~Point(){
		cout<<"Object Destroyed !!\n";
	}

};

int main(int argc, char const *argv[]){
	
	// Object Construction Statement:
	// Static Object !! -> Stack
	// p1 is an Object !!
	Point p1;
	p1.setPoint(10,20);
	p1.showPoint();

	Point p2;
	p2.showPoint();

	Point p3(11, 17);
	p3.showPoint();

	// Dynamic Object !! -> Heap
	// Dynamic Memory Management
	// new is an operator which will create objects in the heap at run time
	Point* ptr1 = new Point();
	Point* ptr2 = new Point(100, 200);

	cout<<"ptr1 is: "<<ptr1<<" and address of ptr1: "<<&ptr1<<"\n";
	cout<<"ptr2 is: "<<ptr2<<" and address of ptr2: "<<&ptr2<<"\n";

	ptr1->showPoint();
	ptr2->showPoint();

	delete ptr1;
	delete ptr2;

	return 0;
}

// PS: Constructors are used to provide initial values to attributes of an object
//     Methods like setters are used to modify data afterwards


