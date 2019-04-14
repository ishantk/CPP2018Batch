// Templates as in Objects

#include<iostream>				

using namespace std;

// You create a template so that it can accommodate any data type
template <typename T, typename U>	// this is syntax to create a template. T can be any name of your choice


class Point{

	// Attributes in Point Object can be any type
	T x;
	U y;

public:

	void setPoint(T x, U y){
		this->x = x;
		this->y = y;
	}

	void showPoint(){
		cout<<"x is: "<<x<<" and y is: "<<y<<"\n";
	}
};

int main(){

	// For Point p1 object T shall behave as int and U shall behave as float
	Point<int, float> p1;
	p1.setPoint(10, 20.22f);
	p1.showPoint();

	// For Point p2 object T shall behave as char and U shall behave as float
	Point<char, float> p2;
	p2.setPoint('i', 33.22f);
	p2.showPoint();

	return 0;

}
// You can try passing objects as types :)