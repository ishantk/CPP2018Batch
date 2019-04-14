// Templates as in Objects

#include<iostream>				

using namespace std;

// You create a template so that it can accommodate any data type
template <typename T>	// this is syntax to create a template. T can be any name of your choice

// Dofferent Point Objects can have attributes of different types :)
class Point{

	// Attributes in Point Object can be any type
	T x;
	T y;

public:

	// Set Point will set data for Object
	void setPoint(T x, T y){
		this->x = x;
		this->y = y;
	}

	// Set Point will show data for Object
	void showPoint(){
		cout<<"x is: "<<x<<" and y is: "<<y<<"\n";
	}
};

int main(){

	// For Point p1 object T shall behave as int
	Point<int> p1;
	p1.setPoint(10, 20);
	p1.showPoint();

	// For Point p2 object T shall behave as float
	Point<float> p2;
	p2.setPoint(10.2f, 20.33f);
	p2.showPoint();	

	// For Point p3 object T shall behave as char
	Point<char> p3;
	p3.setPoint('a', 'b');
	p3.showPoint();	

	return 0;

}