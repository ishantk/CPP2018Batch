#include<iostream>
#include<string>
using namespace std;

// Abstract Class -> If class will have a pure virtual function
// We cannot create its Objects
class Shape{

public:

	// Pure Virtual Function
	// This is a kind of Rule created in Parent which a child must define
	virtual void draw() = 0;

	void fun(){
		cout<<"This is fun\n";
	}

};

class Rectangle : public Shape{

public:

	// It is mandatory to define draw function of Parent in Child
	void draw(){
		cout<<"Drawing a Rectangle\n";
	}

};

class Circle : public Shape{

public:

	void draw(){
		cout<<"Drawing a Circle\n";
	}

};

int main(){

	//Shape s;
	//s.draw();

	//Rectangle r;
	//r.draw();

	//Circle c;
	//c.draw();

	// Dynamic Object Construction
	// Pointer to Shape
	Shape *s;
	//s = new Shape(); // Object creation os Shape is an error
	//s->draw();
	
	// Run Time Polymorphism
	s = new Rectangle(); // Because Shape is Parent of Rectangle
	s->draw();
	s->fun();

	s = new Circle(); 	// Because Shape is Parent of Circle
	s->draw();
	


	return 0;
}