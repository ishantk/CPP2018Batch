#include<iostream>
#include<string>
using namespace std;

// Class having a Friend Function

class Point{

	// Attributes
	int x, y;

public:

	Point(){
		x = 10;
		y = 20;
	}

	// Write Operation
	void setPoint(int x, int y){
		this->x = x;
		this->y = y;
	}

	// Read Operation
	void showPoint(){
		cout<<"Point is: "<<x<<":"<<y<<endl<<"\n";
	}

	// Firend Function is not property of Object
	friend void show(Point p);

};

// This is just a regular function
void show(Point p){
	// We are trying to access private data pf Point Object !!
	// i.e. Outside the Class which is not possible !!
	cout<<"Point in show"<<endl;
	cout<<p.x<<" : "<<p.y<<endl;
}

int main(){
	
	// Static Object Construction
	// Stack
	Point p1;

	//cout<<p1.x<<" : "<<p1.y<<"endl"; // error -> Data Hiding

	// Dynamic Object Construction
	// Heap
	Point* ptr = new Point();

	p1.setPoint(100, 200);
	ptr->setPoint(111, 222);

	p1.showPoint();
	ptr->showPoint();

	show(p1);

	return 0;
}