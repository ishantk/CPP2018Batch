#include<iostream>
#include<string>
using namespace std;

class Shape{

public:

	// Virtual Function
	virtual void draw(){
		cout<<"Drawing a Shape\n";
	}

};

class Rectangle : public Shape{

public:

	// Overriding draw of Parent Class Shape in Child Class Rectangle
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
	//s = new Shape();
	//s->draw();

	// Run Time Polymorphism
	s = new Rectangle(); // Because Shape is Parent of Rectangle
	s->draw();

	s = new Circle(); 	// Because Shape is Parent of Circle
	s->draw();
	
	return 0;
}